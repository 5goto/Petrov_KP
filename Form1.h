#pragma once
#include <iostream>
#include <string>
#include "main_interface.h"
using namespace std;

Main_interface test;
int log_counter = 0;

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;


	private: System::Windows::Forms::TabPage^ SearchTab;
	private: System::Windows::Forms::GroupBox^ groupBoxResult;


	private: System::Windows::Forms::Button^ GenerateResult;




	private: System::Windows::Forms::DataGridView^ ResultWindow;



	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::TabPage^ ContPage;

	private: System::Windows::Forms::GroupBox^ Сleanings;
	private: System::Windows::Forms::Button^ InitData;
	private: System::Windows::Forms::DataGridView^ CleaningWindow;

	private: System::Windows::Forms::GroupBox^ Room_box;
	private: System::Windows::Forms::DataGridView^ RoomsWindow;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Button^ DeleteFromTreeButton;
	private: System::Windows::Forms::Button^ InsertToTreeButton;
	private: System::Windows::Forms::Button^ DeleteFromHashButton;
	private: System::Windows::Forms::Button^ InsertToHashButton;
	private: System::Windows::Forms::TabPage^ DebugTab;
	private: System::Windows::Forms::GroupBox^ DebugClean;

	private: System::Windows::Forms::DataGridView^ dataGridCleanDebug;

	private: System::Windows::Forms::GroupBox^ DebagRoom;

	private: System::Windows::Forms::DataGridView^ dataGridRoomDebug;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;

	private: System::Windows::Forms::DataGridView^ LogGridView;







	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::TextBox^ PerformerSelfInput;
	private:

	private:









	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::NumericUpDown^ ProjectCostInput;




	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::NumericUpDown^ HashTableSize;






	private: System::Windows::Forms::Button^ SearchInTable;

	private: System::Windows::Forms::Button^ Search_Tree;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cleanings;
public: System::Windows::Forms::TextBox^ projectDescInput;
private:

public: System::Windows::Forms::TextBox^ ProjectNameInput;
private:

private: System::Windows::Forms::DataGridViewTextBoxColumn^ Rooms;
public: System::Windows::Forms::TextBox^ PerformerRoleInput;
private:

public: System::Windows::Forms::TextBox^ PerformerNameInput;
private: System::Windows::Forms::NumericUpDown^ SearchInputHi;
public:

public:
private: System::Windows::Forms::NumericUpDown^ SearchInputLow;
private: System::Windows::Forms::Label^ label3;
public: System::Windows::Forms::TextBox^ RoleSearchInput;
private:

private:
private: System::Windows::Forms::Label^ label1;
public:
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Results;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private:

public:

	public:
	private:

	private: System::ComponentModel::IContainer^ components;


	private:

		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->SearchTab = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxResult = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->RoleSearchInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SearchInputHi = (gcnew System::Windows::Forms::NumericUpDown());
			this->SearchInputLow = (gcnew System::Windows::Forms::NumericUpDown());
			this->GenerateResult = (gcnew System::Windows::Forms::Button());
			this->ResultWindow = (gcnew System::Windows::Forms::DataGridView());
			this->Results = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ContPage = (gcnew System::Windows::Forms::TabPage());
			this->Сleanings = (gcnew System::Windows::Forms::GroupBox());
			this->Search_Tree = (gcnew System::Windows::Forms::Button());
			this->PerformerRoleInput = (gcnew System::Windows::Forms::TextBox());
			this->PerformerNameInput = (gcnew System::Windows::Forms::TextBox());
			this->InsertToTreeButton = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->PerformerSelfInput = (gcnew System::Windows::Forms::TextBox());
			this->DeleteFromTreeButton = (gcnew System::Windows::Forms::Button());
			this->CleaningWindow = (gcnew System::Windows::Forms::DataGridView());
			this->Cleanings = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Room_box = (gcnew System::Windows::Forms::GroupBox());
			this->SearchInTable = (gcnew System::Windows::Forms::Button());
			this->projectDescInput = (gcnew System::Windows::Forms::TextBox());
			this->ProjectNameInput = (gcnew System::Windows::Forms::TextBox());
			this->ProjectCostInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->InsertToHashButton = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->DeleteFromHashButton = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->RoomsWindow = (gcnew System::Windows::Forms::DataGridView());
			this->Rooms = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->HashTableSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->InitData = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->DebugTab = (gcnew System::Windows::Forms::TabPage());
			this->DebugClean = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridCleanDebug = (gcnew System::Windows::Forms::DataGridView());
			this->DebagRoom = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridRoomDebug = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LogGridView = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SearchTab->SuspendLayout();
			this->groupBoxResult->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchInputHi))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchInputLow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultWindow))->BeginInit();
			this->ContPage->SuspendLayout();
			this->Сleanings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningWindow))->BeginInit();
			this->Room_box->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProjectCostInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RoomsWindow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HashTableSize))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->DebugTab->SuspendLayout();
			this->DebugClean->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCleanDebug))->BeginInit();
			this->DebagRoom->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridRoomDebug))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// SearchTab
			// 
			this->SearchTab->Controls->Add(this->groupBoxResult);
			this->SearchTab->Location = System::Drawing::Point(4, 22);
			this->SearchTab->Name = L"SearchTab";
			this->SearchTab->Padding = System::Windows::Forms::Padding(3);
			this->SearchTab->Size = System::Drawing::Size(1336, 551);
			this->SearchTab->TabIndex = 2;
			this->SearchTab->Text = L"Поисковая задача";
			this->SearchTab->UseVisualStyleBackColor = true;
			// 
			// groupBoxResult
			// 
			this->groupBoxResult->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBoxResult->Controls->Add(this->label3);
			this->groupBoxResult->Controls->Add(this->RoleSearchInput);
			this->groupBoxResult->Controls->Add(this->label1);
			this->groupBoxResult->Controls->Add(this->SearchInputHi);
			this->groupBoxResult->Controls->Add(this->SearchInputLow);
			this->groupBoxResult->Controls->Add(this->GenerateResult);
			this->groupBoxResult->Controls->Add(this->ResultWindow);
			this->groupBoxResult->Controls->Add(this->label2);
			this->groupBoxResult->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxResult->Location = System::Drawing::Point(6, 6);
			this->groupBoxResult->Name = L"groupBoxResult";
			this->groupBoxResult->Size = System::Drawing::Size(1296, 544);
			this->groupBoxResult->TabIndex = 8;
			this->groupBoxResult->TabStop = false;
			this->groupBoxResult->Text = L"Отчет";
			// 
			// label3
			// 
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label3->Location = System::Drawing::Point(604, 363);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 27);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Роль исполнителя";
			// 
			// RoleSearchInput
			// 
			this->RoleSearchInput->Location = System::Drawing::Point(483, 393);
			this->RoleSearchInput->Name = L"RoleSearchInput";
			this->RoleSearchInput->Size = System::Drawing::Size(444, 27);
			this->RoleSearchInput->TabIndex = 26;
			// 
			// label1
			// 
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label1->Location = System::Drawing::Point(952, 436);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 49);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Верхняя граница\r\nстоимости";
			// 
			// SearchInputHi
			// 
			this->SearchInputHi->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->SearchInputHi->Location = System::Drawing::Point(706, 436);
			this->SearchInputHi->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->SearchInputHi->Name = L"SearchInputHi";
			this->SearchInputHi->Size = System::Drawing::Size(207, 27);
			this->SearchInputHi->TabIndex = 14;
			this->SearchInputHi->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// SearchInputLow
			// 
			this->SearchInputLow->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->SearchInputLow->Location = System::Drawing::Point(483, 436);
			this->SearchInputLow->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->SearchInputLow->Name = L"SearchInputLow";
			this->SearchInputLow->Size = System::Drawing::Size(207, 27);
			this->SearchInputLow->TabIndex = 13;
			this->SearchInputLow->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// GenerateResult
			// 
			this->GenerateResult->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GenerateResult->Location = System::Drawing::Point(502, 469);
			this->GenerateResult->Name = L"GenerateResult";
			this->GenerateResult->Size = System::Drawing::Size(444, 53);
			this->GenerateResult->TabIndex = 3;
			this->GenerateResult->Text = L"Найти";
			this->GenerateResult->UseVisualStyleBackColor = true;
			this->GenerateResult->Click += gcnew System::EventHandler(this, &Form1::GenerateResult_Click);
			// 
			// ResultWindow
			// 
			this->ResultWindow->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->ResultWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ResultWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Results });
			this->ResultWindow->Location = System::Drawing::Point(39, 35);
			this->ResultWindow->Name = L"ResultWindow";
			this->ResultWindow->Size = System::Drawing::Size(1218, 325);
			this->ResultWindow->TabIndex = 2;
			this->ResultWindow->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// Results
			// 
			this->Results->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Results->HeaderText = L"Результат";
			this->Results->Name = L"Results";
			// 
			// label2
			// 
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label2->Location = System::Drawing::Point(332, 436);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 49);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Нижняя граница\r\nстоимости";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// ContPage
			// 
			this->ContPage->Controls->Add(this->Сleanings);
			this->ContPage->Controls->Add(this->Room_box);
			this->ContPage->Location = System::Drawing::Point(4, 22);
			this->ContPage->Name = L"ContPage";
			this->ContPage->Padding = System::Windows::Forms::Padding(3);
			this->ContPage->Size = System::Drawing::Size(1336, 551);
			this->ContPage->TabIndex = 0;
			this->ContPage->Text = L"Справочники";
			this->ContPage->UseVisualStyleBackColor = true;
			// 
			// Сleanings
			// 
			this->Сleanings->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Сleanings->Controls->Add(this->Search_Tree);
			this->Сleanings->Controls->Add(this->PerformerRoleInput);
			this->Сleanings->Controls->Add(this->PerformerNameInput);
			this->Сleanings->Controls->Add(this->InsertToTreeButton);
			this->Сleanings->Controls->Add(this->label15);
			this->Сleanings->Controls->Add(this->label14);
			this->Сleanings->Controls->Add(this->label13);
			this->Сleanings->Controls->Add(this->PerformerSelfInput);
			this->Сleanings->Controls->Add(this->DeleteFromTreeButton);
			this->Сleanings->Controls->Add(this->CleaningWindow);
			this->Сleanings->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Сleanings->Location = System::Drawing::Point(654, 6);
			this->Сleanings->Name = L"Сleanings";
			this->Сleanings->Size = System::Drawing::Size(676, 542);
			this->Сleanings->TabIndex = 6;
			this->Сleanings->TabStop = false;
			this->Сleanings->Text = L"Список исполнителей";
			// 
			// Search_Tree
			// 
			this->Search_Tree->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Search_Tree->Location = System::Drawing::Point(133, 496);
			this->Search_Tree->Name = L"Search_Tree";
			this->Search_Tree->Size = System::Drawing::Size(161, 35);
			this->Search_Tree->TabIndex = 8;
			this->Search_Tree->Text = L"Найти";
			this->Search_Tree->UseVisualStyleBackColor = true;
			this->Search_Tree->Click += gcnew System::EventHandler(this, &Form1::Search_Tree_Click);
			// 
			// PerformerRoleInput
			// 
			this->PerformerRoleInput->Location = System::Drawing::Point(479, 467);
			this->PerformerRoleInput->Name = L"PerformerRoleInput";
			this->PerformerRoleInput->Size = System::Drawing::Size(175, 27);
			this->PerformerRoleInput->TabIndex = 25;
			// 
			// PerformerNameInput
			// 
			this->PerformerNameInput->Location = System::Drawing::Point(300, 466);
			this->PerformerNameInput->Name = L"PerformerNameInput";
			this->PerformerNameInput->Size = System::Drawing::Size(161, 27);
			this->PerformerNameInput->TabIndex = 24;
			// 
			// InsertToTreeButton
			// 
			this->InsertToTreeButton->Location = System::Drawing::Point(300, 498);
			this->InsertToTreeButton->Name = L"InsertToTreeButton";
			this->InsertToTreeButton->Size = System::Drawing::Size(161, 35);
			this->InsertToTreeButton->TabIndex = 6;
			this->InsertToTreeButton->Text = L"Вставить";
			this->InsertToTreeButton->UseVisualStyleBackColor = true;
			this->InsertToTreeButton->Click += gcnew System::EventHandler(this, &Form1::InsertToTreeButton_Click);
			// 
			// label15
			// 
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label15->Location = System::Drawing::Point(160, 435);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(118, 24);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Исполнитель";
			// 
			// label14
			// 
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label14->Location = System::Drawing::Point(310, 435);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(151, 24);
			this->label14->TabIndex = 11;
			this->label14->Text = L"Название проекта\r\n";
			// 
			// label13
			// 
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label13->Location = System::Drawing::Point(506, 435);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(148, 24);
			this->label13->TabIndex = 18;
			this->label13->Text = L"Роль исполнителя";
			this->label13->Click += gcnew System::EventHandler(this, &Form1::label13_Click);
			// 
			// PerformerSelfInput
			// 
			this->PerformerSelfInput->Location = System::Drawing::Point(133, 466);
			this->PerformerSelfInput->Name = L"PerformerSelfInput";
			this->PerformerSelfInput->Size = System::Drawing::Size(161, 27);
			this->PerformerSelfInput->TabIndex = 17;
			// 
			// DeleteFromTreeButton
			// 
			this->DeleteFromTreeButton->Location = System::Drawing::Point(479, 496);
			this->DeleteFromTreeButton->Name = L"DeleteFromTreeButton";
			this->DeleteFromTreeButton->Size = System::Drawing::Size(175, 39);
			this->DeleteFromTreeButton->TabIndex = 7;
			this->DeleteFromTreeButton->Text = L"Удалить";
			this->DeleteFromTreeButton->UseVisualStyleBackColor = true;
			this->DeleteFromTreeButton->Click += gcnew System::EventHandler(this, &Form1::DeleteFromTreeButton_Click);
			// 
			// CleaningWindow
			// 
			this->CleaningWindow->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->CleaningWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CleaningWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Cleanings });
			this->CleaningWindow->Location = System::Drawing::Point(106, 35);
			this->CleaningWindow->Name = L"CleaningWindow";
			this->CleaningWindow->Size = System::Drawing::Size(564, 397);
			this->CleaningWindow->TabIndex = 2;
			// 
			// Cleanings
			// 
			this->Cleanings->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Cleanings->HeaderText = L"Исполнители";
			this->Cleanings->Name = L"Cleanings";
			this->Cleanings->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Room_box
			// 
			this->Room_box->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Room_box->Controls->Add(this->SearchInTable);
			this->Room_box->Controls->Add(this->projectDescInput);
			this->Room_box->Controls->Add(this->ProjectNameInput);
			this->Room_box->Controls->Add(this->ProjectCostInput);
			this->Room_box->Controls->Add(this->label12);
			this->Room_box->Controls->Add(this->InsertToHashButton);
			this->Room_box->Controls->Add(this->label11);
			this->Room_box->Controls->Add(this->DeleteFromHashButton);
			this->Room_box->Controls->Add(this->label7);
			this->Room_box->Controls->Add(this->RoomsWindow);
			this->Room_box->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Room_box->Location = System::Drawing::Point(6, 6);
			this->Room_box->Name = L"Room_box";
			this->Room_box->Size = System::Drawing::Size(642, 542);
			this->Room_box->TabIndex = 7;
			this->Room_box->TabStop = false;
			this->Room_box->Text = L"Список проектов";
			// 
			// SearchInTable
			// 
			this->SearchInTable->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SearchInTable->Location = System::Drawing::Point(25, 499);
			this->SearchInTable->Name = L"SearchInTable";
			this->SearchInTable->Size = System::Drawing::Size(158, 36);
			this->SearchInTable->TabIndex = 9;
			this->SearchInTable->Text = L"Найти";
			this->SearchInTable->UseVisualStyleBackColor = true;
			this->SearchInTable->Click += gcnew System::EventHandler(this, &Form1::SearchInTable_Click);
			// 
			// projectDescInput
			// 
			this->projectDescInput->Location = System::Drawing::Point(202, 466);
			this->projectDescInput->Name = L"projectDescInput";
			this->projectDescInput->Size = System::Drawing::Size(171, 27);
			this->projectDescInput->TabIndex = 25;
			// 
			// ProjectNameInput
			// 
			this->ProjectNameInput->Location = System::Drawing::Point(25, 466);
			this->ProjectNameInput->Name = L"ProjectNameInput";
			this->ProjectNameInput->Size = System::Drawing::Size(158, 27);
			this->ProjectNameInput->TabIndex = 24;
			// 
			// ProjectCostInput
			// 
			this->ProjectCostInput->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ProjectCostInput->Location = System::Drawing::Point(400, 467);
			this->ProjectCostInput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->ProjectCostInput->Name = L"ProjectCostInput";
			this->ProjectCostInput->Size = System::Drawing::Size(167, 27);
			this->ProjectCostInput->TabIndex = 12;
			this->ProjectCostInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label12
			// 
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label12->Location = System::Drawing::Point(435, 435);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(107, 24);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Стоимость";
			// 
			// InsertToHashButton
			// 
			this->InsertToHashButton->Location = System::Drawing::Point(202, 499);
			this->InsertToHashButton->Name = L"InsertToHashButton";
			this->InsertToHashButton->Size = System::Drawing::Size(171, 36);
			this->InsertToHashButton->TabIndex = 3;
			this->InsertToHashButton->Text = L"Вставить";
			this->InsertToHashButton->UseVisualStyleBackColor = true;
			this->InsertToHashButton->Click += gcnew System::EventHandler(this, &Form1::InsertToHashButton_Click);
			// 
			// label11
			// 
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label11->Location = System::Drawing::Point(238, 435);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 24);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Описание";
			// 
			// DeleteFromHashButton
			// 
			this->DeleteFromHashButton->Location = System::Drawing::Point(400, 500);
			this->DeleteFromHashButton->Name = L"DeleteFromHashButton";
			this->DeleteFromHashButton->Size = System::Drawing::Size(167, 35);
			this->DeleteFromHashButton->TabIndex = 4;
			this->DeleteFromHashButton->Text = L"Удалить";
			this->DeleteFromHashButton->UseVisualStyleBackColor = true;
			this->DeleteFromHashButton->Click += gcnew System::EventHandler(this, &Form1::DeleteFromHashButton_Click);
			// 
			// label7
			// 
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label7->Location = System::Drawing::Point(21, 435);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 24);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Название проекта";
			// 
			// RoomsWindow
			// 
			this->RoomsWindow->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->RoomsWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->RoomsWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Rooms });
			this->RoomsWindow->Location = System::Drawing::Point(25, 35);
			this->RoomsWindow->Name = L"RoomsWindow";
			this->RoomsWindow->Size = System::Drawing::Size(564, 397);
			this->RoomsWindow->TabIndex = 2;
			// 
			// Rooms
			// 
			this->Rooms->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Rooms->HeaderText = L"Проекты";
			this->Rooms->Name = L"Rooms";
			this->Rooms->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// label16
			// 
			this->label16->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label16->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label16->Location = System::Drawing::Point(188, 708);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(135, 24);
			this->label16->TabIndex = 23;
			this->label16->Text = L"Размер таблицы";
			// 
			// HashTableSize
			// 
			this->HashTableSize->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->HashTableSize->Location = System::Drawing::Point(338, 708);
			this->HashTableSize->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->HashTableSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->HashTableSize->Name = L"HashTableSize";
			this->HashTableSize->Size = System::Drawing::Size(131, 20);
			this->HashTableSize->TabIndex = 22;
			this->HashTableSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// InitData
			// 
			this->InitData->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InitData->Location = System::Drawing::Point(192, 633);
			this->InitData->Name = L"InitData";
			this->InitData->Size = System::Drawing::Size(277, 58);
			this->InitData->TabIndex = 5;
			this->InitData->Text = L"Создать таблицу";
			this->InitData->UseVisualStyleBackColor = true;
			this->InitData->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->ContPage);
			this->tabControl1->Controls->Add(this->SearchTab);
			this->tabControl1->Controls->Add(this->DebugTab);
			this->tabControl1->Location = System::Drawing::Point(20, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1344, 577);
			this->tabControl1->TabIndex = 9;
			// 
			// DebugTab
			// 
			this->DebugTab->BackColor = System::Drawing::Color::Silver;
			this->DebugTab->Controls->Add(this->DebugClean);
			this->DebugTab->Controls->Add(this->DebagRoom);
			this->DebugTab->Location = System::Drawing::Point(4, 22);
			this->DebugTab->Name = L"DebugTab";
			this->DebugTab->Padding = System::Windows::Forms::Padding(3);
			this->DebugTab->Size = System::Drawing::Size(1336, 551);
			this->DebugTab->TabIndex = 3;
			this->DebugTab->Text = L"Отладка";
			// 
			// DebugClean
			// 
			this->DebugClean->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DebugClean->Controls->Add(this->dataGridCleanDebug);
			this->DebugClean->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DebugClean->Location = System::Drawing::Point(680, 6);
			this->DebugClean->Name = L"DebugClean";
			this->DebugClean->Size = System::Drawing::Size(633, 519);
			this->DebugClean->TabIndex = 9;
			this->DebugClean->TabStop = false;
			this->DebugClean->Text = L"Бинарное дерево поиска";
			// 
			// dataGridCleanDebug
			// 
			this->dataGridCleanDebug->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridCleanDebug->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridCleanDebug->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn2 });
			this->dataGridCleanDebug->Location = System::Drawing::Point(21, 35);
			this->dataGridCleanDebug->Name = L"dataGridCleanDebug";
			this->dataGridCleanDebug->Size = System::Drawing::Size(591, 434);
			this->dataGridCleanDebug->TabIndex = 2;
			// 
			// DebagRoom
			// 
			this->DebagRoom->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DebagRoom->Controls->Add(this->dataGridRoomDebug);
			this->DebagRoom->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DebagRoom->Location = System::Drawing::Point(6, 6);
			this->DebagRoom->Name = L"DebagRoom";
			this->DebagRoom->Size = System::Drawing::Size(655, 519);
			this->DebagRoom->TabIndex = 8;
			this->DebagRoom->TabStop = false;
			this->DebagRoom->Text = L"Хэш таблица";
			// 
			// dataGridRoomDebug
			// 
			this->dataGridRoomDebug->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridRoomDebug->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridRoomDebug->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->dataGridRoomDebug->Location = System::Drawing::Point(39, 35);
			this->dataGridRoomDebug->Name = L"dataGridRoomDebug";
			this->dataGridRoomDebug->Size = System::Drawing::Size(610, 434);
			this->dataGridRoomDebug->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Таблица";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// LogGridView
			// 
			this->LogGridView->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->LogGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->LogGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn3 });
			this->LogGridView->Location = System::Drawing::Point(507, 595);
			this->LogGridView->Name = L"LogGridView";
			this->LogGridView->Size = System::Drawing::Size(853, 156);
			this->LogGridView->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Логи";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Обход дерева";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(1370, 762);
			this->Controls->Add(this->LogGridView);
			this->Controls->Add(this->HashTableSize);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->InitData);
			this->Name = L"Form1";
			this->Text = L"Курсовой проект";
			this->SearchTab->ResumeLayout(false);
			this->groupBoxResult->ResumeLayout(false);
			this->groupBoxResult->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchInputHi))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchInputLow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultWindow))->EndInit();
			this->ContPage->ResumeLayout(false);
			this->Сleanings->ResumeLayout(false);
			this->Сleanings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningWindow))->EndInit();
			this->Room_box->ResumeLayout(false);
			this->Room_box->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProjectCostInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RoomsWindow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HashTableSize))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->DebugTab->ResumeLayout(false);
			this->DebugClean->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCleanDebug))->EndInit();
			this->DebagRoom->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridRoomDebug))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void print_room_data_base()
	{
		auto hash_table = test.get_all_hash_table();
		auto table_size = test.get_hash_table_size();

		RoomsWindow->Rows->Clear();

		RoomsWindow->ColumnCount = 1;
		RoomsWindow->RowCount = table_size;
		auto j = 0;
		for (auto item : *hash_table)
		{
			if (item.cell_status == status::occupied)
			{
				RoomsWindow->Rows[j]->Cells[0]->Value = item.data->get_all_data_string();
				++j;
			}
		}
	}
	
	private: System::Void print_cleaning_debug_data()
	{
		auto res = test.get_all_tree_for_drawning();

		if (res->Count == 0)
		{
			dataGridCleanDebug->Rows->Clear();
			return;
		}

		dataGridCleanDebug->ColumnCount = 1;
		dataGridCleanDebug->RowCount = res->Count;

		auto tmp = res->First;
		for (auto i = 0; i < res->Count; i++)
		{
			dataGridCleanDebug->Rows[i]->Cells[0]->Value = tmp->Value;
			tmp = tmp->Next;
		}
	}

	private: System::Void print_room_debug_data()
	{
		auto hash_table = test.get_all_hash_table();
		auto table_size = test.get_hash_table_size();

		dataGridRoomDebug->ColumnCount = 1;
		dataGridRoomDebug->RowCount = table_size;

		auto i = 0;
		for (auto item : *hash_table)
		{
			if (item.cell_status == status::free)
				dataGridRoomDebug->Rows[i]->Cells[0]->Value = i + "| " + "Свободно";
			else if (item.cell_status == status::deleted)
				dataGridRoomDebug->Rows[i]->Cells[0]->Value = i + "| " + "Удалено";
			else
			{
				dataGridRoomDebug->Rows[i]->Cells[0]->Value = i + "| " + item.data->get_all_data_string();
			}
			++i;
		}
	}

	private: System::Void print_cleaning_data_base()
	{
		auto tree = test.get_all_tree_for_debug()->get_all_items();

		if (tree->size() == 0)
		{
			CleaningWindow->Rows->Clear();
			return;
		}

		CleaningWindow->Rows->Clear();

		CleaningWindow->ColumnCount = 1;
		CleaningWindow->RowCount = tree->size();

		auto i = 0;
		for (auto item : *tree)
		{
			CleaningWindow->Rows[i]->Cells[0]->Value = item->get_all_data_string();
			++i;
		}

	}

	private: System::Boolean check_room_number_in_table(string proj_name)
	{
		auto hash_table = test.get_all_hash_table();
		for (auto item : *hash_table)
		{
			if (item.cell_status == status::occupied)
			{
				if (item.data->get_name() == proj_name)
					return true;
			}
		}
		return false;
	}

private: System::Void GenerateResult_Click(System::Object^ sender, System::EventArgs^ e) {  // Result button
	if (test.is_bases_inited())
	{

		auto low = Convert::ToInt32(SearchInputLow->Value);
		auto high = Convert::ToInt32(SearchInputHi->Value);
		auto role_tmp = RoleSearchInput->Text;
		
		if (role_tmp == "")
			return;

		// маршализация строки
		std::string role;
		MarshalString(role_tmp, role);

		/*role += " ";*/


		int comparsions{};

		auto res = test.print_intermediate_result(role, low, high, comparsions);

		if (res.size() != 0)
		{
			ResultWindow->ColumnCount = 1;
			ResultWindow->RowCount = res.size();

			for (auto i = 0; i < res.size(); ++i)
			{
				ResultWindow->Rows[i]->Cells[0]->Value = res[i]->get_all_data_string() + ":::" + role_tmp;
			}
			LogGridView->Rows[log_counter]->Cells[0]->Value = "[Поисковая задача] " + comparsions + " сравнений";
			log_counter++;

		}
		else
			MessageBox::Show("Результат с такими данными отсутствует", "[Поисковая задача]");
	}
	else
		MessageBox::Show("Хэш таблица не создана", "Создание хэш таблицы");
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
		auto size = Convert::ToInt32(HashTableSize->Value);
		test.Init_Data_Bases(size); // инициализация баз данных

		// show Cleanings
		print_cleaning_data_base();
		// show Rooms
		print_room_data_base();

		print_room_debug_data();
		print_cleaning_debug_data();
		LogGridView->ColumnCount = 1; // создание лога на 100 записей
		LogGridView->RowCount = 100;

		auto names = test.get_initialize_hash_objects_names();
		auto hash_keys = test.get_initialize_hash_keys();
		int name_counter = 0;

		for (auto counter = 0; counter < hash_keys.size(); counter += 2)
		{
			auto title_str = gcnew System::String(names[name_counter].c_str());
			LogGridView->Rows[log_counter]->Cells[0]->Value = "Ключ(" + title_str + ") Первичный: "
				+ hash_keys[counter].ToString() + " Вторичный: " + hash_keys[counter + 1].ToString();
			log_counter++;
			name_counter++;
		}

		auto tree_paths = test.get_tree_keys();
		auto tree_names = test.get_tree_names();

		for (auto counter = 0; counter < tree_paths.size(); counter++)
		{
			auto str_e = gcnew System::String(tree_names[counter].c_str());
			auto full_tree_path = str_e + " Вставка//Путь: ";
			for (auto item : tree_paths[counter])
				full_tree_path += (item.ToString() + "-> ");
			LogGridView->Rows[log_counter]->Cells[0]->Value = full_tree_path;
			log_counter++;
		}

		MessageBox::Show("Создана хэш таблица на " + test.get_hash_table_size() + " записей", "Создание хэш таблицы");
}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void comboType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void InsertToHashButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// room input
	if (test.is_bases_inited())
	{
		auto name = ProjectNameInput->Text;
		auto descr = projectDescInput->Text;
		auto cost = Convert::ToInt32(ProjectCostInput->Value);


		if (name == "")
			return;
		if (descr == "")
			return;

		// маршализация строки
		std::string name_tmp;
		std::string desc_tmp;
		MarshalString(name, name_tmp);
		MarshalString(descr, desc_tmp);

		name_tmp += " ";
		desc_tmp += " ";

		if (check_room_number_in_table(name_tmp))
		{
			MessageBox::Show("Ключ не уникален", "Вставка в таблицу");
			return;
		}

		auto operation_result = test.insert_element_to_project(name_tmp, desc_tmp, cost);
		if (operation_result == -1)
			MessageBox::Show("Ключ не уникален", "Вставка в хэш-таблицу");
		else if (operation_result == -2)
			MessageBox::Show("Попытка вставки в переполненную хэш-таблицу", "Вставка в хэш-таблицу");
		else
		{
			print_room_data_base();
			print_room_debug_data();
			LogGridView->Rows[log_counter]->Cells[0]->Value = "Хэш(" + cost + ") Первичный: "
				+ ConvertToHash(name_tmp) % test.get_hash_table_size() + " Вторичный: " + operation_result;
			log_counter++;
		}
	}
	else
		MessageBox::Show("Хэш таблица не создана", "Создание хэш таблицы");
}

private: int ConvertToHash(std::string str)
{
	int counter{ };
	for (auto i = 0; i < str.length(); ++i)
		counter += (int)str[i];
	return counter;
}


private: System::Void MarshalString(String^ s, string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}


private: System::Void DeleteFromHashButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (test.is_bases_inited())
	{
		// инициализация данных из формы
		
		auto name = ProjectNameInput->Text;
		auto descr = projectDescInput->Text;
		auto cost = Convert::ToInt32(ProjectCostInput->Value);


		if (name == "")
			return;
		if (descr == "")
			return;

		// маршализация строки
		std::string name_tmp;
		std::string desc_tmp;
		MarshalString(name, name_tmp);
		MarshalString(descr, desc_tmp);

		name_tmp += " ";
		desc_tmp += " ";

		////////////////////////////////////


		auto operation_result = test.delete_element_from_project(name_tmp, desc_tmp, cost);
		if (operation_result == -1)
			MessageBox::Show("Элемент отсутствует в таблице", "Удаление из хэш-таблицы");
		else
		{
			// удаление из побочной таблицы
			auto found = test.find_all_elements_by_name(name_tmp);
			if (found->size() != 0)
			{
				MessageBox::Show("К удалению предлагаются " + found->size() + " записей побочной таблицы", "Удаление из побочной таблицы");
				for (auto item : *found)
				{
					if (MessageBox::Show("Желаете удалить запись " + item->get_all_data_string() + "?", "Удаление из побочной таблицы",
						MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
					{
						auto pefr_str = gcnew System::String(item->get_performer().c_str());
						test.delete_element_to_performer(item->get_performer(), item->get_name(), item->get_role());
						LogGridView->Rows[log_counter]->Cells[0]->Value = pefr_str + " удалено из хэш-таблицы";
						log_counter++;
					}
				}
			}

			print_room_data_base();
			print_cleaning_data_base();
			print_cleaning_debug_data();
			print_room_debug_data();
			LogGridView->Rows[log_counter]->Cells[0]->Value = "Хэш(" + name + ")->Удален";
			log_counter++;
		}
	}
	else
		MessageBox::Show("Хэш таблица не создана", "Создание хэш таблицы");
}
private: System::Void InsertToTreeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (test.is_bases_inited())
	{
		// получаем данные из формы
		auto performer = PerformerSelfInput->Text;
		auto project_name = PerformerNameInput->Text;
		auto role = PerformerRoleInput->Text;

		if (performer == "")
			return;
		if (project_name == "")
			return;
		if (role == "")
			return;

		// маршализация строки
		std::string tmp_performer;
		std::string tmp_project_name;
		std::string tmp_role;
		MarshalString(performer, tmp_performer);
		MarshalString(project_name, tmp_project_name);
		MarshalString(role, tmp_role);

		tmp_performer += " ";
		tmp_project_name += " ";

		if (!check_room_number_in_table(tmp_project_name))
		{
			MessageBox::Show("Проект с указанным названием отсутствует", "Вставка в дерево");
			return;
		}

		// добавление 
		auto tree_path = test.insert_element_to_performer(tmp_performer, tmp_project_name, tmp_role);

		auto full_tree_path = performer + " Вставка//Путь: ";
		for (auto item : *tree_path)
			full_tree_path += (item + "-> ");
		// обновление данныхв форме
		print_cleaning_data_base();
		print_cleaning_debug_data();
		LogGridView->Rows[log_counter]->Cells[0]->Value = full_tree_path;
		log_counter++;
	}
	else
		MessageBox::Show("Хэш таблица не создана", "Создание хэш таблицы");
}



private: System::Void DeleteFromTreeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (test.is_bases_inited())
	{
		// получаем данные из формы
		auto performer = PerformerSelfInput->Text;
		auto project_name = PerformerNameInput->Text;
		auto role = PerformerRoleInput->Text;

		if (performer == "")
			return;
		if (project_name == "")
			return;
		if (role == "")
			return;

		// маршализация строки
		std::string tmp_performer;
		std::string tmp_project_name;
		std::string tmp_role;
		MarshalString(performer, tmp_performer);
		MarshalString(project_name, tmp_project_name);
		MarshalString(role, tmp_role);

		tmp_performer += " ";
		tmp_project_name += " ";

		if (!check_room_number_in_table(tmp_project_name))
		{
			MessageBox::Show("Проект с указанным названием отсутствует", "Удаление из дерева");
			return;
		}


		auto tree_path = test.delete_element_to_performer(tmp_performer, tmp_project_name, tmp_role);

		if (tree_path)
		{
			// обновление данныхв форме
			print_cleaning_data_base();
			print_cleaning_debug_data();
			LogGridView->Rows[log_counter]->Cells[0]->Value = performer + " удалено из дерева";
			log_counter++;
		}
		else
			MessageBox::Show("Указанный элемент отсутствует в дереве", "Удаление из дерева");
	}
	else
		MessageBox::Show("Хэш таблица не создана", "Создание хэш таблицы");
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Search_Tree_Click(System::Object^ sender, System::EventArgs^ e) {
	if (test.is_bases_inited())
	{
		// получаем данные из формы
		auto performer = PerformerSelfInput->Text;
		auto project_name = PerformerNameInput->Text;
		auto role = PerformerRoleInput->Text;

		if (performer == "")
			return;
		if (project_name == "")
			return;
		if (role == "")
			return;

		// маршализация строки
		std::string tmp_performer;
		std::string tmp_project_name;
		std::string tmp_role;
		MarshalString(performer, tmp_performer);
		MarshalString(project_name, tmp_project_name);
		MarshalString(role, tmp_role);

		tmp_performer += " ";
		tmp_project_name += " ";

		auto operation_code = test.find_object_in_tree(tmp_performer, tmp_project_name, tmp_role);

		if (operation_code)
		{
			Performer* tmp_struct = new Performer{ tmp_performer, tmp_project_name, tmp_role };
			paint_current_cells_by_object_in_tree(tmp_struct);
			LogGridView->Rows[log_counter]->Cells[0]->Value = "[Поиск][УСПЕШНО]" + performer + ":" + project_name + ":" + role;
			log_counter++;
		}
		else
		{
			LogGridView->Rows[log_counter]->Cells[0]->Value = "[Поиск][НЕУДАЧНО]" + performer + ":" + project_name + ":" + role;
			log_counter++;
		}
	}
	else
		MessageBox::Show("Хэш таблица не создана", "Создание хэш таблицы");
}
private: System::Void SearchInTable_Click(System::Object^ sender, System::EventArgs^ e) {
	if (test.is_bases_inited())
	{
		auto name = ProjectNameInput->Text;
		auto descr = projectDescInput->Text;
		auto cost = Convert::ToInt32(ProjectCostInput->Value);


		if (name == "")
			return;
		if (descr == "")
			return;

		// маршализация строки
		std::string name_tmp;
		std::string desc_tmp;
		MarshalString(name, name_tmp);
		MarshalString(descr, desc_tmp);

		name_tmp += " ";
		desc_tmp += " ";

		auto operation_code = test.find_object_in_table(name_tmp, desc_tmp, cost);

		
		if (operation_code)
		{
			Project* tmp_struct = new Project{ name_tmp, desc_tmp, cost };
			paint_current_cells_by_object_in_table(tmp_struct);
			//MessageBox::Show("Объект " + room_t + ":" + room_num + ":" + room_build + " найден", "SearchInTable");
			LogGridView->Rows[log_counter]->Cells[0]->Value = "[Поиск][УСПЕШНО]" + name + ":" + descr + ":" + cost;
			log_counter++;
		}
		else
		{
			LogGridView->Rows[log_counter]->Cells[0]->Value = "[Поиск][НЕУДАЧНО]" + name + ":" + descr + ":" + cost;
			log_counter++;
		}
	}
	else
		MessageBox::Show("Хэш таблица не создана", "Создание хэш таблицы");
}
	   private: System::Void paint_current_cells_by_object_in_table(Project* obj)
	   {
		   print_room_data_base();

		   auto hash_table = test.get_all_hash_table();
		   auto table_size = test.get_hash_table_size();

		  
		   auto j = 0;
		   for (auto item : *hash_table)
		   {
			   if (item.cell_status == status::occupied)
			   {
				   if (*item.data == *obj)
				   {
					   RoomsWindow->Rows[j]->Cells[0]->Style->ForeColor = System::Drawing::Color::DarkRed;
				   }
				   ++j;
			   }
		   }
	   }

		private: System::Void paint_current_cells_by_object_in_tree(Performer* obj)
		{
			print_cleaning_data_base();

			auto tree = test.get_all_tree_for_debug()->get_all_items();


			auto i = 0;
			for (auto item : *tree)
			{
				if(*item == *obj && item->get_name() == obj->get_name() && item->get_performer() == obj->get_performer())
					CleaningWindow->Rows[i]->Cells[0]->Style->ForeColor = System::Drawing::Color::DarkRed;
				++i;
			}
		}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
