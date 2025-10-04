#pragma once
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include "settings.h"
#include "MidiRecorder.h"
#include <vector>
#pragma comment(lib, "winmm.lib")

namespace WIrtualnySyntezator {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		HMIDIOUT midiOutHandle;
		List<KeyValuePair<String^, String^>>^ keybinds;
		Dictionary<String^, bool>^ keyStates;
		Dictionary<int, Button^>^ noteToButtonMap;
		settings^ settingsForm;
		MidiRecorder^ recorder;

	public:
		MyForm(void)
		{
			InitializeComponent();
			keybinds = gcnew List<KeyValuePair<String^, String^>>();
			keyStates = gcnew Dictionary<String^, bool>();
			noteToButtonMap = gcnew Dictionary<int, Button^>();
			settingsForm = gcnew settings();
			settingsForm->KeybindsUpdated += gcnew KeybindsUpdatedHandler(this, &MyForm::LoadKeybinds);
			recorder = gcnew MidiRecorder();
			InitializeMidi();
			InitializeKeybinds();
			InitializeButtonMapping();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			CloseMidi();
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ SaveRecordingButton;

	private: System::Windows::Forms::Button^ StartRecordingButton;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->SaveRecordingButton = (gcnew System::Windows::Forms::Button());
			this->StartRecordingButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(22, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(58, 301);
			this->button1->TabIndex = 4;
			this->button1->Tag = L"48";
			this->button1->Text = L"C\r\nB#";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(54, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 202);
			this->button2->TabIndex = 5;
			this->button2->Tag = L"49";
			this->button2->Text = L"Db\r\nC#";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(80, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(58, 301);
			this->button3->TabIndex = 6;
			this->button3->Tag = L"50";
			this->button3->Text = L"D\r\n ";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(121, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(42, 202);
			this->button4->TabIndex = 7;
			this->button4->Tag = L"51";
			this->button4->Text = L"Eb\r\nD#";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button4->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(138, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(58, 301);
			this->button5->TabIndex = 8;
			this->button5->Tag = L"52";
			this->button5->Text = L"E\r\nFb";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button5->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(196, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(58, 301);
			this->button6->TabIndex = 9;
			this->button6->Tag = L"53";
			this->button6->Text = L"F\r\nE#";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button6->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(225, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(42, 202);
			this->button7->TabIndex = 10;
			this->button7->Tag = L"54";
			this->button7->Text = L"Gb\r\nF#";
			this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button7->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(254, 12);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(58, 301);
			this->button8->TabIndex = 11;
			this->button8->Tag = L"55";
			this->button8->Text = L"G\r\n ";
			this->button8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button8->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Black;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(289, 12);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(42, 202);
			this->button9->TabIndex = 12;
			this->button9->Tag = L"56";
			this->button9->Text = L"Ab\r\nG#";
			this->button9->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button9->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(312, 12);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(58, 301);
			this->button10->TabIndex = 13;
			this->button10->Tag = L"57";
			this->button10->Text = L"A\r\n ";
			this->button10->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button10->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Black;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->Location = System::Drawing::Point(354, 12);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(42, 202);
			this->button11->TabIndex = 14;
			this->button11->Tag = L"58";
			this->button11->Text = L"Bb\r\nA#";
			this->button11->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button11->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(370, 12);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(58, 301);
			this->button12->TabIndex = 15;
			this->button12->Tag = L"59";
			this->button12->Text = L"B\r\nCb";
			this->button12->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button12->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button37->Location = System::Drawing::Point(1040, 564);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(212, 105);
			this->button37->TabIndex = 16;
			this->button37->Text = L"Settings";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Black;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button14->Location = System::Drawing::Point(458, 12);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(42, 202);
			this->button14->TabIndex = 19;
			this->button14->Tag = L"61";
			this->button14->Text = L"Db\r\nC#";
			this->button14->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button14->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Black;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button23->Location = System::Drawing::Point(758, 12);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(42, 202);
			this->button23->TabIndex = 28;
			this->button23->Tag = L"70";
			this->button23->Text = L"Bb\r\nA#";
			this->button23->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button23->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Black;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button21->Location = System::Drawing::Point(693, 12);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(42, 202);
			this->button21->TabIndex = 26;
			this->button21->Tag = L"68";
			this->button21->Text = L"Ab\r\nG#";
			this->button21->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button21->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Black;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button19->Location = System::Drawing::Point(629, 12);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(42, 202);
			this->button19->TabIndex = 24;
			this->button19->Tag = L"66";
			this->button19->Text = L"Gb\r\nF#";
			this->button19->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button19->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Black;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button16->Location = System::Drawing::Point(525, 12);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(42, 202);
			this->button16->TabIndex = 21;
			this->button16->Tag = L"63";
			this->button16->Text = L"Eb\r\nD#";
			this->button16->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button16->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button17->Location = System::Drawing::Point(544, 12);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(58, 301);
			this->button17->TabIndex = 22;
			this->button17->Tag = L"64";
			this->button17->Text = L"E\r\nFb";
			this->button17->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button17->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->Location = System::Drawing::Point(602, 12);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(58, 301);
			this->button18->TabIndex = 23;
			this->button18->Tag = L"65";
			this->button18->Text = L"F\r\nE#";
			this->button18->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button18->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->Location = System::Drawing::Point(718, 12);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(58, 301);
			this->button22->TabIndex = 27;
			this->button22->Tag = L"69";
			this->button22->Text = L"A\r\n ";
			this->button22->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button22->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::White;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button24->Location = System::Drawing::Point(776, 12);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(58, 301);
			this->button24->TabIndex = 29;
			this->button24->Tag = L"71";
			this->button24->Text = L"B\r\nCb";
			this->button24->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button24->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(428, 12);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(58, 301);
			this->button13->TabIndex = 18;
			this->button13->Tag = L"60";
			this->button13->Text = L"C\r\nB#";
			this->button13->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button13->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->Location = System::Drawing::Point(486, 12);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(58, 301);
			this->button15->TabIndex = 20;
			this->button15->Tag = L"62";
			this->button15->Text = L"D\r\n ";
			this->button15->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button15->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->Location = System::Drawing::Point(660, 12);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(58, 301);
			this->button20->TabIndex = 25;
			this->button20->Tag = L"67";
			this->button20->Text = L"G\r\n ";
			this->button20->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button20->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Black;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button26->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button26->Location = System::Drawing::Point(866, 12);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(42, 202);
			this->button26->TabIndex = 31;
			this->button26->Tag = L"73";
			this->button26->Text = L"Db\r\nC#";
			this->button26->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button26->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::Black;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button35->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button35->Location = System::Drawing::Point(1166, 12);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(42, 202);
			this->button35->TabIndex = 40;
			this->button35->Tag = L"82";
			this->button35->Text = L"Bb\r\nA#";
			this->button35->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button35->UseVisualStyleBackColor = false;
			this->button35->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button35->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::Black;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button33->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button33->Location = System::Drawing::Point(1101, 12);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(42, 202);
			this->button33->TabIndex = 38;
			this->button33->Tag = L"80";
			this->button33->Text = L"Ab\r\nG#";
			this->button33->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button33->UseVisualStyleBackColor = false;
			this->button33->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button33->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::Black;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button31->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button31->Location = System::Drawing::Point(1037, 12);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(42, 202);
			this->button31->TabIndex = 36;
			this->button31->Tag = L"78";
			this->button31->Text = L"Gb\r\nF#";
			this->button31->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button31->UseVisualStyleBackColor = false;
			this->button31->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button31->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Black;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button28->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button28->Location = System::Drawing::Point(933, 12);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(42, 202);
			this->button28->TabIndex = 33;
			this->button28->Tag = L"75";
			this->button28->Text = L"Eb\r\nD#";
			this->button28->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button28->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::White;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button29->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button29->Location = System::Drawing::Point(950, 12);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(58, 301);
			this->button29->TabIndex = 34;
			this->button29->Tag = L"76";
			this->button29->Text = L"E\r\nFb";
			this->button29->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button29->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::White;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button30->Location = System::Drawing::Point(1008, 12);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(58, 301);
			this->button30->TabIndex = 35;
			this->button30->Tag = L"77";
			this->button30->Text = L"F\r\nE#";
			this->button30->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button30->UseVisualStyleBackColor = false;
			this->button30->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button30->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::White;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button34->Location = System::Drawing::Point(1124, 12);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(58, 301);
			this->button34->TabIndex = 39;
			this->button34->Tag = L"81";
			this->button34->Text = L"A\r\n ";
			this->button34->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button34->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::White;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button36->Location = System::Drawing::Point(1182, 12);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(58, 301);
			this->button36->TabIndex = 41;
			this->button36->Tag = L"83";
			this->button36->Text = L"B\r\nCb";
			this->button36->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button36->UseVisualStyleBackColor = false;
			this->button36->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button36->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::White;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button25->Location = System::Drawing::Point(834, 12);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(58, 301);
			this->button25->TabIndex = 30;
			this->button25->Tag = L"72";
			this->button25->Text = L"C\r\nB#";
			this->button25->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button25->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::White;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button27->Location = System::Drawing::Point(892, 12);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(58, 301);
			this->button27->TabIndex = 32;
			this->button27->Tag = L"74";
			this->button27->Text = L"D\r\n ";
			this->button27->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button27->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::White;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button32->Location = System::Drawing::Point(1066, 12);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(58, 301);
			this->button32->TabIndex = 37;
			this->button32->Tag = L"79";
			this->button32->Text = L"G\r\n ";
			this->button32->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button32->UseVisualStyleBackColor = false;
			this->button32->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->button32->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			// 
			// SaveRecordingButton
			// 
			this->SaveRecordingButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->SaveRecordingButton->Location = System::Drawing::Point(12, 564);
			this->SaveRecordingButton->Name = L"SaveRecordingButton";
			this->SaveRecordingButton->Size = System::Drawing::Size(212, 105);
			this->SaveRecordingButton->TabIndex = 42;
			this->SaveRecordingButton->Text = L"Save Recording";
			this->SaveRecordingButton->UseVisualStyleBackColor = true;
			this->SaveRecordingButton->Click += gcnew System::EventHandler(this, &MyForm::SaveRecordingButton_Click);
			// 
			// StartRecordingButton
			// 
			this->StartRecordingButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->StartRecordingButton->Location = System::Drawing::Point(230, 564);
			this->StartRecordingButton->Name = L"StartRecordingButton";
			this->StartRecordingButton->Size = System::Drawing::Size(212, 105);
			this->StartRecordingButton->TabIndex = 43;
			this->StartRecordingButton->Text = L"Start Recording";
			this->StartRecordingButton->UseVisualStyleBackColor = true;
			this->StartRecordingButton->Click += gcnew System::EventHandler(this, &MyForm::StartRecordingButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->StartRecordingButton);
			this->Controls->Add(this->SaveRecordingButton);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button36);
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"Wirtualny Syntezator";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseDown);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button_MouseUp);
			this->ResumeLayout(false);

		}
#pragma endregion
		
		void LoadKeybinds()
		{
			try
			{
				keybinds->Clear();
				keyStates->Clear();
				array<String^>^ lines = File::ReadAllLines("keybinds.txt");
				for each (String^ line in lines)
				{
					array<String^>^ parts = line->Split('\t');
					if (parts->Length == 2)
					{
						String^ key = parts[0];
						String^ value = parts[1];
						keybinds->Add(KeyValuePair<String^, String^>(key, value));
						keyStates->Add(value, false);
					}
				}
			}
			catch (Exception^ ex)
			{
				Console::WriteLine("An error occured while loading the keybinds: " + ex->Message);
			}
		}
		void InitializeKeybinds()
		{
			if (!File::Exists("default_keybinds.txt"))
			{
				defaultKeybinds();
			}
			if (!File::Exists("keybinds.txt"))
			{
				File::Copy("default_keybinds.txt", "keybinds.txt", true);
				Console::WriteLine("File copied successfully");
			}
			LoadKeybinds();
			
		}
		void InitializeButtonMapping()
		{
			for (int i = 1; i <= 36; i++)
			{
				int midiNote = 47 + i;
				String^ buttonName = "button" + i.ToString();
				Button^ button = safe_cast<Button^>(this->Controls[buttonName]);
				if (button != nullptr)
					noteToButtonMap[midiNote] = button;
				else
					Console::WriteLine("Button not found: " + buttonName);
			}
		}
		void InitializeMidi()
		{			
			pin_ptr<HMIDIOUT> pMidiOutHandle = &midiOutHandle;
			MMRESULT result = midiOutOpen(pMidiOutHandle, 0, 0, 0, CALLBACK_NULL);
			if (result != MMSYSERR_NOERROR)
			{
				Console::WriteLine("Failed to open MIDI output device.");
			}
		}
		void createDefaultKeybindsFile(const std::string& filename)
		{
			std::vector<std::pair<std::string, std::string>> defaultkeybinds = {
				{"C3", "1"}, {"Db3", "2"}, {"D3", "3"}, {"Eb3", "4"}, {"E3", "5"}, {"F3", "6"},
				{"Gb3", "7"}, {"G3", "8"}, {"Ab3", "9"}, {"A3", "0"}, {"Bb3", "-"}, {"B3", "="},
				{"C4", "q"}, {"Db4", "w"}, {"D4", "e"}, {"Eb4", "r"}, {"E4", "t"}, {"F4", "y"},
				{"Gb4", "u"}, {"G4", "i"}, {"Ab4", "o"}, {"A4", "p"}, {"Bb4", "["}, {"B4", "]"},
				{"C5", "a"}, {"Db5", "s"}, {"D5", "d"}, {"Eb5", "f"}, {"E5", "g"}, {"F5", "h"},
				{"Gb5", "j"}, {"G5", "k"}, {"Ab5", "l"}, {"A5", ";"}, {"Bb5", "'"}, {"B5", "/"}
			};

			std::ofstream file(filename);
			if (!file.is_open())
			{
				std::cerr << "failed to open the file: " << filename << std::endl;
				return;
			}

			for (const auto& pair : defaultkeybinds)
			{
				file << pair.first << "\t" << pair.second << std::endl;
			}
		}
		void defaultKeybinds()
		{
			std::string filename = "default_keybinds.txt";
			std::ifstream checkfile(filename);
			Console::WriteLine("Creating default file");
			createDefaultKeybindsFile(filename);
			Console::WriteLine("File created successfully");
		}
		void CloseMidi()
		{
			if (midiOutHandle)
			{
				midiOutClose(midiOutHandle);
				midiOutHandle = nullptr;
			}
		}
		void PlayMidiNoteOn(int midiNote)
		{
			DWORD noteOnMessage = 0x0090 | (midiNote << 8) | (100 << 16);
			MMRESULT result = midiOutShortMsg(midiOutHandle, noteOnMessage);
			if (recorder->isRecording)
			{
				recorder->RecordEvent(noteOnMessage);
			}
			if (result != MMSYSERR_NOERROR)
			{
				std::cerr << "Failed to send Note On message." << std::endl;
				midiOutClose(midiOutHandle);
				return;
			}
		}
		void PlayMidiNoteOff(int midiNote)
		{
			DWORD noteOffMessage = 0x0080 | (midiNote << 8) | (0x00 << 16);
			MMRESULT result = midiOutShortMsg(midiOutHandle, noteOffMessage);
			if (recorder->isRecording)
			{
				recorder->RecordEvent(noteOffMessage);
			}
			if (result != MMSYSERR_NOERROR)
			{
				std::cerr << "Failed to send Note Off message." << std::endl;
				midiOutClose(midiOutHandle);
				return;
			}
		}
		private: System::Void button_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
		{
			Button^ clickedButton = dynamic_cast<Button^>(sender);
			if (clickedButton != nullptr)
			{
				if (clickedButton->Tag != nullptr)
				{
					int midiNote = System::Convert::ToInt32(clickedButton->Tag);
					if (clickedButton->BackColor == Color::White)
					{
						clickedButton->BackColor = Color::Yellow;
						clickedButton->ForeColor = SystemColors::ControlText;
					}
					else
					{
						clickedButton->BackColor = Color::Yellow;
						clickedButton->ForeColor = Color::Black;
					}
					PlayMidiNoteOn(midiNote);
				}
			}
		}
		private: System::Void button_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
		{
			Button^ clickedButton = dynamic_cast<Button^>(sender);
			if (clickedButton != nullptr)
			{
				if (clickedButton->Tag != nullptr)
				{
					int midiNote = System::Convert::ToInt32(clickedButton->Tag);
					if (clickedButton->ForeColor == SystemColors::ControlText)
					{
						clickedButton->BackColor = Color::White;
					}
					else
					{
						clickedButton->BackColor = Color::Black;
						clickedButton->ForeColor = Color::White;
					}
					PlayMidiNoteOff(midiNote);
				}
			}
		}
		private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			settingsForm->WriteTextOnTextBoxes("keybinds.txt");
			settingsForm->ShowDialog();
		}
		String^ KeysToString(String^ keyName, KeyEventArgs^ e)
		{
			keyName = e->KeyCode.ToString()->ToLower();
			if (e->KeyCode == Keys::OemOpenBrackets)
				keyName = "[";
			else if (e->KeyCode == Keys::OemCloseBrackets)
				keyName = "]";
			else if (e->KeyCode == Keys::OemMinus)
				keyName = "-";
			else if (e->KeyCode == Keys::Oemplus)
				keyName = "=";
			else if (e->KeyCode == Keys::OemSemicolon)
				keyName = ";";
			else if (e->KeyCode == Keys::OemQuotes)
				keyName = "'";
			else if (e->KeyCode == Keys::Oemcomma)
				keyName = ",";
			else if (e->KeyCode == Keys::OemPeriod)
				keyName = ".";
			else if (e->KeyCode == Keys::OemQuestion)
				keyName = "/";
			else if (e->KeyCode == Keys::OemPipe)
				keyName = "\\";
			else if (e->KeyCode == Keys::Oemtilde)
				keyName = "`";
			else if (e->KeyCode >= Keys::D0 && e->KeyCode <= Keys::D9)
			{
				int keyValue = static_cast<int>(e->KeyCode) - static_cast<int>(Keys::D0);
				keyName = keyValue.ToString();
			}
			return keyName;
		}
		private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
		{
			String^ keyName;
			keyName = KeysToString(keyName, e);

			if (keyStates->ContainsKey(keyName) && !keyStates[keyName])
			{
				keyStates[keyName] = true;
				for (int i = 0; i < keybinds->Count; i++)
				{
					if (keybinds[i].Value == keyName)
					{
						int midiNote = i + 48;
						Button^ button = noteToButtonMap[midiNote];
						if (button->BackColor == Color::White)
						{
							button->BackColor = Color::Yellow;
							button->ForeColor = SystemColors::ControlText;
						}
						else
						{
							button->BackColor = Color::Yellow;
							button->ForeColor = Color::Black;
						}
						PlayMidiNoteOn(midiNote);
						break;
					}
				}
			}
		}
		private: System::Void MyForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
		{
			String^ keyName;
			keyName = KeysToString(keyName, e);

			if (keyStates->ContainsKey(keyName) && keyStates[keyName])
			{
				keyStates[keyName] = false;

				for (int i = 0; i < keybinds->Count; i++)
				{
					if (keybinds[i].Value == keyName)
					{
						int midiNote = i + 48;
						Button^ button = noteToButtonMap[midiNote];
						if (button->ForeColor == SystemColors::ControlText)
						{
							button->BackColor = Color::White;
						}
						else
						{
							button->BackColor = Color::Black;
							button->ForeColor = Color::White;
						}
						PlayMidiNoteOff(midiNote);
						break;
					}
				}
			}
		}
		private: System::Void StartRecordingButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (StartRecordingButton->Text == "Start Recording")
			{
				StartRecordingButton->Text = L"Stop Recording";
				StartRecordingButton->BackColor = Color::Red;
				recorder->StartRecording();
			}
			else
			{
				StartRecordingButton->Text = L"Start Recording";
				StartRecordingButton->BackColor = SystemColors::Control;
				recorder->StopRecording();
				MessageBox::Show("Recording stopped.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		private: System::Void SaveRecordingButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
			saveFileDialog->Filter = "MIDI files (*.mid)|*.mid|All files (*.*)|*.*";
			saveFileDialog->FilterIndex = 1;
			saveFileDialog->RestoreDirectory = true;
			
			if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				recorder->SaveToFile(saveFileDialog->FileName);
				MessageBox::Show("Recording saved.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	};
}
