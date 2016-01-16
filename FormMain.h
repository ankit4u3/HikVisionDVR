

#pragma once

#include "Login.h"
#include "FileIO.h"
#include "Database.h"

namespace HikVisionDVRSegmentExtractionUtility {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Windows::Forms;

	/// <summary>
	/// Summary for FormMain
	/// </summary>
public ref class FormMain : public System::Windows::Forms::Form
	{


	public:
		static long userid = -1;
	
	public: 
		static Login * lgin;
		static FileIO * fileIO;
	

	public: 
		long lPlayHandle;
		static int nPos = 0;

	private: System::Windows::Forms::RadioButton^  radioDirectlyFromDVRByTime;
	public: 

	public: 



	private: System::Windows::Forms::GroupBox^  groupBox2;







	private: System::Windows::Forms::TextBox^  videoClipNameTxtBox;


	private: System::Windows::Forms::Button^  videoClipsFolderButtonB;






	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
















	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog2;




	public: 

	LPNET_DVR_TIME lpStartTime;
	private: System::Windows::Forms::TextBox^  statusTxtBox;
	
			


	public: 
	LPNET_DVR_TIME lpStopTime;
	private: System::Windows::Forms::Button^  cancelExtractionButton;
	private: System::Windows::Forms::Button^  buttonPlaySegment;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::Button^  exitButton;
	private: System::Windows::Forms::ToolStripSplitButton^  toolStripSplitButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  version10ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  softwareOutsourcingServicesToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RadioButton^  radioFromRollNumber;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  videoClipsFolderTxtBoxA;
	private: System::Windows::Forms::Button^  accessDBButton;
	private: System::Windows::Forms::Button^  videoClipsFolderButtonA;
	private: System::Windows::Forms::TextBox^  mdbFileTxtBox;
	private: System::Windows::Forms::TextBox^  clipOffsetTxtBox;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  rollNumberTxtBox;
	private: System::Windows::Forms::TextBox^  clipDurationTxtBox;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  dvrClockOffsetTxtBox;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::GroupBox^  groupBox1;












	public: 
		System::ComponentModel::BackgroundWorker^  m_oWorker;

		FormMain(void)
		{
			InitializeComponent();


 			groupBox1->Enabled = true;
			groupBox2->Enabled = false;
			//TODO: Add the constructor code here
			//
		//Utilities::loginSingleton();
		Login * lgin = new Login();
		FileIO * fileIO = new FileIO();
		lpStartTime = new NET_DVR_TIME();
		lpStopTime = new NET_DVR_TIME();
		System::Windows::Forms::Application::DoEvents();
		
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>



	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  videoClipsFolderTxtBoxB;
private: System::Windows::Forms::Button^  buttonExtractSegment;




	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Label^  label9;
			 
	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::Label^  label10;
	
	private: System::Windows::Forms::Label^  label11;

	//private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;




#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMain::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->videoClipsFolderTxtBoxB = (gcnew System::Windows::Forms::TextBox());
			this->buttonExtractSegment = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->radioDirectlyFromDVRByTime = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->videoClipNameTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->videoClipsFolderButtonB = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog2 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->statusTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->m_oWorker = (gcnew System::ComponentModel::BackgroundWorker());
			this->cancelExtractionButton = (gcnew System::Windows::Forms::Button());
			this->buttonPlaySegment = (gcnew System::Windows::Forms::Button());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->toolStripSplitButton1 = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->version10ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->softwareOutsourcingServicesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->radioFromRollNumber = (gcnew System::Windows::Forms::RadioButton());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->videoClipsFolderTxtBoxA = (gcnew System::Windows::Forms::TextBox());
			this->accessDBButton = (gcnew System::Windows::Forms::Button());
			this->videoClipsFolderButtonA = (gcnew System::Windows::Forms::Button());
			this->mdbFileTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->clipOffsetTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->rollNumberTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->clipDurationTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dvrClockOffsetTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(102, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(104, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"192.168.5.41";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 100;
			this->label1->Text = L"DVR IP Address:";
			this->label1->Click += gcnew System::EventHandler(this, &FormMain::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 100;
			this->label2->Text = L"Segment Start Time:";
			this->label2->Click += gcnew System::EventHandler(this, &FormMain::label2_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"MMMM dd, yyyy hh:mm:ss tt";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(116, 19);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(206, 20);
			this->dateTimePicker1->TabIndex = 8;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &FormMain::dateTimePicker1_ValueChanged_1);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"MMMM dd, yyyy hh:mm:ss tt";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(116, 48);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(206, 20);
			this->dateTimePicker2->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 13);
			this->label3->TabIndex = 100;
			this->label3->Text = L"Segment Stop Time:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(274, 74);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(104, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"admin";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(443, 73);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(104, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"12345";
			this->textBox3->UseSystemPasswordChar = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(210, 77);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 100;
			this->label4->Text = L"Username:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(381, 77);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 100;
			this->label5->Text = L"Password:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(556, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormMain::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(637, 70);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Logout";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormMain::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 13);
			this->label6->TabIndex = 100;
			this->label6->Text = L"Video Clip Name:";
			// 
			// videoClipsFolderTxtBoxB
			// 
			this->videoClipsFolderTxtBoxB->Location = System::Drawing::Point(116, 107);
			this->videoClipsFolderTxtBoxB->Name = L"videoClipsFolderTxtBoxB";
			this->videoClipsFolderTxtBoxB->Size = System::Drawing::Size(206, 20);
			this->videoClipsFolderTxtBoxB->TabIndex = 12;
			this->videoClipsFolderTxtBoxB->Text = L"c:\\RaceClips";
			// 
			// buttonExtractSegment
			// 
			this->buttonExtractSegment->Location = System::Drawing::Point(287, 342);
			this->buttonExtractSegment->Name = L"buttonExtractSegment";
			this->buttonExtractSegment->Size = System::Drawing::Size(109, 23);
			this->buttonExtractSegment->TabIndex = 20;
			this->buttonExtractSegment->Text = L"Start Extraction";
			this->buttonExtractSegment->UseVisualStyleBackColor = true;
			this->buttonExtractSegment->Click += gcnew System::EventHandler(this, &FormMain::buttonExtractSegment_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(227, 107);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 13);
			this->label8->TabIndex = 100;
			this->label8->Text = L"Select Camera:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(167, 17);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(380, 25);
			this->label9->TabIndex = 19;
			this->label9->Text = L"HikVision DVR Segment Extraction Utility";
			// 
			// comboBox1
			// 
			this->comboBox1->DisplayMember = L"1";
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(16) {L"Camera 1", L"Camera 2", L"Camera 3", L"Camera 4", 
				L"Camera 5", L"Camera 6", L"Camera 7", L"Camera 8", L"Camera 9", L"Camera 10", L"Camera 11", L"Camera 12", L"Camera 13", L"Camera 14", 
				L"Camera 15", L"Camera 16"});
			this->comboBox1->Location = System::Drawing::Point(320, 104);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->Text = L"<Select Camera>";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(600, 107);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 13);
			this->label10->TabIndex = 100;
			this->label10->Text = L"Login Successful";
			this->label10->Visible = false;
			this->label10->Click += gcnew System::EventHandler(this, &FormMain::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(20, 364);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(40, 13);
			this->label11->TabIndex = 100;
			this->label11->Text = L"Status:";
			this->label11->Click += gcnew System::EventHandler(this, &FormMain::label11_Click);
			// 
			// radioDirectlyFromDVRByTime
			// 
			this->radioDirectlyFromDVRByTime->AutoSize = true;
			this->radioDirectlyFromDVRByTime->Location = System::Drawing::Point(338, 142);
			this->radioDirectlyFromDVRByTime->Name = L"radioDirectlyFromDVRByTime";
			this->radioDirectlyFromDVRByTime->Size = System::Drawing::Size(185, 17);
			this->radioDirectlyFromDVRByTime->TabIndex = 7;
			this->radioDirectlyFromDVRByTime->TabStop = true;
			this->radioDirectlyFromDVRByTime->Text = L"Extract Directly from DVR by Time";
			this->radioDirectlyFromDVRByTime->UseVisualStyleBackColor = true;
			this->radioDirectlyFromDVRByTime->Click += gcnew System::EventHandler(this, &FormMain::radioDirectlyFromDVRByTime_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->videoClipNameTxtBox);
			this->groupBox2->Controls->Add(this->videoClipsFolderButtonB);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->videoClipsFolderTxtBoxB);
			this->groupBox2->Controls->Add(this->dateTimePicker2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Location = System::Drawing::Point(338, 156);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(333, 167);
			this->groupBox2->TabIndex = 100;
			this->groupBox2->TabStop = false;
			// 
			// videoClipNameTxtBox
			// 
			this->videoClipNameTxtBox->Location = System::Drawing::Point(116, 79);
			this->videoClipNameTxtBox->Name = L"videoClipNameTxtBox";
			this->videoClipNameTxtBox->Size = System::Drawing::Size(206, 20);
			this->videoClipNameTxtBox->TabIndex = 10;
			this->videoClipNameTxtBox->Text = L"VideoClip";
			this->videoClipNameTxtBox->TextChanged += gcnew System::EventHandler(this, &FormMain::videoClipNameTxtBox_TextChanged);
			// 
			// videoClipsFolderButtonB
			// 
			this->videoClipsFolderButtonB->Location = System::Drawing::Point(6, 105);
			this->videoClipsFolderButtonB->Name = L"videoClipsFolderButtonB";
			this->videoClipsFolderButtonB->Size = System::Drawing::Size(104, 23);
			this->videoClipsFolderButtonB->TabIndex = 11;
			this->videoClipsFolderButtonB->Text = L"Video Clip Folder";
			this->videoClipsFolderButtonB->UseVisualStyleBackColor = true;
			this->videoClipsFolderButtonB->Click += gcnew System::EventHandler(this, &FormMain::videoClipsFolderButtonB_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"*.mdb";
			// 
			// statusTxtBox
			// 
			this->statusTxtBox->Location = System::Drawing::Point(23, 380);
			this->statusTxtBox->Multiline = true;
			this->statusTxtBox->Name = L"statusTxtBox";
			this->statusTxtBox->ReadOnly = true;
			this->statusTxtBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->statusTxtBox->Size = System::Drawing::Size(674, 86);
			this->statusTxtBox->TabIndex = 100;
			this->statusTxtBox->TabStop = false;
			// 
			// m_oWorker
			// 
			this->m_oWorker->WorkerReportsProgress = true;
			this->m_oWorker->WorkerSupportsCancellation = true;
			this->m_oWorker->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &FormMain::m_oWorker_DoWork);
			this->m_oWorker->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &FormMain::m_oWorker_RunWorkerCompleted);
			// 
			// cancelExtractionButton
			// 
			this->cancelExtractionButton->Enabled = false;
			this->cancelExtractionButton->Location = System::Drawing::Point(414, 342);
			this->cancelExtractionButton->Name = L"cancelExtractionButton";
			this->cancelExtractionButton->Size = System::Drawing::Size(109, 23);
			this->cancelExtractionButton->TabIndex = 21;
			this->cancelExtractionButton->Text = L"Cancel Extraction";
			this->cancelExtractionButton->UseVisualStyleBackColor = true;
			this->cancelExtractionButton->Click += gcnew System::EventHandler(this, &FormMain::cancelExtractionButton_Click);
			// 
			// buttonPlaySegment
			// 
			this->buttonPlaySegment->Location = System::Drawing::Point(544, 342);
			this->buttonPlaySegment->Name = L"buttonPlaySegment";
			this->buttonPlaySegment->Size = System::Drawing::Size(153, 23);
			this->buttonPlaySegment->TabIndex = 22;
			this->buttonPlaySegment->Text = L"Play Extracted Segment File";
			this->buttonPlaySegment->UseVisualStyleBackColor = true;
			this->buttonPlaySegment->Click += gcnew System::EventHandler(this, &FormMain::buttonPlaySegment_Click);
			// 
			// exitButton
			// 
			this->exitButton->Location = System::Drawing::Point(305, 472);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(75, 23);
			this->exitButton->TabIndex = 23;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &FormMain::exitButton_Click);
			// 
			// toolStripSplitButton1
			// 
			this->toolStripSplitButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripSplitButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->version10ToolStripMenuItem, 
				this->softwareOutsourcingServicesToolStripMenuItem});
			this->toolStripSplitButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->toolStripSplitButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripSplitButton1.Image")));
			this->toolStripSplitButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripSplitButton1->Name = L"toolStripSplitButton1";
			this->toolStripSplitButton1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->toolStripSplitButton1->Size = System::Drawing::Size(51, 22);
			this->toolStripSplitButton1->Text = L"About";
			this->toolStripSplitButton1->ToolTipText = L"Version and Copyright Info";
			this->toolStripSplitButton1->ButtonClick += gcnew System::EventHandler(this, &FormMain::toolStripSplitButton1_ButtonClick_1);
			// 
			// version10ToolStripMenuItem
			// 
			this->version10ToolStripMenuItem->Name = L"version10ToolStripMenuItem";
			this->version10ToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->version10ToolStripMenuItem->Text = L"Version 1.0 - .NET 4.0  ";
			// 
			// softwareOutsourcingServicesToolStripMenuItem
			// 
			this->softwareOutsourcingServicesToolStripMenuItem->Name = L"softwareOutsourcingServicesToolStripMenuItem";
			this->softwareOutsourcingServicesToolStripMenuItem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->softwareOutsourcingServicesToolStripMenuItem->Size = System::Drawing::Size(265, 22);
			this->softwareOutsourcingServicesToolStripMenuItem->Text = L"© 2013 - Software Outsourcing Services";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripSplitButton1});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->toolStrip1->Size = System::Drawing::Size(723, 25);
			this->toolStrip1->TabIndex = 101;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(193, 342);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 102;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormMain::button3_Click);
			// 
			// radioFromRollNumber
			// 
			this->radioFromRollNumber->AutoSize = true;
			this->radioFromRollNumber->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->radioFromRollNumber->Checked = true;
			this->radioFromRollNumber->Location = System::Drawing::Point(6, 142);
			this->radioFromRollNumber->Name = L"radioFromRollNumber";
			this->radioFromRollNumber->Size = System::Drawing::Size(225, 17);
			this->radioFromRollNumber->TabIndex = 6;
			this->radioFromRollNumber->TabStop = true;
			this->radioFromRollNumber->Text = L"Extract By Roll Number from Database File";
			this->radioFromRollNumber->UseVisualStyleBackColor = false;
			this->radioFromRollNumber->Visible = false;
			this->radioFromRollNumber->Click += gcnew System::EventHandler(this, &FormMain::radioFromRollNumber_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(341, 160);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(101, 20);
			this->textBox7->TabIndex = 30;
			// 
			// videoClipsFolderTxtBoxA
			// 
			this->videoClipsFolderTxtBoxA->Location = System::Drawing::Point(148, 141);
			this->videoClipsFolderTxtBoxA->Name = L"videoClipsFolderTxtBoxA";
			this->videoClipsFolderTxtBoxA->Size = System::Drawing::Size(156, 20);
			this->videoClipsFolderTxtBoxA->TabIndex = 15;
			this->videoClipsFolderTxtBoxA->Text = L"c:\\RaceClips";
			// 
			// accessDBButton
			// 
			this->accessDBButton->Location = System::Drawing::Point(17, 45);
			this->accessDBButton->Name = L"accessDBButton";
			this->accessDBButton->Size = System::Drawing::Size(125, 23);
			this->accessDBButton->TabIndex = 9;
			this->accessDBButton->Text = L"Access Database";
			this->accessDBButton->UseVisualStyleBackColor = true;
			this->accessDBButton->Click += gcnew System::EventHandler(this, &FormMain::accessDBButton_Click);
			// 
			// videoClipsFolderButtonA
			// 
			this->videoClipsFolderButtonA->Location = System::Drawing::Point(17, 140);
			this->videoClipsFolderButtonA->Name = L"videoClipsFolderButtonA";
			this->videoClipsFolderButtonA->Size = System::Drawing::Size(125, 23);
			this->videoClipsFolderButtonA->TabIndex = 14;
			this->videoClipsFolderButtonA->Text = L"Video Clips Folder";
			this->videoClipsFolderButtonA->UseVisualStyleBackColor = true;
			this->videoClipsFolderButtonA->Click += gcnew System::EventHandler(this, &FormMain::videoClipsFolderButtonA_Click);
			// 
			// mdbFileTxtBox
			// 
			this->mdbFileTxtBox->Location = System::Drawing::Point(148, 45);
			this->mdbFileTxtBox->Name = L"mdbFileTxtBox";
			this->mdbFileTxtBox->Size = System::Drawing::Size(156, 20);
			this->mdbFileTxtBox->TabIndex = 10;
			this->mdbFileTxtBox->TextChanged += gcnew System::EventHandler(this, &FormMain::mdbFileTextBox_TextChanged);
			// 
			// clipOffsetTxtBox
			// 
			this->clipOffsetTxtBox->Location = System::Drawing::Point(148, 92);
			this->clipOffsetTxtBox->Name = L"clipOffsetTxtBox";
			this->clipOffsetTxtBox->Size = System::Drawing::Size(156, 20);
			this->clipOffsetTxtBox->TabIndex = 12;
			this->clipOffsetTxtBox->Text = L"10";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(10, 98);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(132, 13);
			this->label16->TabIndex = 100;
			this->label16->Text = L"Clip Start Offset (seconds):";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(23, 75);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(119, 13);
			this->label15->TabIndex = 100;
			this->label15->Text = L"Clip Duration (seconds):";
			// 
			// rollNumberTxtBox
			// 
			this->rollNumberTxtBox->Location = System::Drawing::Point(148, 19);
			this->rollNumberTxtBox->Name = L"rollNumberTxtBox";
			this->rollNumberTxtBox->ShortcutsEnabled = false;
			this->rollNumberTxtBox->Size = System::Drawing::Size(156, 20);
			this->rollNumberTxtBox->TabIndex = 8;
			// 
			// clipDurationTxtBox
			// 
			this->clipDurationTxtBox->Location = System::Drawing::Point(148, 68);
			this->clipDurationTxtBox->Name = L"clipDurationTxtBox";
			this->clipDurationTxtBox->Size = System::Drawing::Size(156, 20);
			this->clipDurationTxtBox->TabIndex = 11;
			this->clipDurationTxtBox->Text = L"30";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(66, 24);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(68, 13);
			this->label14->TabIndex = 100;
			this->label14->Text = L"Roll Number:";
			// 
			// dvrClockOffsetTxtBox
			// 
			this->dvrClockOffsetTxtBox->Location = System::Drawing::Point(148, 116);
			this->dvrClockOffsetTxtBox->Name = L"dvrClockOffsetTxtBox";
			this->dvrClockOffsetTxtBox->Size = System::Drawing::Size(156, 20);
			this->dvrClockOffsetTxtBox->TabIndex = 13;
			this->dvrClockOffsetTxtBox->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(-1, 122);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(143, 13);
			this->label12->TabIndex = 100;
			this->label12->Text = L"DVR Clock Offset (seconds):";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->dvrClockOffsetTxtBox);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->clipDurationTxtBox);
			this->groupBox1->Controls->Add(this->rollNumberTxtBox);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->clipOffsetTxtBox);
			this->groupBox1->Controls->Add(this->mdbFileTxtBox);
			this->groupBox1->Controls->Add(this->videoClipsFolderButtonA);
			this->groupBox1->Controls->Add(this->accessDBButton);
			this->groupBox1->Controls->Add(this->videoClipsFolderTxtBoxA);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Location = System::Drawing::Point(6, 156);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(326, 167);
			this->groupBox1->TabIndex = 100;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(723, 499);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->buttonPlaySegment);
			this->Controls->Add(this->cancelExtractionButton);
			this->Controls->Add(this->statusTxtBox);
			this->Controls->Add(this->radioDirectlyFromDVRByTime);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->radioFromRollNumber);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->buttonExtractSegment);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->toolStrip1);
			this->Name = L"FormMain";
			this->Text = L"HikVision Video Segment Extraction Utility";
			this->TransparencyKey = System::Drawing::Color::Khaki;
			this->Load += gcnew System::EventHandler(this, &FormMain::FormMain_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void FormMain_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void dateTimePicker1_ValueChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		

		using namespace System;
		using namespace System::Runtime::InteropServices;

		char* pIp = (char*) Marshal::StringToHGlobalAnsi(textBox1->Text).ToPointer();

		char* pUsername = (char*) Marshal::StringToHGlobalAnsi(textBox2->Text).ToPointer();

		char* pPassword = (char*) Marshal::StringToHGlobalAnsi(textBox3->Text).ToPointer();
		statusTxtBox->Text = "";
		long result = lgin->loginUser(pIp,pUsername,pPassword);
		if(result != -1)
		{
			label10->Text = "Login Successful";
			label10->Visible = true;
			statusTxtBox->AppendText("Login Successful\r\n");
	        statusTxtBox->AppendText("Login Successful\r\n");
			userid = result;
		
		}
		else 
		{
			
			statusTxtBox->AppendText("ERROR: Login Unsuccessful. Please recheck the network connection, DVR's IP address, username and password!\r\n");

			label10->Text = "Login Unsuccessful";
			label10->Visible = true;

		}

    // Always free the unmanaged string.
	 Marshal::FreeHGlobal(IntPtr(pIp));
     Marshal::FreeHGlobal(IntPtr(pUsername));
	 Marshal::FreeHGlobal(IntPtr(pPassword));



	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
			 statusTxtBox->Text = "";
	bool result = (bool) lgin->logoutUser(userid);
			if(result == true)
		{
			label10->Text = "Logout Successful";
			label10->Visible = true;
			statusTxtBox->AppendText("Logout Successful\r\n");
			userid = -1;
		}else 
		{
			statusTxtBox->Text = "";
			statusTxtBox->AppendText("ERROR: Logout Unsuccessful. Please recheck the network connection, DVR's IP address, username and password!\r\n");

			label10->Text = "Logout Unsuccessful";
			label10->Visible = true;
		}


	}

private: System::Void exitButton_Click(System::Object^  sender, System::EventArgs^  e) {

			exit(0);

}

private: System::Void buttonExtractSegment_Click(System::Object^  sender, System::EventArgs^  e) {

	statusTxtBox->Text = "";

	if(!m_oWorker->IsBusy){
      // Start the asynchronous operation.
		
		m_oWorker->RunWorkerAsync();

	}

}

private: System::Void cancelExtractionButton_Click(System::Object^  sender, System::EventArgs^  e) {

      // Start the asynchronous operation.
cancelExtractionButton->Enabled = false;
      m_oWorker->CancelAsync();


}


private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }



private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void radioDirectlyFromDVRByTime_Click(System::Object^  sender, System::EventArgs^  e) {

			groupBox1->Enabled = false;
			groupBox2->Enabled = true;

}

private: System::Void radioFromRollNumber_Click(System::Object^  sender, System::EventArgs^  e) {

			groupBox1->Enabled = true;
			groupBox2->Enabled = false;
		 
}


private: System::Void accessDBButton_Click(System::Object ^ sender, System::EventArgs ^ e)
   {
      if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
      {

		mdbFileTxtBox->Text = openFileDialog1->FileName;
      }
	
   }


private: System::Void buttonPlaySegment_Click(System::Object ^ sender, System::EventArgs ^ e)
   {
	  if (groupBox1->Enabled == true){

				if(videoClipsFolderTxtBoxA->Text != ""){
				openFileDialog2->InitialDirectory = videoClipsFolderTxtBoxA->Text;
				} else openFileDialog2->InitialDirectory = "c:\\";
		}else
	  {
		  		if(videoClipsFolderTxtBoxB->Text != ""){
				openFileDialog2->InitialDirectory = videoClipsFolderTxtBoxB->Text;
				} else openFileDialog2->InitialDirectory = "c:\\";


	  }
		  

      if(openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
      {
		  using namespace System;
 using namespace System::Diagnostics;
		  Process ^p;
			 ProcessStartInfo ^pInfo;
 
			pInfo = gcnew ProcessStartInfo();

			pInfo->Arguments = openFileDialog2->FileName;
			 pInfo->Verb = "open";
			 pInfo->FileName = "vsplayer.exe";
			 pInfo->UseShellExecute = false;
 			pInfo->WorkingDirectory = "";


			p = Process::Start(pInfo);


      }


	
   }

private: System::Void videoClipsFolderButtonA_Click(System::Object ^ sender, System::EventArgs ^ e)
   {
      if(folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
      {

		videoClipsFolderTxtBoxA->Text = folderBrowserDialog1->SelectedPath;
      }
	
   }

private: System::Void videoClipsFolderButtonB_Click(System::Object ^ sender, System::EventArgs ^ e)
   {
      if(folderBrowserDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
      {

		videoClipsFolderTxtBoxB->Text = folderBrowserDialog2->SelectedPath;
      }
	
   }

private: System::Void mdbFileTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void m_oWorker_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	statusTxtBox->Text = "";
			 BackgroundWorker^ worker = dynamic_cast<BackgroundWorker^>(sender);

	            if (m_oWorker->CancellationPending)
            {   
                e->Cancel = true;
            }
            else{		 /*
    typedef struct
{
    DWORD dwYear; 		    //Year
    DWORD dwMonth; 		    //Month
    DWORD dwDay; 		    //Day
    DWORD dwHour; 		    //Hour
    DWORD dwMinute; 		//Minute
    DWORD dwSecond; 		//Second

}NET_DVR_TIME,  *LPNET_DVR_TIME; 


	long FileIO::getFileByTime(long userid, 
	long lchannel, 
	LPNET_DVR_TIME lpStartTime, 
	LPNET_DVR_TIME lpStopTIme,
	char * sSavedFileName);

*/


long lChannel;
lChannel = comboBox1->SelectedIndex + 1;
bool fieldsUnfilled = false;



	if(userid == -1)
	{
			if(textBox1->Text == "")
			{
				statusTxtBox->AppendText("ERROR: Please enter the DVR's IP address (v4)!\r\n");
				return;

			}
			else{
				statusTxtBox->AppendText("ERROR: Please log in first into the DVR! \r\n");
				return;
			}

	}
	else if(lChannel == 0)
	{
		statusTxtBox->AppendText( "ERROR: Please select a camera first!\r\n");
		return;
	}


if (groupBox1->Enabled == true)
{
	
	if(rollNumberTxtBox->Text == "")
	{
		statusTxtBox->AppendText( "ERROR: Please enter a valid Roll Number!\r\n");
		fieldsUnfilled = true;
	}
	if(mdbFileTxtBox->Text == "")
	{
		statusTxtBox->AppendText("ERROR: Please select a valid database file!\r\n");
		fieldsUnfilled = true;
	}
	if(clipDurationTxtBox->Text == "")
	{
		statusTxtBox->AppendText( "ERROR: Please enter a valid Clip Duration!\r\n");
		fieldsUnfilled = true;
	}
	if(clipOffsetTxtBox->Text == "")	{
		statusTxtBox->AppendText( "ERROR: Please enter a valid Clip Start Offset!\r\n");
		fieldsUnfilled = true;
	}
	if(dvrClockOffsetTxtBox->Text == "")	{
		statusTxtBox->AppendText( "ERROR: Please enter a valid DVR Clock Offset!\r\n");
		fieldsUnfilled = true;
	}
	if(videoClipsFolderTxtBoxA->Text == "")	{
		statusTxtBox->AppendText( "ERROR: Please enter a valid Video Clips Folder!\r\n");
		fieldsUnfilled = true;
	}

	if(fieldsUnfilled) return;

	 statusTxtBox->Text = "";
	 Database^ db = gcnew Database();
	 RaceLapTimings ^ rLT = gcnew RaceLapTimings();
	 rLT->jacketNumber = "-1";
	 db->GetRaceLapTimings(rollNumberTxtBox->Text,mdbFileTxtBox->Text,rLT);

	 if(rLT->jacketNumber == "-1"){
		statusTxtBox->AppendText( "ERROR: No records found in database file for Roll Number " + rollNumberTxtBox->Text + "!\r\n"); //rollNumberTxtBox->Text + "!\r\n");
		return;
	 }


	 double clipOffset = Convert::ToInt32(clipOffsetTxtBox->Text);
	 double dvrClockOffset = Convert::ToInt32(dvrClockOffsetTxtBox->Text);
	 double clipDuration = Convert::ToInt32(clipDurationTxtBox->Text);

	 
		using namespace System;
		using namespace System::Runtime::InteropServices;
		
		char* videoClipsFolder = (char*) Marshal::StringToHGlobalAnsi(videoClipsFolderTxtBoxA->Text).ToPointer();
		char* rollNumber = (char*) Marshal::StringToHGlobalAnsi(rollNumberTxtBox->Text).ToPointer();

		System::IO::DirectoryInfo^ di = gcnew System::IO::DirectoryInfo(videoClipsFolderTxtBoxA->Text);
		di->Create();
		di->CreateSubdirectory(rollNumberTxtBox->Text);
		System::Globalization::CultureInfo^ cf= gcnew System::Globalization::CultureInfo("en-US");

		char nameWithExtension[500];

		strcpy_s(nameWithExtension, 500,"");
		strcpy_s(nameWithExtension, 500, videoClipsFolder);
		strcat_s(nameWithExtension, 500, "\\");  
		strcat_s(nameWithExtension, 500, rollNumber); 
		strcat_s(nameWithExtension, 500, "\\"); 
		strcat_s(nameWithExtension, 500, rollNumber);  
		strcat_s(nameWithExtension, 500, "_s.avc");  
		
		System::String^ nameWithExtensionManaged;

		nameWithExtensionManaged = gcnew String(nameWithExtension);

		System::DateTime^ dt = System::DateTime::Parse(rLT->raceStartTime,cf);

		DateTime^ startTime = dt->AddSeconds(-1*clipOffset + dvrClockOffset);
		DateTime^ stopTime = startTime->AddSeconds(clipDuration);

			System::Windows::Forms::MessageBox::Show(startTime->ToString() + " to " + stopTime->ToString());



		lpStartTime->dwYear = startTime->Year;
		lpStartTime->dwMonth = startTime->Month;
		lpStartTime->dwDay= startTime->Day;
		lpStartTime->dwHour= startTime->Hour;
		lpStartTime->dwMinute = startTime->Minute;
		lpStartTime->dwSecond = startTime->Second;

		lpStopTime->dwYear = stopTime->Year;
		lpStopTime->dwMonth = stopTime->Month;
		lpStopTime->dwDay= stopTime->Day;
		lpStopTime->dwHour= stopTime->Hour;
		lpStopTime->dwMinute = stopTime->Minute;
		lpStopTime->dwSecond = stopTime->Second;

		char lapsRun[2];
		char * laps = _itoa(rLT->lapsRun,lapsRun,10);

		System::String^ lapsManaged;

		lapsManaged = gcnew String(laps);

statusTxtBox->AppendText( "Total Laps Completed by Roll Number "+rollNumberTxtBox->Text+" (Jacket No. "+rLT->jacketNumber+") = "+lapsManaged+"\r\n");
statusTxtBox->AppendText( "Starting Segment Extraction for Roll Number "+rollNumberTxtBox->Text +" (Jacket No. "+rLT->jacketNumber+")\r\n");
statusTxtBox->AppendText( "Extracting Start Segment to "+nameWithExtensionManaged+"\r\n");



lPlayHandle = fileIO->getFileByTime(userid, lChannel, lpStartTime, lpStopTime, nameWithExtension);
	buttonExtractSegment->Enabled = false;
	cancelExtractionButton->Enabled = true;
	if(!fileIO->playBackControl(lPlayHandle, NET_DVR_PLAYSTART, 0, NULL)) 

	{ 
				statusTxtBox->AppendText( "ERROR: Extraction failed, check entered parameters, DVR login status/camera selection, connection status and DVR content\r\n");
				
				//			 buttonExtractSegment->Enabled = true;
			 //cancelExtractionButton->Enabled = false;
			 return;
		
	}else
	{

		while(nPos = fileIO->getDownloadPos(lPlayHandle)<100){
			if (m_oWorker->CancellationPending)
            {   
                e->Cancel = true;
			//	statusTxtBox->AppendText("Operation Cancelled by user\r\n");
			//buttonExtractSegment->Enabled = true;
			// cancelExtractionButton->Enabled = false;
				return;
            }
			

		}
		statusTxtBox->AppendText( "Extraction Complete\r\n");
		fileIO->stopGetFile(lPlayHandle);
	}

	for(int i = 0; i < rLT->lapsRun; i++)
	{
		

		char buf[2];
		char * suffix = _itoa(i+1,buf,10);

		System::String^ lapBeingExtracted;

		lapBeingExtracted = gcnew String(suffix);



		strcpy_s(nameWithExtension, 500,"");
		strcpy_s(nameWithExtension, 500, videoClipsFolder);
		strcat_s(nameWithExtension, 500, "\\");  
		strcat_s(nameWithExtension, 500, rollNumber); 
		strcat_s(nameWithExtension, 500, "\\"); 
		strcat_s(nameWithExtension, 500, rollNumber); 
		strcat_s(nameWithExtension, 500, "_");
		strcat_s(nameWithExtension, 500,suffix);
		strcat_s(nameWithExtension, 500, ".avc");  

		nameWithExtensionManaged = gcnew String(nameWithExtension);

		statusTxtBox->AppendText( "Now extracting segment for Roll Number "+rollNumberTxtBox->Text+" (Jacket No. "+rLT->jacketNumber+") lap "+lapBeingExtracted+" out of "+lapsManaged+" to "+nameWithExtensionManaged+"\r\n");

		dt = System::DateTime::Parse(rLT->raceLapTimings[i],cf);

		startTime = dt->AddSeconds(-1*clipOffset + dvrClockOffset);
		stopTime = startTime->AddSeconds(clipDuration);

	//System::Windows::Forms::MessageBox::Show(nameWithExtension);



		lpStartTime->dwYear = startTime->Year;
		lpStartTime->dwMonth = startTime->Month;
		lpStartTime->dwDay= startTime->Day;
		lpStartTime->dwHour= startTime->Hour;
		lpStartTime->dwMinute = startTime->Minute;
		lpStartTime->dwSecond = startTime->Second;

		lpStopTime->dwYear = stopTime->Year;
		lpStopTime->dwMonth = stopTime->Month;
		lpStopTime->dwDay= stopTime->Day;
		lpStopTime->dwHour= stopTime->Hour;
		lpStopTime->dwMinute = stopTime->Minute;
		lpStopTime->dwSecond = stopTime->Second;


lPlayHandle = fileIO->getFileByTime(userid, lChannel, lpStartTime, lpStopTime, nameWithExtension);
	buttonExtractSegment->Enabled = false;
	cancelExtractionButton->Enabled = true;
	if(!fileIO->playBackControl(lPlayHandle, NET_DVR_PLAYSTART, 0, NULL)) 

	{ 
				statusTxtBox->AppendText( "ERROR: Extraction failed, check entered parameters, DVR login status/camera selection, connection status and DVR content\r\n");
				//			 buttonExtractSegment->Enabled = true;
			 //cancelExtractionButton->Enabled = false;
			 return;
		
	}else
	{

		while(nPos = fileIO->getDownloadPos(lPlayHandle)<100){
			if (m_oWorker->CancellationPending)
            {   
                e->Cancel = true;
			//					statusTxtBox->AppendText("Operation Cancelled by user\r\n");
			//buttonExtractSegment->Enabled = true;
			// cancelExtractionButton->Enabled = false;
				return;
            }
		
		}
		statusTxtBox->AppendText( "Extraction Complete\r\n");
		fileIO->stopGetFile(lPlayHandle);
	}





	}

	 Marshal::FreeHGlobal(IntPtr(videoClipsFolder));
	 Marshal::FreeHGlobal(IntPtr(rollNumber));
}

else{

using namespace System;
using namespace System::Runtime::InteropServices;

	if(videoClipNameTxtBox->Text == "")	{
		statusTxtBox->AppendText( "ERROR: Please enter a valid Video Clip Name!\r\n");
		fieldsUnfilled = true;
	}
	if(videoClipsFolderTxtBoxB->Text == "")	{
		statusTxtBox->AppendText( "ERROR: Please enter a valid Video Clip Folder!\r\n");
		fieldsUnfilled = true;
	}

	if(fieldsUnfilled) return;
	statusTxtBox->Text = "";

		char* sSavedFileName = (char*) Marshal::StringToHGlobalAnsi(videoClipNameTxtBox->Text).ToPointer();

		char* videoClipsFolder = (char*) Marshal::StringToHGlobalAnsi(videoClipsFolderTxtBoxB->Text).ToPointer();
		System::IO::DirectoryInfo^ di = gcnew System::IO::DirectoryInfo(videoClipsFolderTxtBoxB->Text);
		di->Create();

		char nameWithExtension[500];
		strcpy_s(nameWithExtension, 500,"");
		strcpy_s(nameWithExtension, 500, videoClipsFolder);
		strcat_s(nameWithExtension, 500, "\\");  
		strcat_s(nameWithExtension, 500, sSavedFileName); 
		strcat_s(nameWithExtension, 500, ".avc");  


System::String^ nameWithExtensionManaged = gcnew String(nameWithExtension);
lpStartTime->dwYear = dateTimePicker1->Value.Year;
lpStartTime->dwMonth = dateTimePicker1->Value.Month;
lpStartTime->dwDay= dateTimePicker1->Value.Day;
lpStartTime->dwHour= dateTimePicker1->Value.Hour;
lpStartTime->dwMinute = dateTimePicker1->Value.Minute;
lpStartTime->dwSecond = dateTimePicker1->Value.Second;

lpStopTime->dwYear = dateTimePicker2->Value.Year;
lpStopTime->dwMonth = dateTimePicker2->Value.Month;
lpStopTime->dwDay= dateTimePicker2->Value.Day;
lpStopTime->dwHour= dateTimePicker2->Value.Hour;
lpStopTime->dwMinute = dateTimePicker2->Value.Minute;
lpStopTime->dwSecond = dateTimePicker2->Value.Second;
statusTxtBox->Text = "Starting Segment Extraction for specified time interval to "+nameWithExtensionManaged+"\r\n";
lPlayHandle = fileIO->getFileByTime(userid, lChannel, lpStartTime, lpStopTime, nameWithExtension);
	buttonExtractSegment->Enabled = false;
	cancelExtractionButton->Enabled = false;
if(!fileIO->playBackControl(lPlayHandle, NET_DVR_PLAYSTART, 0, NULL)) 
{ 
	statusTxtBox->AppendText( "ERROR: Extraction failed, check entered parameters, DVR login status/camera selection, connection status and DVR content\r\n");
			 //buttonExtractSegment->Enabled = true;
			 //cancelExtractionButton->Enabled = false;
			 return;
}else
{

	while(nPos = fileIO->getDownloadPos(lPlayHandle)<100){
			if (m_oWorker->CancellationPending)
            {  

                e->Cancel = true;

			//statusTxtBox->AppendText("Operation Cancelled by user\r\n");
			//buttonExtractSegment->Enabled = true;
			// cancelExtractionButton->Enabled = false;
				return;
            }
		
	}

      statusTxtBox->AppendText("Extraction Complete\r\n");
	  fileIO->stopGetFile(lPlayHandle);

}

	 Marshal::FreeHGlobal(IntPtr(sSavedFileName));
}
}

}

private: System::Void m_oWorker_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
		
			 buttonExtractSegment->Enabled = true;
			 cancelExtractionButton->Enabled = false;

			 if (e->Cancelled)
            {
                // Next, handle the case where the user canceled  
                // the operation. 
                // Note that due to a race condition in  
                // the DoWork event handler, the Cancelled 
                // flag may not have been set, even though 
                // CancelAsync was called.
           //	statusTxtBox->AppendText("Operation Cancelled by user\r\n");
				statusTxtBox->AppendText("Operation Cancelled by user\r\n");
            }

		 
		 }

private: System::Void m_oWorker_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {
		 }




private: System::Void videoClipNameTxtBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toolStripLabel1_Click(System::Object^  sender, System::EventArgs^  e) {


		 }
private: System::Void softwareOutsourcingServicesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void softwareToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toolStripSplitButton1_ButtonClick(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toolStripSplitButton1_ButtonClick_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
statusTxtBox->Text = "";

	if(!m_oWorker->IsBusy){
      // Start the asynchronous operation.
		
		m_oWorker->RunWorkerAsync();

	}
		 }

};
}