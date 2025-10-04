#pragma once
#include <fstream>
#include <vector>
#include <iostream>
#include <string>

namespace WIrtualnySyntezator {

	using namespace System;
    using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::Collections::Generic;
    using namespace System::Text;

    public delegate void KeybindsUpdatedHandler();

	/// <summary>
	/// Summary for settings
	/// </summary>
	public ref class settings : public System::Windows::Forms::Form
	{
    private:
        List<KeyValuePair<String^, String^>>^ keybinds;
        List<TextBox^>^ listTextBox;
	public:
        event KeybindsUpdatedHandler^ KeybindsUpdated;
		settings()
		{
			InitializeComponent();
            keybinds = gcnew List<KeyValuePair<String^, String^>>();
            listTextBox = gcnew List<TextBox^>();
            InitializeTextBoxes();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::TextBox^ textBox12;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::TextBox^ textBox13;
    private: System::Windows::Forms::TextBox^ textBox14;
    private: System::Windows::Forms::TextBox^ textBox15;
    private: System::Windows::Forms::TextBox^ textBox16;
    private: System::Windows::Forms::TextBox^ textBox17;
    private: System::Windows::Forms::TextBox^ textBox18;
    private: System::Windows::Forms::TextBox^ textBox19;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::TextBox^ textBox20;
    private: System::Windows::Forms::TextBox^ textBox21;
    private: System::Windows::Forms::TextBox^ textBox22;
    private: System::Windows::Forms::TextBox^ textBox23;
    private: System::Windows::Forms::TextBox^ textBox24;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::TextBox^ textBox25;
    private: System::Windows::Forms::TextBox^ textBox26;
    private: System::Windows::Forms::TextBox^ textBox27;
    private: System::Windows::Forms::TextBox^ textBox28;
    private: System::Windows::Forms::TextBox^ textBox29;
    private: System::Windows::Forms::TextBox^ textBox30;
    private: System::Windows::Forms::TextBox^ textBox31;
    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::Label^ label39;
    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::Label^ label42;
    private: System::Windows::Forms::TextBox^ textBox32;
    private: System::Windows::Forms::TextBox^ textBox33;
    private: System::Windows::Forms::TextBox^ textBox34;
    private: System::Windows::Forms::TextBox^ textBox35;
    private: System::Windows::Forms::TextBox^ textBox36;
    private: System::Windows::Forms::Label^ label43;
    private: System::Windows::Forms::Label^ label44;
    private: System::Windows::Forms::Label^ label45;

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
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->textBox19 = (gcnew System::Windows::Forms::TextBox());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->textBox20 = (gcnew System::Windows::Forms::TextBox());
            this->textBox23 = (gcnew System::Windows::Forms::TextBox());
            this->textBox21 = (gcnew System::Windows::Forms::TextBox());
            this->textBox24 = (gcnew System::Windows::Forms::TextBox());
            this->textBox22 = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->textBox25 = (gcnew System::Windows::Forms::TextBox());
            this->textBox26 = (gcnew System::Windows::Forms::TextBox());
            this->textBox27 = (gcnew System::Windows::Forms::TextBox());
            this->textBox28 = (gcnew System::Windows::Forms::TextBox());
            this->textBox29 = (gcnew System::Windows::Forms::TextBox());
            this->textBox30 = (gcnew System::Windows::Forms::TextBox());
            this->textBox31 = (gcnew System::Windows::Forms::TextBox());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->textBox34 = (gcnew System::Windows::Forms::TextBox());
            this->textBox32 = (gcnew System::Windows::Forms::TextBox());
            this->textBox36 = (gcnew System::Windows::Forms::TextBox());
            this->textBox35 = (gcnew System::Windows::Forms::TextBox());
            this->textBox33 = (gcnew System::Windows::Forms::TextBox());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button1->Location = System::Drawing::Point(996, 610);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(125, 59);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Save";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &settings::saveButton_Click);
            // 
            // button2
            // 
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button2->Location = System::Drawing::Point(1127, 610);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(125, 59);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Quit";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &settings::quitButton_Click);
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
            this->tableLayoutPanel1->ColumnCount = 2;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->Controls->Add(this->label14, 0, 12);
            this->tableLayoutPanel1->Controls->Add(this->label8, 0, 6);
            this->tableLayoutPanel1->Controls->Add(this->label7, 0, 5);
            this->tableLayoutPanel1->Controls->Add(this->label6, 0, 4);
            this->tableLayoutPanel1->Controls->Add(this->label5, 0, 3);
            this->tableLayoutPanel1->Controls->Add(this->label4, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->label3, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->label2, 1, 0);
            this->tableLayoutPanel1->Controls->Add(this->textBox1, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->textBox2, 1, 2);
            this->tableLayoutPanel1->Controls->Add(this->textBox3, 1, 3);
            this->tableLayoutPanel1->Controls->Add(this->textBox4, 1, 4);
            this->tableLayoutPanel1->Controls->Add(this->textBox5, 1, 5);
            this->tableLayoutPanel1->Controls->Add(this->textBox6, 1, 6);
            this->tableLayoutPanel1->Controls->Add(this->textBox7, 1, 7);
            this->tableLayoutPanel1->Controls->Add(this->label9, 0, 7);
            this->tableLayoutPanel1->Controls->Add(this->label10, 0, 8);
            this->tableLayoutPanel1->Controls->Add(this->label11, 0, 9);
            this->tableLayoutPanel1->Controls->Add(this->label12, 0, 10);
            this->tableLayoutPanel1->Controls->Add(this->label13, 0, 11);
            this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->textBox12, 1, 12);
            this->tableLayoutPanel1->Controls->Add(this->textBox11, 1, 11);
            this->tableLayoutPanel1->Controls->Add(this->textBox10, 1, 10);
            this->tableLayoutPanel1->Controls->Add(this->textBox9, 1, 9);
            this->tableLayoutPanel1->Controls->Add(this->textBox8, 1, 8);
            this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 13;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(387, 538);
            this->tableLayoutPanel1->TabIndex = 3;
            // 
            // label14
            // 
            this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label14->Location = System::Drawing::Point(4, 496);
            this->label14->Margin = System::Windows::Forms::Padding(3);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(186, 38);
            this->label14->TabIndex = 30;
            this->label14->Text = L"B,Cb";
            this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label8
            // 
            this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label8->Location = System::Drawing::Point(4, 250);
            this->label8->Margin = System::Windows::Forms::Padding(3);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(186, 34);
            this->label8->TabIndex = 12;
            this->label8->Text = L"F,E#";
            this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label7
            // 
            this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label7->Location = System::Drawing::Point(4, 209);
            this->label7->Margin = System::Windows::Forms::Padding(3);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(186, 34);
            this->label7->TabIndex = 10;
            this->label7->Text = L"E,Fb";
            this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label6
            // 
            this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label6->Location = System::Drawing::Point(4, 168);
            this->label6->Margin = System::Windows::Forms::Padding(3);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(186, 34);
            this->label6->TabIndex = 8;
            this->label6->Text = L"Eb,D#";
            this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label5
            // 
            this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label5->Location = System::Drawing::Point(4, 127);
            this->label5->Margin = System::Windows::Forms::Padding(3);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(186, 34);
            this->label5->TabIndex = 6;
            this->label5->Text = L"D";
            this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label4
            // 
            this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label4->Location = System::Drawing::Point(4, 86);
            this->label4->Margin = System::Windows::Forms::Padding(3);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(186, 34);
            this->label4->TabIndex = 4;
            this->label4->Text = L"Db,C#";
            this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label3
            // 
            this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label3->Location = System::Drawing::Point(4, 45);
            this->label3->Margin = System::Windows::Forms::Padding(3);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(186, 34);
            this->label3->TabIndex = 2;
            this->label3->Text = L"C,B#";
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label2
            // 
            this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label2->Location = System::Drawing::Point(197, 4);
            this->label2->Margin = System::Windows::Forms::Padding(3);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(186, 34);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Keybind";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox1
            // 
            this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox1->Location = System::Drawing::Point(197, 45);
            this->textBox1->MaxLength = 1;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(186, 38);
            this->textBox1->TabIndex = 13;
            this->textBox1->Tag = L"C3";
            this->textBox1->Text = L"1";
            this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox2
            // 
            this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox2->Location = System::Drawing::Point(197, 86);
            this->textBox2->MaxLength = 1;
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(186, 38);
            this->textBox2->TabIndex = 14;
            this->textBox2->Tag = L"Db3";
            this->textBox2->Text = L"2";
            this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox3
            // 
            this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox3->Location = System::Drawing::Point(197, 127);
            this->textBox3->MaxLength = 1;
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(186, 38);
            this->textBox3->TabIndex = 15;
            this->textBox3->Tag = L"D3";
            this->textBox3->Text = L"3";
            this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox4
            // 
            this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox4->Location = System::Drawing::Point(197, 168);
            this->textBox4->MaxLength = 1;
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(186, 38);
            this->textBox4->TabIndex = 16;
            this->textBox4->Tag = L"Eb3";
            this->textBox4->Text = L"4";
            this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox5
            // 
            this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox5->Location = System::Drawing::Point(197, 209);
            this->textBox5->MaxLength = 1;
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(186, 38);
            this->textBox5->TabIndex = 17;
            this->textBox5->Tag = L"E3";
            this->textBox5->Text = L"5";
            this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox6
            // 
            this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox6->Location = System::Drawing::Point(197, 250);
            this->textBox6->MaxLength = 1;
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(186, 38);
            this->textBox6->TabIndex = 18;
            this->textBox6->Tag = L"F3";
            this->textBox6->Text = L"6";
            this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox7
            // 
            this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox7->Location = System::Drawing::Point(197, 291);
            this->textBox7->MaxLength = 1;
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(186, 38);
            this->textBox7->TabIndex = 19;
            this->textBox7->Tag = L"Gb3";
            this->textBox7->Text = L"7";
            this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label9
            // 
            this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label9->Location = System::Drawing::Point(4, 291);
            this->label9->Margin = System::Windows::Forms::Padding(3);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(186, 34);
            this->label9->TabIndex = 25;
            this->label9->Text = L"Gb,F#";
            this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label10
            // 
            this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label10->Location = System::Drawing::Point(4, 332);
            this->label10->Margin = System::Windows::Forms::Padding(3);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(186, 34);
            this->label10->TabIndex = 26;
            this->label10->Text = L"G";
            this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label11
            // 
            this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label11->Location = System::Drawing::Point(4, 373);
            this->label11->Margin = System::Windows::Forms::Padding(3);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(186, 34);
            this->label11->TabIndex = 27;
            this->label11->Text = L"Ab,G#";
            this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label12
            // 
            this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label12->Location = System::Drawing::Point(4, 414);
            this->label12->Margin = System::Windows::Forms::Padding(3);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(186, 34);
            this->label12->TabIndex = 28;
            this->label12->Text = L"A";
            this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label13
            // 
            this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label13->Location = System::Drawing::Point(4, 455);
            this->label13->Margin = System::Windows::Forms::Padding(3);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(186, 34);
            this->label13->TabIndex = 29;
            this->label13->Text = L"Bb,A#";
            this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label1
            // 
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label1->Location = System::Drawing::Point(4, 4);
            this->label1->Margin = System::Windows::Forms::Padding(3);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(186, 34);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Note";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox12
            // 
            this->textBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox12->Location = System::Drawing::Point(197, 496);
            this->textBox12->MaxLength = 1;
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(186, 38);
            this->textBox12->TabIndex = 24;
            this->textBox12->Tag = L"B3";
            this->textBox12->Text = L"=";
            this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox11
            // 
            this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox11->Location = System::Drawing::Point(197, 455);
            this->textBox11->MaxLength = 1;
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(186, 38);
            this->textBox11->TabIndex = 23;
            this->textBox11->Tag = L"Bb3";
            this->textBox11->Text = L"-";
            this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox10
            // 
            this->textBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox10->Location = System::Drawing::Point(197, 414);
            this->textBox10->MaxLength = 1;
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(186, 38);
            this->textBox10->TabIndex = 22;
            this->textBox10->Tag = L"A3";
            this->textBox10->Text = L"0";
            this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox9
            // 
            this->textBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox9->Location = System::Drawing::Point(197, 373);
            this->textBox9->MaxLength = 1;
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(186, 38);
            this->textBox9->TabIndex = 21;
            this->textBox9->Tag = L"Ab3";
            this->textBox9->Text = L"9";
            this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox8
            // 
            this->textBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox8->Location = System::Drawing::Point(197, 332);
            this->textBox8->MaxLength = 1;
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(186, 38);
            this->textBox8->TabIndex = 20;
            this->textBox8->Tag = L"G3";
            this->textBox8->Text = L"8";
            this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
            this->tableLayoutPanel2->ColumnCount = 2;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel2->Controls->Add(this->label15, 0, 12);
            this->tableLayoutPanel2->Controls->Add(this->label16, 0, 6);
            this->tableLayoutPanel2->Controls->Add(this->label17, 0, 5);
            this->tableLayoutPanel2->Controls->Add(this->label18, 0, 4);
            this->tableLayoutPanel2->Controls->Add(this->label19, 0, 3);
            this->tableLayoutPanel2->Controls->Add(this->label20, 0, 2);
            this->tableLayoutPanel2->Controls->Add(this->label21, 0, 1);
            this->tableLayoutPanel2->Controls->Add(this->label22, 1, 0);
            this->tableLayoutPanel2->Controls->Add(this->textBox13, 1, 1);
            this->tableLayoutPanel2->Controls->Add(this->textBox14, 1, 2);
            this->tableLayoutPanel2->Controls->Add(this->textBox15, 1, 3);
            this->tableLayoutPanel2->Controls->Add(this->textBox16, 1, 4);
            this->tableLayoutPanel2->Controls->Add(this->textBox17, 1, 5);
            this->tableLayoutPanel2->Controls->Add(this->textBox18, 1, 6);
            this->tableLayoutPanel2->Controls->Add(this->textBox19, 1, 7);
            this->tableLayoutPanel2->Controls->Add(this->label23, 0, 7);
            this->tableLayoutPanel2->Controls->Add(this->label24, 0, 8);
            this->tableLayoutPanel2->Controls->Add(this->label25, 0, 9);
            this->tableLayoutPanel2->Controls->Add(this->label26, 0, 10);
            this->tableLayoutPanel2->Controls->Add(this->label27, 0, 11);
            this->tableLayoutPanel2->Controls->Add(this->label28, 0, 0);
            this->tableLayoutPanel2->Controls->Add(this->textBox20, 1, 8);
            this->tableLayoutPanel2->Controls->Add(this->textBox23, 1, 11);
            this->tableLayoutPanel2->Controls->Add(this->textBox21, 1, 9);
            this->tableLayoutPanel2->Controls->Add(this->textBox24, 1, 12);
            this->tableLayoutPanel2->Controls->Add(this->textBox22, 1, 10);
            this->tableLayoutPanel2->Location = System::Drawing::Point(437, 12);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 13;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(387, 538);
            this->tableLayoutPanel2->TabIndex = 4;
            // 
            // label15
            // 
            this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label15->Location = System::Drawing::Point(4, 496);
            this->label15->Margin = System::Windows::Forms::Padding(3);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(186, 38);
            this->label15->TabIndex = 30;
            this->label15->Text = L"B,Cb";
            this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label16
            // 
            this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label16->Location = System::Drawing::Point(4, 250);
            this->label16->Margin = System::Windows::Forms::Padding(3);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(186, 34);
            this->label16->TabIndex = 12;
            this->label16->Text = L"F,E#";
            this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label17
            // 
            this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label17->Location = System::Drawing::Point(4, 209);
            this->label17->Margin = System::Windows::Forms::Padding(3);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(186, 34);
            this->label17->TabIndex = 10;
            this->label17->Text = L"E,Fb";
            this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label18
            // 
            this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label18->Location = System::Drawing::Point(4, 168);
            this->label18->Margin = System::Windows::Forms::Padding(3);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(186, 34);
            this->label18->TabIndex = 8;
            this->label18->Text = L"Eb,D#";
            this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label19
            // 
            this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label19->Location = System::Drawing::Point(4, 127);
            this->label19->Margin = System::Windows::Forms::Padding(3);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(186, 34);
            this->label19->TabIndex = 6;
            this->label19->Text = L"D";
            this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label20
            // 
            this->label20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label20->Location = System::Drawing::Point(4, 86);
            this->label20->Margin = System::Windows::Forms::Padding(3);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(186, 34);
            this->label20->TabIndex = 4;
            this->label20->Text = L"Db,C#";
            this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label21
            // 
            this->label21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label21->Location = System::Drawing::Point(4, 45);
            this->label21->Margin = System::Windows::Forms::Padding(3);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(186, 34);
            this->label21->TabIndex = 2;
            this->label21->Text = L"C,B#";
            this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label22
            // 
            this->label22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label22->Location = System::Drawing::Point(197, 4);
            this->label22->Margin = System::Windows::Forms::Padding(3);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(186, 34);
            this->label22->TabIndex = 1;
            this->label22->Text = L"Keybind";
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox13
            // 
            this->textBox13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox13->Location = System::Drawing::Point(197, 45);
            this->textBox13->MaxLength = 1;
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(186, 38);
            this->textBox13->TabIndex = 13;
            this->textBox13->Tag = L"C4";
            this->textBox13->Text = L"q";
            this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox14
            // 
            this->textBox14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox14->Location = System::Drawing::Point(197, 86);
            this->textBox14->MaxLength = 1;
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(186, 38);
            this->textBox14->TabIndex = 14;
            this->textBox14->Tag = L"Db4";
            this->textBox14->Text = L"w";
            this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox15
            // 
            this->textBox15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox15->Location = System::Drawing::Point(197, 127);
            this->textBox15->MaxLength = 1;
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(186, 38);
            this->textBox15->TabIndex = 15;
            this->textBox15->Tag = L"D4";
            this->textBox15->Text = L"e";
            this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox16
            // 
            this->textBox16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox16->Location = System::Drawing::Point(197, 168);
            this->textBox16->MaxLength = 1;
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(186, 38);
            this->textBox16->TabIndex = 16;
            this->textBox16->Tag = L"Eb4";
            this->textBox16->Text = L"r";
            this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox17
            // 
            this->textBox17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox17->Location = System::Drawing::Point(197, 209);
            this->textBox17->MaxLength = 1;
            this->textBox17->Name = L"textBox17";
            this->textBox17->Size = System::Drawing::Size(186, 38);
            this->textBox17->TabIndex = 17;
            this->textBox17->Tag = L"E4";
            this->textBox17->Text = L"t";
            this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox18
            // 
            this->textBox18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox18->Location = System::Drawing::Point(197, 250);
            this->textBox18->MaxLength = 1;
            this->textBox18->Name = L"textBox18";
            this->textBox18->Size = System::Drawing::Size(186, 38);
            this->textBox18->TabIndex = 18;
            this->textBox18->Tag = L"F4";
            this->textBox18->Text = L"y";
            this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox19
            // 
            this->textBox19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox19->Location = System::Drawing::Point(197, 291);
            this->textBox19->MaxLength = 1;
            this->textBox19->Name = L"textBox19";
            this->textBox19->Size = System::Drawing::Size(186, 38);
            this->textBox19->TabIndex = 19;
            this->textBox19->Tag = L"Gb4";
            this->textBox19->Text = L"u";
            this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label23
            // 
            this->label23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label23->Location = System::Drawing::Point(4, 291);
            this->label23->Margin = System::Windows::Forms::Padding(3);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(186, 34);
            this->label23->TabIndex = 25;
            this->label23->Text = L"Gb,F#";
            this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label24
            // 
            this->label24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label24->Location = System::Drawing::Point(4, 332);
            this->label24->Margin = System::Windows::Forms::Padding(3);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(186, 34);
            this->label24->TabIndex = 26;
            this->label24->Text = L"G";
            this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label25
            // 
            this->label25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label25->Location = System::Drawing::Point(4, 373);
            this->label25->Margin = System::Windows::Forms::Padding(3);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(186, 34);
            this->label25->TabIndex = 27;
            this->label25->Text = L"Ab,G#";
            this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label26
            // 
            this->label26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label26->Location = System::Drawing::Point(4, 414);
            this->label26->Margin = System::Windows::Forms::Padding(3);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(186, 34);
            this->label26->TabIndex = 28;
            this->label26->Text = L"A";
            this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label27
            // 
            this->label27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label27->Location = System::Drawing::Point(4, 455);
            this->label27->Margin = System::Windows::Forms::Padding(3);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(186, 34);
            this->label27->TabIndex = 29;
            this->label27->Text = L"Bb,A#";
            this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label28
            // 
            this->label28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label28->Location = System::Drawing::Point(4, 4);
            this->label28->Margin = System::Windows::Forms::Padding(3);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(186, 34);
            this->label28->TabIndex = 0;
            this->label28->Text = L"Note";
            this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox20
            // 
            this->textBox20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox20->Location = System::Drawing::Point(197, 332);
            this->textBox20->MaxLength = 1;
            this->textBox20->Name = L"textBox20";
            this->textBox20->Size = System::Drawing::Size(186, 38);
            this->textBox20->TabIndex = 24;
            this->textBox20->Tag = L"G4";
            this->textBox20->Text = L"i";
            this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox23
            // 
            this->textBox23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox23->Location = System::Drawing::Point(197, 455);
            this->textBox23->MaxLength = 1;
            this->textBox23->Name = L"textBox23";
            this->textBox23->Size = System::Drawing::Size(186, 38);
            this->textBox23->TabIndex = 21;
            this->textBox23->Tag = L"Bb4";
            this->textBox23->Text = L"[";
            this->textBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox21
            // 
            this->textBox21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox21->Location = System::Drawing::Point(197, 373);
            this->textBox21->MaxLength = 1;
            this->textBox21->Name = L"textBox21";
            this->textBox21->Size = System::Drawing::Size(186, 38);
            this->textBox21->TabIndex = 23;
            this->textBox21->Tag = L"Ab4";
            this->textBox21->Text = L"o";
            this->textBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox24
            // 
            this->textBox24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox24->Location = System::Drawing::Point(197, 496);
            this->textBox24->MaxLength = 1;
            this->textBox24->Name = L"textBox24";
            this->textBox24->Size = System::Drawing::Size(186, 38);
            this->textBox24->TabIndex = 20;
            this->textBox24->Tag = L"B4";
            this->textBox24->Text = L"]";
            this->textBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox22
            // 
            this->textBox22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox22->Location = System::Drawing::Point(197, 414);
            this->textBox22->MaxLength = 1;
            this->textBox22->Name = L"textBox22";
            this->textBox22->Size = System::Drawing::Size(186, 38);
            this->textBox22->TabIndex = 22;
            this->textBox22->Tag = L"A4";
            this->textBox22->Text = L"p";
            this->textBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
            this->tableLayoutPanel3->ColumnCount = 2;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel3->Controls->Add(this->label29, 0, 12);
            this->tableLayoutPanel3->Controls->Add(this->label30, 0, 6);
            this->tableLayoutPanel3->Controls->Add(this->label31, 0, 5);
            this->tableLayoutPanel3->Controls->Add(this->label32, 0, 4);
            this->tableLayoutPanel3->Controls->Add(this->label33, 0, 3);
            this->tableLayoutPanel3->Controls->Add(this->label34, 0, 2);
            this->tableLayoutPanel3->Controls->Add(this->label35, 0, 1);
            this->tableLayoutPanel3->Controls->Add(this->label36, 1, 0);
            this->tableLayoutPanel3->Controls->Add(this->textBox25, 1, 1);
            this->tableLayoutPanel3->Controls->Add(this->textBox26, 1, 2);
            this->tableLayoutPanel3->Controls->Add(this->textBox27, 1, 3);
            this->tableLayoutPanel3->Controls->Add(this->textBox28, 1, 4);
            this->tableLayoutPanel3->Controls->Add(this->textBox29, 1, 5);
            this->tableLayoutPanel3->Controls->Add(this->textBox30, 1, 6);
            this->tableLayoutPanel3->Controls->Add(this->textBox31, 1, 7);
            this->tableLayoutPanel3->Controls->Add(this->label37, 0, 7);
            this->tableLayoutPanel3->Controls->Add(this->label38, 0, 8);
            this->tableLayoutPanel3->Controls->Add(this->label39, 0, 9);
            this->tableLayoutPanel3->Controls->Add(this->label40, 0, 10);
            this->tableLayoutPanel3->Controls->Add(this->label41, 0, 11);
            this->tableLayoutPanel3->Controls->Add(this->label42, 0, 0);
            this->tableLayoutPanel3->Controls->Add(this->textBox34, 1, 10);
            this->tableLayoutPanel3->Controls->Add(this->textBox32, 1, 8);
            this->tableLayoutPanel3->Controls->Add(this->textBox36, 1, 12);
            this->tableLayoutPanel3->Controls->Add(this->textBox35, 1, 11);
            this->tableLayoutPanel3->Controls->Add(this->textBox33, 1, 9);
            this->tableLayoutPanel3->Location = System::Drawing::Point(865, 12);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 13;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(387, 538);
            this->tableLayoutPanel3->TabIndex = 5;
            // 
            // label29
            // 
            this->label29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label29->Location = System::Drawing::Point(4, 496);
            this->label29->Margin = System::Windows::Forms::Padding(3);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(186, 38);
            this->label29->TabIndex = 30;
            this->label29->Text = L"B,Cb";
            this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label30
            // 
            this->label30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label30->Location = System::Drawing::Point(4, 250);
            this->label30->Margin = System::Windows::Forms::Padding(3);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(186, 34);
            this->label30->TabIndex = 12;
            this->label30->Text = L"F,E#";
            this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label31
            // 
            this->label31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label31->Location = System::Drawing::Point(4, 209);
            this->label31->Margin = System::Windows::Forms::Padding(3);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(186, 34);
            this->label31->TabIndex = 10;
            this->label31->Text = L"E,Fb";
            this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label32
            // 
            this->label32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label32->Location = System::Drawing::Point(4, 168);
            this->label32->Margin = System::Windows::Forms::Padding(3);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(186, 34);
            this->label32->TabIndex = 8;
            this->label32->Text = L"Eb,D#";
            this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label33
            // 
            this->label33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label33->Location = System::Drawing::Point(4, 127);
            this->label33->Margin = System::Windows::Forms::Padding(3);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(186, 34);
            this->label33->TabIndex = 6;
            this->label33->Text = L"D";
            this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label34
            // 
            this->label34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label34->Location = System::Drawing::Point(4, 86);
            this->label34->Margin = System::Windows::Forms::Padding(3);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(186, 34);
            this->label34->TabIndex = 4;
            this->label34->Text = L"Db,C#";
            this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label35
            // 
            this->label35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label35->Location = System::Drawing::Point(4, 45);
            this->label35->Margin = System::Windows::Forms::Padding(3);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(186, 34);
            this->label35->TabIndex = 2;
            this->label35->Text = L"C,B#";
            this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label36
            // 
            this->label36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label36->Location = System::Drawing::Point(197, 4);
            this->label36->Margin = System::Windows::Forms::Padding(3);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(186, 34);
            this->label36->TabIndex = 1;
            this->label36->Text = L"Keybind";
            this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox25
            // 
            this->textBox25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox25->Location = System::Drawing::Point(197, 45);
            this->textBox25->MaxLength = 1;
            this->textBox25->Name = L"textBox25";
            this->textBox25->Size = System::Drawing::Size(186, 38);
            this->textBox25->TabIndex = 13;
            this->textBox25->Tag = L"C5";
            this->textBox25->Text = L"a";
            this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox26
            // 
            this->textBox26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox26->Location = System::Drawing::Point(197, 86);
            this->textBox26->MaxLength = 1;
            this->textBox26->Name = L"textBox26";
            this->textBox26->Size = System::Drawing::Size(186, 38);
            this->textBox26->TabIndex = 14;
            this->textBox26->Tag = L"Db5";
            this->textBox26->Text = L"s";
            this->textBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox27
            // 
            this->textBox27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox27->Location = System::Drawing::Point(197, 127);
            this->textBox27->MaxLength = 1;
            this->textBox27->Name = L"textBox27";
            this->textBox27->Size = System::Drawing::Size(186, 38);
            this->textBox27->TabIndex = 15;
            this->textBox27->Tag = L"D5";
            this->textBox27->Text = L"d";
            this->textBox27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox28
            // 
            this->textBox28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox28->Location = System::Drawing::Point(197, 168);
            this->textBox28->MaxLength = 1;
            this->textBox28->Name = L"textBox28";
            this->textBox28->Size = System::Drawing::Size(186, 38);
            this->textBox28->TabIndex = 16;
            this->textBox28->Tag = L"Eb5";
            this->textBox28->Text = L"f";
            this->textBox28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox29
            // 
            this->textBox29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox29->Location = System::Drawing::Point(197, 209);
            this->textBox29->MaxLength = 1;
            this->textBox29->Name = L"textBox29";
            this->textBox29->Size = System::Drawing::Size(186, 38);
            this->textBox29->TabIndex = 17;
            this->textBox29->Tag = L"E5";
            this->textBox29->Text = L"g";
            this->textBox29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox30
            // 
            this->textBox30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox30->Location = System::Drawing::Point(197, 250);
            this->textBox30->MaxLength = 1;
            this->textBox30->Name = L"textBox30";
            this->textBox30->Size = System::Drawing::Size(186, 38);
            this->textBox30->TabIndex = 18;
            this->textBox30->Tag = L"F5";
            this->textBox30->Text = L"h";
            this->textBox30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox31
            // 
            this->textBox31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox31->Location = System::Drawing::Point(197, 291);
            this->textBox31->MaxLength = 1;
            this->textBox31->Name = L"textBox31";
            this->textBox31->Size = System::Drawing::Size(186, 38);
            this->textBox31->TabIndex = 19;
            this->textBox31->Tag = L"Gb5";
            this->textBox31->Text = L"j";
            this->textBox31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label37
            // 
            this->label37->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label37->Location = System::Drawing::Point(4, 291);
            this->label37->Margin = System::Windows::Forms::Padding(3);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(186, 34);
            this->label37->TabIndex = 25;
            this->label37->Text = L"Gb,F#";
            this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label38
            // 
            this->label38->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label38->Location = System::Drawing::Point(4, 332);
            this->label38->Margin = System::Windows::Forms::Padding(3);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(186, 34);
            this->label38->TabIndex = 26;
            this->label38->Text = L"G";
            this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label39
            // 
            this->label39->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label39->Location = System::Drawing::Point(4, 373);
            this->label39->Margin = System::Windows::Forms::Padding(3);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(186, 34);
            this->label39->TabIndex = 27;
            this->label39->Text = L"Ab,G#";
            this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label40
            // 
            this->label40->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label40->Location = System::Drawing::Point(4, 414);
            this->label40->Margin = System::Windows::Forms::Padding(3);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(186, 34);
            this->label40->TabIndex = 28;
            this->label40->Text = L"A";
            this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label41
            // 
            this->label41->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label41->Location = System::Drawing::Point(4, 455);
            this->label41->Margin = System::Windows::Forms::Padding(3);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(186, 34);
            this->label41->TabIndex = 29;
            this->label41->Text = L"Bb,A#";
            this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label42
            // 
            this->label42->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label42->Location = System::Drawing::Point(4, 4);
            this->label42->Margin = System::Windows::Forms::Padding(3);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(186, 34);
            this->label42->TabIndex = 0;
            this->label42->Text = L"Note";
            this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // textBox34
            // 
            this->textBox34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox34->Location = System::Drawing::Point(197, 414);
            this->textBox34->MaxLength = 1;
            this->textBox34->Name = L"textBox34";
            this->textBox34->Size = System::Drawing::Size(186, 38);
            this->textBox34->TabIndex = 22;
            this->textBox34->Tag = L"A5";
            this->textBox34->Text = L";";
            this->textBox34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox32
            // 
            this->textBox32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox32->Location = System::Drawing::Point(197, 332);
            this->textBox32->MaxLength = 1;
            this->textBox32->Name = L"textBox32";
            this->textBox32->Size = System::Drawing::Size(186, 38);
            this->textBox32->TabIndex = 24;
            this->textBox32->Tag = L"G5";
            this->textBox32->Text = L"k";
            this->textBox32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox36
            // 
            this->textBox36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox36->Location = System::Drawing::Point(197, 496);
            this->textBox36->MaxLength = 1;
            this->textBox36->Name = L"textBox36";
            this->textBox36->Size = System::Drawing::Size(186, 38);
            this->textBox36->TabIndex = 20;
            this->textBox36->Tag = L"B5";
            this->textBox36->Text = L"/";
            this->textBox36->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox35
            // 
            this->textBox35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox35->Location = System::Drawing::Point(197, 455);
            this->textBox35->MaxLength = 1;
            this->textBox35->Name = L"textBox35";
            this->textBox35->Size = System::Drawing::Size(186, 38);
            this->textBox35->TabIndex = 21;
            this->textBox35->Tag = L"Bb5";
            this->textBox35->Text = L"\'";
            this->textBox35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox33
            // 
            this->textBox33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->textBox33->Location = System::Drawing::Point(197, 373);
            this->textBox33->MaxLength = 1;
            this->textBox33->Name = L"textBox33";
            this->textBox33->Size = System::Drawing::Size(186, 38);
            this->textBox33->TabIndex = 23;
            this->textBox33->Tag = L"Ab5";
            this->textBox33->Text = L"l";
            this->textBox33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label43
            // 
            this->label43->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label43->Location = System::Drawing::Point(533, 553);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(195, 39);
            this->label43->TabIndex = 6;
            this->label43->Text = L"OCTAVE 4";
            // 
            // label44
            // 
            this->label44->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label44->AutoSize = true;
            this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label44->Location = System::Drawing::Point(961, 553);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(195, 39);
            this->label44->TabIndex = 7;
            this->label44->Text = L"OCTAVE 5";
            // 
            // label45
            // 
            this->label45->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label45->Location = System::Drawing::Point(108, 553);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(195, 39);
            this->label45->TabIndex = 8;
            this->label45->Text = L"OCTAVE 3";
            // 
            // button3
            // 
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button3->Location = System::Drawing::Point(12, 610);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(261, 59);
            this->button3->TabIndex = 9;
            this->button3->Text = L"Default Keybinds";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &settings::button3_Click);
            // 
            // settings
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1264, 681);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->label45);
            this->Controls->Add(this->label44);
            this->Controls->Add(this->label43);
            this->Controls->Add(this->tableLayoutPanel3);
            this->Controls->Add(this->tableLayoutPanel2);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Name = L"settings";
            this->Text = L"Settings";
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel1->PerformLayout();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel2->PerformLayout();
            this->tableLayoutPanel3->ResumeLayout(false);
            this->tableLayoutPanel3->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    public:
        void WriteTextOnTextBoxes(String^ fileName)
        {
            try
            {
                keybinds->Clear();
                array<String^>^ lines = File::ReadAllLines(fileName);
                int i = 0;
                for each (String ^ line in lines)
                {
                    array<String^>^ parts = line->Split('\t');
                    if (parts->Length == 2)
                    {
                        String^ key = parts[0];
                        String^ value = parts[1];
                        listTextBox[i]->Text = value;
                        keybinds->Add(KeyValuePair<String^, String^>(key, value));
                        i++;
                    }
                }
            }
            catch (Exception^ ex)
            {
                Console::WriteLine("An error occured while loading the keybinds: " + ex->Message);
            }
        }
    private:
        TextBox^ FindTextBoxByName(TableLayoutPanel^ tableLayoutPanel, String^ boxName)
        {
            for each (Control^ ctrl in tableLayoutPanel->Controls)
            {
                if (TextBox^ textBox = dynamic_cast<TextBox^>(ctrl))
                {
                    if (textBox->Name == boxName)
                    {
                        return textBox;
                    }
                }
            }
            return nullptr;
        }
        void InitializeTextBoxes()
        {
            for (int i = 1; i <= 36; i++)
            {
                String^ boxName = "textBox" + i.ToString();
                TextBox^ box = nullptr;

                // Iterate through each TableLayoutPanel's Controls
                box = FindTextBoxByName(tableLayoutPanel1, boxName);
                if (box == nullptr)
                {
                    box = FindTextBoxByName(tableLayoutPanel2, boxName);
                }
                if (box == nullptr)
                {
                    box = FindTextBoxByName(tableLayoutPanel3, boxName);
                }

                // Check if the TextBox was found and add it to the list
                if (box != nullptr)
                    listTextBox->Add(box);
                else
                    Console::WriteLine("TextBox not found: " + boxName);
            }
            WriteTextOnTextBoxes("keybinds.txt");
        }
        private: System::Void quitButton_Click(System::Object^ sender, System::EventArgs^ e) 
        {
            this->Close();
        }
        bool HasDuplicateValues(List<KeyValuePair<String^, String^>>^ items)
        {
            for (int i = 0; i < items->Count; i++)
            {
                String^ valueToCheck = items[i].Value;
                for (int j = i + 1; j < items->Count; j++)
                {
                    if (items[i].Value == items[j].Value)
                    {
                        return true;
                    }
                }
            }
            return false;
        }
        private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) 
        {
            for (int i = 0; i < keybinds->Count; i++)
            {
                keybinds[i] = KeyValuePair<String^,String^>(keybinds[i].Key, listTextBox[i]->Text);
            }
            if (!HasDuplicateValues(keybinds))
            {
                try
                {
                    System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
                    for (int i = 0; i < keybinds->Count; i++)
                    {
                        sb->AppendLine(keybinds[i].Key + "\t" + keybinds[i].Value);
                    }
                    System::IO::File::WriteAllText("keybinds.txt", sb->ToString());
                }
                catch (Exception^ ex)
                {
                    Console::WriteLine("An error occured while writing to the file: " + ex->Message);
                }
                KeybindsUpdated();
            }
            else
            {
                MessageBox::Show("Please don't use one keybind on multiple notes", "Duplicate Detected", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            }
            
        }
        private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
        {
            WriteTextOnTextBoxes("default_keybinds.txt");
        }
    private: System::Void settings_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
    }
};
}
