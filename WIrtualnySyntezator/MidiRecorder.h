#pragma once
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <vector>

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Windows::Forms;
using namespace System::Diagnostics;

public ref class MidiRecorder 
{
private:
	ref struct MidiEvent {
		long time;
		DWORD message;
		MidiEvent(long t, DWORD m) : time(t), message(m) {}
	};

	List<MidiEvent^>^ events;
	Stopwatch^ stopwatch;
public:
	bool isRecording;

public:
	MidiRecorder() 
	{
		events = gcnew List<MidiEvent^>();
		stopwatch = gcnew Stopwatch();
		isRecording = false;
	}
	void StartRecording()
	{
		events->Clear();
		stopwatch->Reset();
		stopwatch->Start();
		isRecording = true;
	}
	void StopRecording() 
	{
		stopwatch->Stop();
		isRecording = false;
	}
	void RecordEvent(DWORD midiMsg) {
		if (isRecording) {
			long time = stopwatch->ElapsedMilliseconds;
			events->Add(gcnew MidiEvent(time, midiMsg));
		}
	}
	void SaveToFile(String^ filename)
	{
		try 
		{
			FileStream^ fs = gcnew FileStream(filename, FileMode::Create, FileAccess::Write);
			BinaryWriter^ writer = gcnew BinaryWriter(fs);

			// Write MIDI header
			writer->Write(System::Text::Encoding::ASCII->GetBytes("MThd"));
			writer->Write(gcnew array<Byte> {0x00, 0x00, 0x00, 0x06}); // Header length
			writer->Write(gcnew array<Byte> { 0x00, 0x01 }); // Format type
			writer->Write(gcnew array<Byte> { 0x00, 0x01 }); // Number of tracks
			writer->Write(gcnew array<Byte> { 0x01, 0xE0 }); // Division (ticks per quarter note)

			// Write track chunk
			writer->Write(System::Text::Encoding::ASCII->GetBytes("MTrk"));

			MemoryStream^ ms = gcnew MemoryStream();
			BinaryWriter^ trackWriter = gcnew BinaryWriter(ms);

			// Write MIDI events
			long lastTime = 0;
			for each (MidiEvent ^ ev in events) {
				long deltaTime = ev->time - lastTime;
				WriteVariableLength(trackWriter, deltaTime);
				trackWriter->Write((byte)(ev->message & 0xFF));
				trackWriter->Write((byte)((ev->message >> 8) & 0xFF));
				trackWriter->Write((byte)((ev->message >> 16) & 0xFF));
				lastTime = ev->time;
			}

			// Write end of track
			WriteVariableLength(trackWriter, 0);
			trackWriter->Write((byte)0xFF);
			trackWriter->Write((byte)0x2F);
			trackWriter->Write((byte)0x00);

			// Write track length
			int trackLength = ms->Length;
			writer->Write(gcnew array<Byte> {
				(byte)((trackLength >> 24) & 0xFF),
				(byte)((trackLength >> 16) & 0xFF),
				(byte)((trackLength >> 8) & 0xFF),
				(byte)(trackLength & 0xFF)
			});

			writer->Write(ms->ToArray());

			writer->Close();
			fs->Close();
		}
		catch (Exception^ ex) 
		{
			MessageBox::Show("Failed to save MIDI file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private:
	void WriteVariableLength(BinaryWriter^ writer, long value) 
	{
		long buffer = value & 0x7F;
		while ((value >>= 7) > 0) {
			buffer <<= 8;
			buffer |= ((value & 0x7F) | 0x80);
		}
		while (true) {
			writer->Write((byte)(buffer & 0xFF));
			if (buffer & 0x80) buffer >>= 8;
			else break;
		}
	}
};

