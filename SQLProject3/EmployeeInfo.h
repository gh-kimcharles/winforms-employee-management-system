#pragma once

namespace SQLProject3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for EmployeeInfo
	/// </summary>
	public ref class EmployeeInfo : public System::Windows::Forms::Form
	{
	private:
		Form^ emp_form;

	public:
		EmployeeInfo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		EmployeeInfo(Form^ call_etr) {
			InitializeComponent();
			emp_form = call_etr;
			this->FormClosed += gcnew FormClosedEventHandler(this, &EmployeeInfo::EmployeeInfo_FormClosed);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EmployeeInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ emp_view_image;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ emp_txt_viewfname;
	private: System::Windows::Forms::TextBox^ emp_txt_viewlname;
	private: System::Windows::Forms::TextBox^ emp_txt_viewdesignation;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ emp_txt_viewdepartment;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ emp_txt_viewaddress;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ emp_txt_viewconnumber;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::NumericUpDown^ emp_num_salary;
	private: System::Windows::Forms::DateTimePicker^ emp_dt_doHire;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DateTimePicker^ emp_dt_doBirth;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ emp_txt_viewage;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ emp_rb_viewfemale;
	private: System::Windows::Forms::RadioButton^ emp_rb_viewmale;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ emp_rb_viewmarried;
	private: System::Windows::Forms::RadioButton^ emp_rb_viewsingle;
	private: System::Windows::Forms::TextBox^ emp_txt_viewpassword;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ emp_txt_viewemail;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ emp_txt_viewid;
	private: System::Windows::Forms::TextBox^ txt_viewnetpay;
	private: System::Windows::Forms::TextBox^ txt_viewpagibig;
	private: System::Windows::Forms::TextBox^ txt_viewphilhealth;
	private: System::Windows::Forms::TextBox^ txt_viewsss;
	private: System::Windows::Forms::TextBox^ txt_viewtax;
	private: System::Windows::Forms::TextBox^ txt_viewconveyance;
	private: System::Windows::Forms::TextBox^ txt_viewhouse;
	private: System::Windows::Forms::TextBox^ txt_viewmedical;
	private: System::Windows::Forms::TextBox^ txt_viewbasic;
	private: System::Windows::Forms::TextBox^ txt_viewgross;
	private: System::Windows::Forms::TextBox^ txt_viewannual;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->emp_view_image = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->emp_txt_viewfname = (gcnew System::Windows::Forms::TextBox());
			this->emp_txt_viewlname = (gcnew System::Windows::Forms::TextBox());
			this->emp_txt_viewdesignation = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->emp_txt_viewdepartment = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->emp_txt_viewaddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->emp_txt_viewconnumber = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->emp_num_salary = (gcnew System::Windows::Forms::NumericUpDown());
			this->emp_dt_doHire = (gcnew System::Windows::Forms::DateTimePicker());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->emp_dt_doBirth = (gcnew System::Windows::Forms::DateTimePicker());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->emp_txt_viewage = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->emp_rb_viewfemale = (gcnew System::Windows::Forms::RadioButton());
			this->emp_rb_viewmale = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->emp_rb_viewmarried = (gcnew System::Windows::Forms::RadioButton());
			this->emp_rb_viewsingle = (gcnew System::Windows::Forms::RadioButton());
			this->emp_txt_viewpassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->emp_txt_viewemail = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->emp_txt_viewid = (gcnew System::Windows::Forms::TextBox());
			this->txt_viewnetpay = (gcnew System::Windows::Forms::TextBox());
			this->txt_viewpagibig = (gcnew System::Windows::Forms::TextBox());
			this->txt_viewphilhealth = (gcnew System::Windows::Forms::TextBox());
			this->txt_viewsss = (gcnew System::Windows::Forms::TextBox());
			this->txt_viewtax = (gcnew System::Windows::Forms::TextBox());
			this->txt_viewconveyance = (gcnew System::Windows::Forms::TextBox());
			this->txt_viewhouse = (gcnew System::Windows::Forms::TextBox());
			this->txt_viewmedical = (gcnew System::Windows::Forms::TextBox());
			this->txt_viewbasic = (gcnew System::Windows::Forms::TextBox());
			this->txt_viewgross = (gcnew System::Windows::Forms::TextBox());
			this->txt_viewannual = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->emp_view_image))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->emp_num_salary))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(387, 429);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// emp_view_image
			// 
			this->emp_view_image->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->emp_view_image->Location = System::Drawing::Point(26, 44);
			this->emp_view_image->Name = L"emp_view_image";
			this->emp_view_image->Size = System::Drawing::Size(132, 123);
			this->emp_view_image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->emp_view_image->TabIndex = 2;
			this->emp_view_image->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(169, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"First Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(283, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Last Name:";
			// 
			// emp_txt_viewfname
			// 
			this->emp_txt_viewfname->Location = System::Drawing::Point(169, 61);
			this->emp_txt_viewfname->Name = L"emp_txt_viewfname";
			this->emp_txt_viewfname->ReadOnly = true;
			this->emp_txt_viewfname->Size = System::Drawing::Size(100, 20);
			this->emp_txt_viewfname->TabIndex = 6;
			// 
			// emp_txt_viewlname
			// 
			this->emp_txt_viewlname->Location = System::Drawing::Point(286, 61);
			this->emp_txt_viewlname->Name = L"emp_txt_viewlname";
			this->emp_txt_viewlname->ReadOnly = true;
			this->emp_txt_viewlname->Size = System::Drawing::Size(100, 20);
			this->emp_txt_viewlname->TabIndex = 7;
			// 
			// emp_txt_viewdesignation
			// 
			this->emp_txt_viewdesignation->Location = System::Drawing::Point(237, 87);
			this->emp_txt_viewdesignation->Name = L"emp_txt_viewdesignation";
			this->emp_txt_viewdesignation->ReadOnly = true;
			this->emp_txt_viewdesignation->Size = System::Drawing::Size(149, 20);
			this->emp_txt_viewdesignation->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(169, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Designation:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(169, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Salary:";
			// 
			// emp_txt_viewdepartment
			// 
			this->emp_txt_viewdepartment->Location = System::Drawing::Point(237, 113);
			this->emp_txt_viewdepartment->Name = L"emp_txt_viewdepartment";
			this->emp_txt_viewdepartment->ReadOnly = true;
			this->emp_txt_viewdepartment->Size = System::Drawing::Size(149, 20);
			this->emp_txt_viewdepartment->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(169, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Department:";
			// 
			// emp_txt_viewaddress
			// 
			this->emp_txt_viewaddress->Location = System::Drawing::Point(144, 407);
			this->emp_txt_viewaddress->Name = L"emp_txt_viewaddress";
			this->emp_txt_viewaddress->ReadOnly = true;
			this->emp_txt_viewaddress->Size = System::Drawing::Size(242, 20);
			this->emp_txt_viewaddress->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(144, 390);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Address:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(26, 271);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Date of Birth:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(23, 25);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Employee No.:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(155, 248);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(105, 13);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Basic Information";
			// 
			// emp_txt_viewconnumber
			// 
			this->emp_txt_viewconnumber->Location = System::Drawing::Point(26, 407);
			this->emp_txt_viewconnumber->Name = L"emp_txt_viewconnumber";
			this->emp_txt_viewconnumber->ReadOnly = true;
			this->emp_txt_viewconnumber->Size = System::Drawing::Size(100, 20);
			this->emp_txt_viewconnumber->TabIndex = 25;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(26, 390);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Contact No.:";
			// 
			// emp_num_salary
			// 
			this->emp_num_salary->DecimalPlaces = 2;
			this->emp_num_salary->Enabled = false;
			this->emp_num_salary->InterceptArrowKeys = false;
			this->emp_num_salary->Location = System::Drawing::Point(214, 139);
			this->emp_num_salary->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->emp_num_salary->Name = L"emp_num_salary";
			this->emp_num_salary->ReadOnly = true;
			this->emp_num_salary->Size = System::Drawing::Size(99, 20);
			this->emp_num_salary->TabIndex = 26;
			// 
			// emp_dt_doHire
			// 
			this->emp_dt_doHire->Enabled = false;
			this->emp_dt_doHire->Location = System::Drawing::Point(97, 219);
			this->emp_dt_doHire->Name = L"emp_dt_doHire";
			this->emp_dt_doHire->Size = System::Drawing::Size(215, 20);
			this->emp_dt_doHire->TabIndex = 27;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(24, 225);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 13);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Date of Hire:";
			// 
			// emp_dt_doBirth
			// 
			this->emp_dt_doBirth->Enabled = false;
			this->emp_dt_doBirth->Location = System::Drawing::Point(29, 287);
			this->emp_dt_doBirth->Name = L"emp_dt_doBirth";
			this->emp_dt_doBirth->Size = System::Drawing::Size(215, 20);
			this->emp_dt_doBirth->TabIndex = 29;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(259, 271);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(29, 13);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Age:";
			// 
			// emp_txt_viewage
			// 
			this->emp_txt_viewage->Location = System::Drawing::Point(262, 286);
			this->emp_txt_viewage->Name = L"emp_txt_viewage";
			this->emp_txt_viewage->ReadOnly = true;
			this->emp_txt_viewage->Size = System::Drawing::Size(124, 20);
			this->emp_txt_viewage->TabIndex = 31;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->emp_rb_viewfemale);
			this->groupBox1->Controls->Add(this->emp_rb_viewmale);
			this->groupBox1->Enabled = false;
			this->groupBox1->Location = System::Drawing::Point(26, 314);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(166, 71);
			this->groupBox1->TabIndex = 32;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gender:";
			// 
			// emp_rb_viewfemale
			// 
			this->emp_rb_viewfemale->AutoSize = true;
			this->emp_rb_viewfemale->Location = System::Drawing::Point(6, 47);
			this->emp_rb_viewfemale->Name = L"emp_rb_viewfemale";
			this->emp_rb_viewfemale->Size = System::Drawing::Size(59, 17);
			this->emp_rb_viewfemale->TabIndex = 1;
			this->emp_rb_viewfemale->TabStop = true;
			this->emp_rb_viewfemale->Text = L"Female";
			this->emp_rb_viewfemale->UseVisualStyleBackColor = true;
			// 
			// emp_rb_viewmale
			// 
			this->emp_rb_viewmale->AutoSize = true;
			this->emp_rb_viewmale->Location = System::Drawing::Point(6, 23);
			this->emp_rb_viewmale->Name = L"emp_rb_viewmale";
			this->emp_rb_viewmale->Size = System::Drawing::Size(48, 17);
			this->emp_rb_viewmale->TabIndex = 0;
			this->emp_rb_viewmale->TabStop = true;
			this->emp_rb_viewmale->Text = L"Male";
			this->emp_rb_viewmale->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->emp_rb_viewmarried);
			this->groupBox2->Controls->Add(this->emp_rb_viewsingle);
			this->groupBox2->Enabled = false;
			this->groupBox2->Location = System::Drawing::Point(220, 314);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(166, 71);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Marital Status:";
			// 
			// emp_rb_viewmarried
			// 
			this->emp_rb_viewmarried->AutoSize = true;
			this->emp_rb_viewmarried->Location = System::Drawing::Point(8, 47);
			this->emp_rb_viewmarried->Name = L"emp_rb_viewmarried";
			this->emp_rb_viewmarried->Size = System::Drawing::Size(60, 17);
			this->emp_rb_viewmarried->TabIndex = 1;
			this->emp_rb_viewmarried->TabStop = true;
			this->emp_rb_viewmarried->Text = L"Married";
			this->emp_rb_viewmarried->UseVisualStyleBackColor = true;
			// 
			// emp_rb_viewsingle
			// 
			this->emp_rb_viewsingle->AutoSize = true;
			this->emp_rb_viewsingle->Location = System::Drawing::Point(8, 23);
			this->emp_rb_viewsingle->Name = L"emp_rb_viewsingle";
			this->emp_rb_viewsingle->Size = System::Drawing::Size(54, 17);
			this->emp_rb_viewsingle->TabIndex = 0;
			this->emp_rb_viewsingle->TabStop = true;
			this->emp_rb_viewsingle->Text = L"Single";
			this->emp_rb_viewsingle->UseVisualStyleBackColor = true;
			// 
			// emp_txt_viewpassword
			// 
			this->emp_txt_viewpassword->Location = System::Drawing::Point(237, 191);
			this->emp_txt_viewpassword->Name = L"emp_txt_viewpassword";
			this->emp_txt_viewpassword->ReadOnly = true;
			this->emp_txt_viewpassword->Size = System::Drawing::Size(149, 20);
			this->emp_txt_viewpassword->TabIndex = 37;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(169, 196);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Password:";
			// 
			// emp_txt_viewemail
			// 
			this->emp_txt_viewemail->Location = System::Drawing::Point(237, 165);
			this->emp_txt_viewemail->Name = L"emp_txt_viewemail";
			this->emp_txt_viewemail->ReadOnly = true;
			this->emp_txt_viewemail->Size = System::Drawing::Size(149, 20);
			this->emp_txt_viewemail->TabIndex = 35;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(169, 169);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Email:";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(26, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 35);
			this->button1->TabIndex = 38;
			this->button1->Text = L"UPDATE IMAGE";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// emp_txt_viewid
			// 
			this->emp_txt_viewid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->emp_txt_viewid->Location = System::Drawing::Point(104, 25);
			this->emp_txt_viewid->Name = L"emp_txt_viewid";
			this->emp_txt_viewid->ReadOnly = true;
			this->emp_txt_viewid->Size = System::Drawing::Size(100, 13);
			this->emp_txt_viewid->TabIndex = 39;
			// 
			// txt_viewnetpay
			// 
			this->txt_viewnetpay->Location = System::Drawing::Point(596, 407);
			this->txt_viewnetpay->Name = L"txt_viewnetpay";
			this->txt_viewnetpay->ReadOnly = true;
			this->txt_viewnetpay->Size = System::Drawing::Size(100, 20);
			this->txt_viewnetpay->TabIndex = 139;
			// 
			// txt_viewpagibig
			// 
			this->txt_viewpagibig->Location = System::Drawing::Point(571, 372);
			this->txt_viewpagibig->Name = L"txt_viewpagibig";
			this->txt_viewpagibig->ReadOnly = true;
			this->txt_viewpagibig->Size = System::Drawing::Size(109, 20);
			this->txt_viewpagibig->TabIndex = 138;
			// 
			// txt_viewphilhealth
			// 
			this->txt_viewphilhealth->Location = System::Drawing::Point(573, 346);
			this->txt_viewphilhealth->Name = L"txt_viewphilhealth";
			this->txt_viewphilhealth->ReadOnly = true;
			this->txt_viewphilhealth->Size = System::Drawing::Size(107, 20);
			this->txt_viewphilhealth->TabIndex = 137;
			// 
			// txt_viewsss
			// 
			this->txt_viewsss->Location = System::Drawing::Point(546, 320);
			this->txt_viewsss->Name = L"txt_viewsss";
			this->txt_viewsss->ReadOnly = true;
			this->txt_viewsss->Size = System::Drawing::Size(134, 20);
			this->txt_viewsss->TabIndex = 136;
			// 
			// txt_viewtax
			// 
			this->txt_viewtax->Location = System::Drawing::Point(483, 294);
			this->txt_viewtax->Name = L"txt_viewtax";
			this->txt_viewtax->ReadOnly = true;
			this->txt_viewtax->Size = System::Drawing::Size(100, 20);
			this->txt_viewtax->TabIndex = 135;
			// 
			// txt_viewconveyance
			// 
			this->txt_viewconveyance->Location = System::Drawing::Point(524, 239);
			this->txt_viewconveyance->Name = L"txt_viewconveyance";
			this->txt_viewconveyance->ReadOnly = true;
			this->txt_viewconveyance->Size = System::Drawing::Size(106, 20);
			this->txt_viewconveyance->TabIndex = 134;
			// 
			// txt_viewhouse
			// 
			this->txt_viewhouse->Location = System::Drawing::Point(522, 213);
			this->txt_viewhouse->Name = L"txt_viewhouse";
			this->txt_viewhouse->ReadOnly = true;
			this->txt_viewhouse->Size = System::Drawing::Size(108, 20);
			this->txt_viewhouse->TabIndex = 133;
			// 
			// txt_viewmedical
			// 
			this->txt_viewmedical->Location = System::Drawing::Point(503, 187);
			this->txt_viewmedical->Name = L"txt_viewmedical";
			this->txt_viewmedical->ReadOnly = true;
			this->txt_viewmedical->Size = System::Drawing::Size(127, 20);
			this->txt_viewmedical->TabIndex = 132;
			// 
			// txt_viewbasic
			// 
			this->txt_viewbasic->Location = System::Drawing::Point(526, 161);
			this->txt_viewbasic->Name = L"txt_viewbasic";
			this->txt_viewbasic->ReadOnly = true;
			this->txt_viewbasic->Size = System::Drawing::Size(104, 20);
			this->txt_viewbasic->TabIndex = 131;
			// 
			// txt_viewgross
			// 
			this->txt_viewgross->Location = System::Drawing::Point(560, 111);
			this->txt_viewgross->Name = L"txt_viewgross";
			this->txt_viewgross->ReadOnly = true;
			this->txt_viewgross->Size = System::Drawing::Size(100, 20);
			this->txt_viewgross->TabIndex = 130;
			// 
			// txt_viewannual
			// 
			this->txt_viewannual->Location = System::Drawing::Point(531, 85);
			this->txt_viewannual->Name = L"txt_viewannual";
			this->txt_viewannual->ReadOnly = true;
			this->txt_viewannual->Size = System::Drawing::Size(129, 20);
			this->txt_viewannual->TabIndex = 129;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(429, 273);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(80, 13);
			this->label26->TabIndex = 128;
			this->label26->Text = L"DEDUCTION";
			this->label26->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(455, 375);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(115, 13);
			this->label27->TabIndex = 127;
			this->label27->Text = L"PAG-IBIG Contribution:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(455, 349);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(117, 13);
			this->label28->TabIndex = 126;
			this->label28->Text = L"PhilHealth Contribution:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(455, 323);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(90, 13);
			this->label29->TabIndex = 125;
			this->label29->Text = L"SSS Contribution:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(455, 297);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(28, 13);
			this->label30->TabIndex = 124;
			this->label30->Text = L"Tax:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(429, 140);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(67, 13);
			this->label20->TabIndex = 123;
			this->label20->Text = L"ADDITION";
			this->label20->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(455, 242);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(70, 13);
			this->label22->TabIndex = 122;
			this->label22->Text = L"Conveyance:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(455, 216);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(67, 13);
			this->label23->TabIndex = 121;
			this->label23->Text = L"House Rent:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(455, 190);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(47, 13);
			this->label24->TabIndex = 120;
			this->label24->Text = L"Medical:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(455, 164);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(70, 13);
			this->label25->TabIndex = 119;
			this->label25->Text = L"Basic Needs:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(429, 64);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(77, 13);
			this->label19->TabIndex = 118;
			this->label19->Text = L"Basic Salary";
			this->label19->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(540, 410);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(56, 13);
			this->label21->TabIndex = 117;
			this->label21->Text = L"Net Pay:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(456, 114);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(102, 13);
			this->label18->TabIndex = 116;
			this->label18->Text = L"Gross Pay (Monthy):";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(455, 88);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(75, 13);
			this->label16->TabIndex = 115;
			this->label16->Text = L"Annual Salary:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(516, 34);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(109, 13);
			this->label15->TabIndex = 114;
			this->label15->Text = L"Salary Information";
			this->label15->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(417, 13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(298, 429);
			this->pictureBox2->TabIndex = 113;
			this->pictureBox2->TabStop = false;
			// 
			// EmployeeInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 457);
			this->Controls->Add(this->txt_viewnetpay);
			this->Controls->Add(this->txt_viewpagibig);
			this->Controls->Add(this->txt_viewphilhealth);
			this->Controls->Add(this->txt_viewsss);
			this->Controls->Add(this->txt_viewtax);
			this->Controls->Add(this->txt_viewconveyance);
			this->Controls->Add(this->txt_viewhouse);
			this->Controls->Add(this->txt_viewmedical);
			this->Controls->Add(this->txt_viewbasic);
			this->Controls->Add(this->txt_viewgross);
			this->Controls->Add(this->txt_viewannual);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->emp_txt_viewid);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->emp_txt_viewpassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->emp_txt_viewemail);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->emp_txt_viewage);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->emp_dt_doBirth);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->emp_dt_doHire);
			this->Controls->Add(this->emp_num_salary);
			this->Controls->Add(this->emp_txt_viewconnumber);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->emp_txt_viewaddress);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->emp_txt_viewdepartment);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->emp_txt_viewdesignation);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->emp_txt_viewlname);
			this->Controls->Add(this->emp_txt_viewfname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->emp_view_image);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"EmployeeInfo";
			this->Text = L"EmployeeInfo";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &EmployeeInfo::EmployeeInfo_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->emp_view_image))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->emp_num_salary))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	String^ conn_string = "Server=localhost;port=3306;database=db_employees;uid=root;password=";
	MySqlConnection^ conn = gcnew MySqlConnection(conn_string);

	public: void set_employee_details(String^ id, String^ email, String^ password, String^ fname, String^ lname, String^ doBirth, String^ sex, String^ status, String^ address, String^ conNumber,
		String^ designation, String^ department, String^ doHire, Decimal salary) {

		emp_txt_viewid->Text = id;
		emp_txt_viewemail->Text = email;
		emp_txt_viewpassword->Text = password;
		emp_txt_viewfname->Text = fname;
		emp_txt_viewlname->Text = lname;

		DateTime doBirth_;
		if (DateTime::TryParse(doBirth, doBirth_)) {
			emp_dt_doBirth->Value = doBirth_;
		}
		else {
			emp_dt_doBirth->Value = DateTime::Now;
		}

		if (sex->Equals("Male")) {
			emp_rb_viewmale->Checked = true;
		}
		else if (sex->Equals("Female")) {
			emp_rb_viewfemale->Checked = true;
		}

		if (status->Equals("Single")) {
			emp_rb_viewsingle->Checked = true;
		}
		else if (status->Equals("Married")) {
			emp_rb_viewmarried->Checked = true;
		}

		emp_txt_viewaddress->Text = address;
		emp_txt_viewconnumber->Text = conNumber;
		emp_txt_viewdesignation->Text = designation;
		emp_txt_viewdepartment->Text = department;

		DateTime doHire_;
		if (DateTime::TryParse(doHire, doHire_)) {
			emp_dt_doHire->Value = doHire_;
		}
		else {
			emp_dt_doHire->Value = DateTime::Now;
		}

		emp_num_salary->Value = salary;

		try {
			conn->Open();
			emp_view_image->Image = nullptr;

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT emp_image FROM tbl_employees WHERE emp_id = " + id, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			try {
				array<unsigned char>^ emp_image_ = (array<unsigned char>^) dt->Rows[0]->ItemArray[0];
				MemoryStream^ ms = gcnew MemoryStream(emp_image_);
				emp_view_image->Image = Image::FromStream(ms);
			}
			catch (Exception^ e) {

			}
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR: Failed to read data.");
		}

		if (salary > 0) {
			CalculatePayroll(salary);
		}
	}
	private: System::Void EmployeeInfo_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		if (emp_form != nullptr) {
			emp_form->Show();
		}
	}
	private: void CalculatePayroll(Decimal annualSalary) {
		// Rates
		double basicNeedsRate = 0.03;      // 3%
		double medicalRate = 0.02;         // 2%
		double houseRentRate = 0.04;       // 4%
		double conveyanceRate = 0.01;      // 1%
		double taxRate = 0.03;             // 3%
		double sssRate = 0.14;             // 14%
		double philhealthRate = 0.04;      // 4%
		double pagibigRate = 0.02;         // 2%

		// Calculate Gross Pay (Monthly)
		double annual = Convert::ToDouble(annualSalary);
		double grossPay = annual / 12.0;

		// Calculate Additions
		double basicNeeds = basicNeedsRate * grossPay;
		double medical = medicalRate * grossPay;
		double houseRent = houseRentRate * grossPay;
		double conveyance = conveyanceRate * grossPay;

		// Calculate Deductions
		double tax = taxRate * grossPay;
		double sss = sssRate * grossPay;
		double philhealth = philhealthRate * grossPay;
		double pagibig = pagibigRate * grossPay;

		// Calculate Totals
		double totalAddition = basicNeeds + medical + houseRent + conveyance;
		double totalDeduction = tax + sss + philhealth + pagibig;
		double netPay = (grossPay + totalAddition) - totalDeduction;

		// Display in TextBoxes (format to 2 decimal places)
		txt_viewannual->Text = String::Format("{0:N2}", annual);
		txt_viewgross->Text = String::Format("{0:N2}", grossPay);
		txt_viewbasic->Text = String::Format("{0:N2}", basicNeeds);
		txt_viewmedical->Text = String::Format("{0:N2}", medical);
		txt_viewhouse->Text = String::Format("{0:N2}", houseRent);
		txt_viewconveyance->Text = String::Format("{0:N2}", conveyance);
		txt_viewtax->Text = String::Format("{0:N2}", tax);
		txt_viewsss->Text = String::Format("{0:N2}", sss);
		txt_viewphilhealth->Text = String::Format("{0:N2}", philhealth);
		txt_viewpagibig->Text = String::Format("{0:N2}", pagibig);
		txt_viewnetpay->Text = String::Format("{0:N2}", netPay);
	}
};
}
