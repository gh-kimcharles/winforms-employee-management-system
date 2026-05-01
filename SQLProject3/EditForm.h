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
	/// Summary for EditForm
	/// </summary>
	public ref class EditForm : public System::Windows::Forms::Form
	{
	private:
		Form^ employee_table_record;

	public:
		EditForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		EditForm(Form^ call_etr) {
			InitializeComponent();
			employee_table_record = call_etr;
			this->FormClosed += gcnew FormClosedEventHandler(this, &EditForm::EditForm_FormClosed);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ update_image;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_updatefname;
	private: System::Windows::Forms::TextBox^ txt_updatelname;
	private: System::Windows::Forms::TextBox^ txt_updatedesignation;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_updatedepartment;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_updateaddress;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txt_updateconNumber;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::NumericUpDown^ num_updatesalary;
	private: System::Windows::Forms::DateTimePicker^ dt_updatedobirth;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txt_updateage;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rb_updatefemale;
	private: System::Windows::Forms::RadioButton^ rb_updatemale;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ rb_updatemarried;
	private: System::Windows::Forms::RadioButton^ rb_updatesingle;
	private: System::Windows::Forms::Button^ btn_updateemp;
	private: System::Windows::Forms::TextBox^ txt_updatepassword;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_updateemail;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DateTimePicker^ dt_updatedohire;
	private: System::Windows::Forms::TextBox^ txt_updateid;
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
	private: System::Windows::Forms::TextBox^ txt_viewannual;

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->update_image = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_updatefname = (gcnew System::Windows::Forms::TextBox());
			this->txt_updatelname = (gcnew System::Windows::Forms::TextBox());
			this->txt_updatedesignation = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_updatedepartment = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_updateaddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txt_updateconNumber = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->num_updatesalary = (gcnew System::Windows::Forms::NumericUpDown());
			this->dt_updatedobirth = (gcnew System::Windows::Forms::DateTimePicker());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txt_updateage = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rb_updatefemale = (gcnew System::Windows::Forms::RadioButton());
			this->rb_updatemale = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rb_updatemarried = (gcnew System::Windows::Forms::RadioButton());
			this->rb_updatesingle = (gcnew System::Windows::Forms::RadioButton());
			this->btn_updateemp = (gcnew System::Windows::Forms::Button());
			this->txt_updatepassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_updateemail = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dt_updatedohire = (gcnew System::Windows::Forms::DateTimePicker());
			this->txt_updateid = (gcnew System::Windows::Forms::TextBox());
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
			this->txt_viewannual = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->update_image))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_updatesalary))->BeginInit();
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
			this->pictureBox1->Size = System::Drawing::Size(387, 424);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// update_image
			// 
			this->update_image->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->update_image->Location = System::Drawing::Point(26, 44);
			this->update_image->Name = L"update_image";
			this->update_image->Size = System::Drawing::Size(132, 123);
			this->update_image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->update_image->TabIndex = 2;
			this->update_image->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"UPDATE IMAGE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditForm::button1_Click);
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
			// txt_updatefname
			// 
			this->txt_updatefname->Location = System::Drawing::Point(169, 61);
			this->txt_updatefname->Name = L"txt_updatefname";
			this->txt_updatefname->Size = System::Drawing::Size(100, 20);
			this->txt_updatefname->TabIndex = 6;
			// 
			// txt_updatelname
			// 
			this->txt_updatelname->Location = System::Drawing::Point(286, 61);
			this->txt_updatelname->Name = L"txt_updatelname";
			this->txt_updatelname->Size = System::Drawing::Size(100, 20);
			this->txt_updatelname->TabIndex = 7;
			// 
			// txt_updatedesignation
			// 
			this->txt_updatedesignation->Location = System::Drawing::Point(237, 87);
			this->txt_updatedesignation->Name = L"txt_updatedesignation";
			this->txt_updatedesignation->Size = System::Drawing::Size(149, 20);
			this->txt_updatedesignation->TabIndex = 9;
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
			// txt_updatedepartment
			// 
			this->txt_updatedepartment->Location = System::Drawing::Point(237, 113);
			this->txt_updatedepartment->Name = L"txt_updatedepartment";
			this->txt_updatedepartment->Size = System::Drawing::Size(149, 20);
			this->txt_updatedepartment->TabIndex = 11;
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
			// txt_updateaddress
			// 
			this->txt_updateaddress->Location = System::Drawing::Point(144, 407);
			this->txt_updateaddress->Name = L"txt_updateaddress";
			this->txt_updateaddress->Size = System::Drawing::Size(242, 20);
			this->txt_updateaddress->TabIndex = 21;
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
			// txt_updateconNumber
			// 
			this->txt_updateconNumber->Location = System::Drawing::Point(26, 407);
			this->txt_updateconNumber->Name = L"txt_updateconNumber";
			this->txt_updateconNumber->Size = System::Drawing::Size(100, 20);
			this->txt_updateconNumber->TabIndex = 25;
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
			// num_updatesalary
			// 
			this->num_updatesalary->DecimalPlaces = 2;
			this->num_updatesalary->Location = System::Drawing::Point(214, 139);
			this->num_updatesalary->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->num_updatesalary->Name = L"num_updatesalary";
			this->num_updatesalary->Size = System::Drawing::Size(99, 20);
			this->num_updatesalary->TabIndex = 26;
			// 
			// dt_updatedobirth
			// 
			this->dt_updatedobirth->Location = System::Drawing::Point(29, 287);
			this->dt_updatedobirth->Name = L"dt_updatedobirth";
			this->dt_updatedobirth->Size = System::Drawing::Size(215, 20);
			this->dt_updatedobirth->TabIndex = 29;
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
			// txt_updateage
			// 
			this->txt_updateage->Location = System::Drawing::Point(262, 286);
			this->txt_updateage->Name = L"txt_updateage";
			this->txt_updateage->Size = System::Drawing::Size(124, 20);
			this->txt_updateage->TabIndex = 31;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rb_updatefemale);
			this->groupBox1->Controls->Add(this->rb_updatemale);
			this->groupBox1->Location = System::Drawing::Point(26, 314);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(166, 71);
			this->groupBox1->TabIndex = 32;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gender:";
			// 
			// rb_updatefemale
			// 
			this->rb_updatefemale->AutoSize = true;
			this->rb_updatefemale->Location = System::Drawing::Point(6, 47);
			this->rb_updatefemale->Name = L"rb_updatefemale";
			this->rb_updatefemale->Size = System::Drawing::Size(59, 17);
			this->rb_updatefemale->TabIndex = 1;
			this->rb_updatefemale->TabStop = true;
			this->rb_updatefemale->Text = L"Female";
			this->rb_updatefemale->UseVisualStyleBackColor = true;
			// 
			// rb_updatemale
			// 
			this->rb_updatemale->AutoSize = true;
			this->rb_updatemale->Location = System::Drawing::Point(6, 23);
			this->rb_updatemale->Name = L"rb_updatemale";
			this->rb_updatemale->Size = System::Drawing::Size(48, 17);
			this->rb_updatemale->TabIndex = 0;
			this->rb_updatemale->TabStop = true;
			this->rb_updatemale->Text = L"Male";
			this->rb_updatemale->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rb_updatemarried);
			this->groupBox2->Controls->Add(this->rb_updatesingle);
			this->groupBox2->Location = System::Drawing::Point(220, 314);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(166, 71);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Marital Status:";
			// 
			// rb_updatemarried
			// 
			this->rb_updatemarried->AutoSize = true;
			this->rb_updatemarried->Location = System::Drawing::Point(8, 47);
			this->rb_updatemarried->Name = L"rb_updatemarried";
			this->rb_updatemarried->Size = System::Drawing::Size(60, 17);
			this->rb_updatemarried->TabIndex = 1;
			this->rb_updatemarried->TabStop = true;
			this->rb_updatemarried->Text = L"Married";
			this->rb_updatemarried->UseVisualStyleBackColor = true;
			// 
			// rb_updatesingle
			// 
			this->rb_updatesingle->AutoSize = true;
			this->rb_updatesingle->Location = System::Drawing::Point(8, 23);
			this->rb_updatesingle->Name = L"rb_updatesingle";
			this->rb_updatesingle->Size = System::Drawing::Size(54, 17);
			this->rb_updatesingle->TabIndex = 0;
			this->rb_updatesingle->TabStop = true;
			this->rb_updatesingle->Text = L"Single";
			this->rb_updatesingle->UseVisualStyleBackColor = true;
			// 
			// btn_updateemp
			// 
			this->btn_updateemp->Location = System::Drawing::Point(10, 448);
			this->btn_updateemp->Name = L"btn_updateemp";
			this->btn_updateemp->Size = System::Drawing::Size(702, 23);
			this->btn_updateemp->TabIndex = 34;
			this->btn_updateemp->Text = L"EDIT PROFILE";
			this->btn_updateemp->UseVisualStyleBackColor = true;
			this->btn_updateemp->Click += gcnew System::EventHandler(this, &EditForm::btn_updateemp_Click);
			// 
			// txt_updatepassword
			// 
			this->txt_updatepassword->Location = System::Drawing::Point(237, 191);
			this->txt_updatepassword->Name = L"txt_updatepassword";
			this->txt_updatepassword->Size = System::Drawing::Size(149, 20);
			this->txt_updatepassword->TabIndex = 41;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(169, 196);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Password:";
			// 
			// txt_updateemail
			// 
			this->txt_updateemail->Location = System::Drawing::Point(237, 165);
			this->txt_updateemail->Name = L"txt_updateemail";
			this->txt_updateemail->Size = System::Drawing::Size(149, 20);
			this->txt_updateemail->TabIndex = 39;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(169, 169);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Email:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(24, 225);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 13);
			this->label13->TabIndex = 43;
			this->label13->Text = L"Date of Hire:";
			// 
			// dt_updatedohire
			// 
			this->dt_updatedohire->Location = System::Drawing::Point(97, 219);
			this->dt_updatedohire->Name = L"dt_updatedohire";
			this->dt_updatedohire->Size = System::Drawing::Size(215, 20);
			this->dt_updatedohire->TabIndex = 42;
			// 
			// txt_updateid
			// 
			this->txt_updateid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_updateid->Location = System::Drawing::Point(104, 24);
			this->txt_updateid->Name = L"txt_updateid";
			this->txt_updateid->ReadOnly = true;
			this->txt_updateid->Size = System::Drawing::Size(100, 13);
			this->txt_updateid->TabIndex = 44;
			// 
			// txt_viewnetpay
			// 
			this->txt_viewnetpay->Location = System::Drawing::Point(593, 407);
			this->txt_viewnetpay->Name = L"txt_viewnetpay";
			this->txt_viewnetpay->ReadOnly = true;
			this->txt_viewnetpay->Size = System::Drawing::Size(100, 20);
			this->txt_viewnetpay->TabIndex = 166;
			// 
			// txt_viewpagibig
			// 
			this->txt_viewpagibig->Location = System::Drawing::Point(568, 372);
			this->txt_viewpagibig->Name = L"txt_viewpagibig";
			this->txt_viewpagibig->ReadOnly = true;
			this->txt_viewpagibig->Size = System::Drawing::Size(109, 20);
			this->txt_viewpagibig->TabIndex = 165;
			// 
			// txt_viewphilhealth
			// 
			this->txt_viewphilhealth->Location = System::Drawing::Point(570, 346);
			this->txt_viewphilhealth->Name = L"txt_viewphilhealth";
			this->txt_viewphilhealth->ReadOnly = true;
			this->txt_viewphilhealth->Size = System::Drawing::Size(107, 20);
			this->txt_viewphilhealth->TabIndex = 164;
			// 
			// txt_viewsss
			// 
			this->txt_viewsss->Location = System::Drawing::Point(543, 320);
			this->txt_viewsss->Name = L"txt_viewsss";
			this->txt_viewsss->ReadOnly = true;
			this->txt_viewsss->Size = System::Drawing::Size(134, 20);
			this->txt_viewsss->TabIndex = 163;
			// 
			// txt_viewtax
			// 
			this->txt_viewtax->Location = System::Drawing::Point(480, 294);
			this->txt_viewtax->Name = L"txt_viewtax";
			this->txt_viewtax->ReadOnly = true;
			this->txt_viewtax->Size = System::Drawing::Size(100, 20);
			this->txt_viewtax->TabIndex = 162;
			// 
			// txt_viewconveyance
			// 
			this->txt_viewconveyance->Location = System::Drawing::Point(521, 239);
			this->txt_viewconveyance->Name = L"txt_viewconveyance";
			this->txt_viewconveyance->ReadOnly = true;
			this->txt_viewconveyance->Size = System::Drawing::Size(106, 20);
			this->txt_viewconveyance->TabIndex = 161;
			// 
			// txt_viewhouse
			// 
			this->txt_viewhouse->Location = System::Drawing::Point(519, 213);
			this->txt_viewhouse->Name = L"txt_viewhouse";
			this->txt_viewhouse->ReadOnly = true;
			this->txt_viewhouse->Size = System::Drawing::Size(108, 20);
			this->txt_viewhouse->TabIndex = 160;
			// 
			// txt_viewmedical
			// 
			this->txt_viewmedical->Location = System::Drawing::Point(500, 187);
			this->txt_viewmedical->Name = L"txt_viewmedical";
			this->txt_viewmedical->ReadOnly = true;
			this->txt_viewmedical->Size = System::Drawing::Size(127, 20);
			this->txt_viewmedical->TabIndex = 159;
			// 
			// txt_viewbasic
			// 
			this->txt_viewbasic->Location = System::Drawing::Point(523, 161);
			this->txt_viewbasic->Name = L"txt_viewbasic";
			this->txt_viewbasic->ReadOnly = true;
			this->txt_viewbasic->Size = System::Drawing::Size(104, 20);
			this->txt_viewbasic->TabIndex = 158;
			// 
			// txt_viewgross
			// 
			this->txt_viewgross->Location = System::Drawing::Point(557, 111);
			this->txt_viewgross->Name = L"txt_viewgross";
			this->txt_viewgross->ReadOnly = true;
			this->txt_viewgross->Size = System::Drawing::Size(100, 20);
			this->txt_viewgross->TabIndex = 157;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(426, 273);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(80, 13);
			this->label26->TabIndex = 156;
			this->label26->Text = L"DEDUCTION";
			this->label26->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(452, 375);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(115, 13);
			this->label27->TabIndex = 155;
			this->label27->Text = L"PAG-IBIG Contribution:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(452, 349);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(117, 13);
			this->label28->TabIndex = 154;
			this->label28->Text = L"PhilHealth Contribution:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(452, 323);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(90, 13);
			this->label29->TabIndex = 153;
			this->label29->Text = L"SSS Contribution:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(452, 297);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(28, 13);
			this->label30->TabIndex = 152;
			this->label30->Text = L"Tax:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(426, 140);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(67, 13);
			this->label20->TabIndex = 151;
			this->label20->Text = L"ADDITION";
			this->label20->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(452, 242);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(70, 13);
			this->label22->TabIndex = 150;
			this->label22->Text = L"Conveyance:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(452, 216);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(67, 13);
			this->label23->TabIndex = 149;
			this->label23->Text = L"House Rent:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(452, 190);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(47, 13);
			this->label24->TabIndex = 148;
			this->label24->Text = L"Medical:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(452, 164);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(70, 13);
			this->label25->TabIndex = 147;
			this->label25->Text = L"Basic Needs:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(426, 64);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(77, 13);
			this->label19->TabIndex = 146;
			this->label19->Text = L"Basic Salary";
			this->label19->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(537, 410);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(56, 13);
			this->label21->TabIndex = 145;
			this->label21->Text = L"Net Pay:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(453, 114);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(102, 13);
			this->label18->TabIndex = 144;
			this->label18->Text = L"Gross Pay (Monthy):";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(452, 88);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(75, 13);
			this->label16->TabIndex = 143;
			this->label16->Text = L"Annual Salary:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(513, 34);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(109, 13);
			this->label15->TabIndex = 142;
			this->label15->Text = L"Salary Information";
			this->label15->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(414, 13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(298, 424);
			this->pictureBox2->TabIndex = 141;
			this->pictureBox2->TabStop = false;
			// 
			// txt_viewannual
			// 
			this->txt_viewannual->Location = System::Drawing::Point(528, 84);
			this->txt_viewannual->Name = L"txt_viewannual";
			this->txt_viewannual->ReadOnly = true;
			this->txt_viewannual->Size = System::Drawing::Size(129, 20);
			this->txt_viewannual->TabIndex = 167;
			// 
			// EditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 483);
			this->Controls->Add(this->txt_viewannual);
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
			this->Controls->Add(this->txt_updateid);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->dt_updatedohire);
			this->Controls->Add(this->txt_updatepassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_updateemail);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btn_updateemp);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->txt_updateage);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->dt_updatedobirth);
			this->Controls->Add(this->num_updatesalary);
			this->Controls->Add(this->txt_updateconNumber);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txt_updateaddress);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_updatedepartment);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_updatedesignation);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_updatelname);
			this->Controls->Add(this->txt_updatefname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->update_image);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"EditForm";
			this->Text = L"EditForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &EditForm::EditForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &EditForm::EditForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->update_image))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_updatesalary))->EndInit();
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
		txt_updateid->Text = id;
		txt_updateemail->Text = email;
		txt_updatepassword->Text = password;
		txt_updatefname->Text = fname;
		txt_updatelname->Text = lname;

		DateTime doBirth_;
		if (DateTime::TryParse(doBirth, doBirth_)) {
			dt_updatedobirth->Value = doBirth_;
		}
		else {
			dt_updatedobirth->Value = DateTime::Now;
		}

		if (sex->Equals("Male")) {
			rb_updatemale->Checked = true;
		}
		else if (sex->Equals("Female")) {
			rb_updatefemale->Checked = true;
		}

		if (status->Equals("Single")) {
			rb_updatesingle->Checked = true;
		}
		else if (status->Equals("Married")) {
			rb_updatemarried->Checked = true;
		}

		txt_updateaddress->Text = address;
		txt_updateconNumber->Text = conNumber;
		txt_updatedesignation->Text = designation;
		txt_updatedepartment->Text = department;

		DateTime doHire_;
		if (DateTime::TryParse(doHire, doHire_)) {
			dt_updatedohire->Value = doHire_;
		}
		else {
			dt_updatedohire->Value = DateTime::Now;
		}

		num_updatesalary->Value = salary;
	}
	private: System::Void EditForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Calculate payroll when form loads
		if (num_updatesalary->Value > 0) {
			CalculatePayroll(num_updatesalary->Value);
		}
	}
	private: System::Void btn_updateemp_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ curr_id = txt_updateid->Text;
		String^ updated_email = txt_updateemail->Text;
		String^ updated_password = txt_updatepassword->Text;
		String^ updated_fname = txt_updatefname->Text;
		String^ updated_lname = txt_updatelname->Text;

		String^ doBirth = dt_updatedobirth->Value.ToString("yyyy-MM-dd HH:mm:ss");
		String^ updated_sex;
		if (rb_updatemale->Checked) {
			updated_sex = "Male";
		}
		else if (rb_updatefemale->Checked) {
			updated_sex = "Female";
		}

		String^ updated_status;
		if (rb_updatesingle->Checked) {
			updated_status = "Single";
		}
		else if (rb_updatemarried->Checked) {
			updated_status = "Married";
		}

		String^ updated_address = txt_updateaddress->Text;
		String^ updated_conNumber = txt_updateconNumber->Text;
		String^ updated_designation = txt_updatedesignation->Text;
		String^ updated_department = txt_updatedepartment->Text;

		String^ doHire = dt_updatedohire->Value.ToString("yyyy-MM-dd HH:mm:ss");

		Decimal updated_salary = Convert::ToDecimal(num_updatesalary->Value);

		array<unsigned char>^ updated_image;

		try {
			MemoryStream^ ms = gcnew MemoryStream();
			if (update_image->Image != nullptr) {
				update_image->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				updated_image = ms->ToArray();
			}
		} catch(Exception^ e) {

		}

		try {
			conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE tbl_employees SET emp_email=@updated_email, emp_password=@updated_password, emp_fname=@updated_fname, emp_lname=@updated_lname, emp_doBirth=@doBirth, emp_sex=@updated_sex, emp_status=@updated_status, emp_address=@updated_address, emp_conNumber=@updated_conNumber, emp_designation=@updated_designation, emp_department=@updated_department, emp_doHire=@doHire, emp_salary=@updated_salary, emp_image=@updated_image WHERE emp_id = "
				+ curr_id, conn);

			cmd->Parameters->AddWithValue("@updated_email", updated_email);
			cmd->Parameters->AddWithValue("@updated_password", updated_password);
			cmd->Parameters->AddWithValue("@updated_fname", updated_fname);
			cmd->Parameters->AddWithValue("@updated_lname", updated_lname);
			cmd->Parameters->AddWithValue("@doBirth", doBirth);
			cmd->Parameters->AddWithValue("@updated_sex", updated_sex);
			cmd->Parameters->AddWithValue("@updated_status", updated_status);
			cmd->Parameters->AddWithValue("@updated_address", updated_address);
			cmd->Parameters->AddWithValue("@updated_conNumber", updated_conNumber);
			cmd->Parameters->AddWithValue("@updated_designation", updated_designation);
			cmd->Parameters->AddWithValue("@updated_department", updated_department);
			cmd->Parameters->AddWithValue("@doHire", doHire);
			cmd->Parameters->AddWithValue("@updated_salary", updated_salary);
			cmd->Parameters->AddWithValue("@updated_image", updated_image);

			cmd->ExecuteNonQuery();
			MessageBox::Show("FILE: Employee edited successfully.");
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR:");
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "PNG Files *.png|*.png|JPG Files *.jpg|*.jpg|All Files *.*|*.*";

		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
			update_image->ImageLocation = ofd->FileName;
		}
	}
	private: System::Void EditForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		if (employee_table_record != nullptr) {
			employee_table_record->Show();
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
