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
	/// Summary for AddForm
	/// </summary>
	public ref class AddForm : public System::Windows::Forms::Form
	{
	private:
		Form^ employee_table_record;

	public:
		AddForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AddForm(Form^ call_etr) {
			InitializeComponent();
			employee_table_record = call_etr;
			this->FormClosed += gcnew FormClosedEventHandler(this, &AddForm::AddForm_FormClosed);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ add_image;
	private: System::Windows::Forms::Button^ btn_addimage;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_addfname;
	private: System::Windows::Forms::TextBox^ txt_addlname;
	private: System::Windows::Forms::TextBox^ txt_adddesignation;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_adddepartment;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_addaddress;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txt_addconnumber;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::NumericUpDown^ num_addsalary;
	private: System::Windows::Forms::DateTimePicker^ dt_dob;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txt_addage;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rb_addfemale;
	private: System::Windows::Forms::RadioButton^ rb_addmale;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ rb_addmarriage;
	private: System::Windows::Forms::RadioButton^ rb_addsingle;
	private: System::Windows::Forms::Button^ btn_addemp;
	private: System::Windows::Forms::TextBox^ txt_addpassword;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_addemail;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DateTimePicker^ dt_adddoh;

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
			this->add_image = (gcnew System::Windows::Forms::PictureBox());
			this->btn_addimage = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_addfname = (gcnew System::Windows::Forms::TextBox());
			this->txt_addlname = (gcnew System::Windows::Forms::TextBox());
			this->txt_adddesignation = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_adddepartment = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_addaddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txt_addconnumber = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->num_addsalary = (gcnew System::Windows::Forms::NumericUpDown());
			this->dt_dob = (gcnew System::Windows::Forms::DateTimePicker());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txt_addage = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rb_addfemale = (gcnew System::Windows::Forms::RadioButton());
			this->rb_addmale = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rb_addmarriage = (gcnew System::Windows::Forms::RadioButton());
			this->rb_addsingle = (gcnew System::Windows::Forms::RadioButton());
			this->btn_addemp = (gcnew System::Windows::Forms::Button());
			this->txt_addpassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_addemail = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dt_adddoh = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_image))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_addsalary))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
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
			// add_image
			// 
			this->add_image->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->add_image->Location = System::Drawing::Point(26, 44);
			this->add_image->Name = L"add_image";
			this->add_image->Size = System::Drawing::Size(132, 123);
			this->add_image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->add_image->TabIndex = 2;
			this->add_image->TabStop = false;
			// 
			// btn_addimage
			// 
			this->btn_addimage->Location = System::Drawing::Point(26, 176);
			this->btn_addimage->Name = L"btn_addimage";
			this->btn_addimage->Size = System::Drawing::Size(132, 35);
			this->btn_addimage->TabIndex = 3;
			this->btn_addimage->Text = L"UPDATE IMAGE";
			this->btn_addimage->UseVisualStyleBackColor = true;
			this->btn_addimage->Click += gcnew System::EventHandler(this, &AddForm::btn_addimage_Click);
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
			// txt_addfname
			// 
			this->txt_addfname->Location = System::Drawing::Point(169, 61);
			this->txt_addfname->Name = L"txt_addfname";
			this->txt_addfname->Size = System::Drawing::Size(100, 20);
			this->txt_addfname->TabIndex = 6;
			// 
			// txt_addlname
			// 
			this->txt_addlname->Location = System::Drawing::Point(286, 61);
			this->txt_addlname->Name = L"txt_addlname";
			this->txt_addlname->Size = System::Drawing::Size(100, 20);
			this->txt_addlname->TabIndex = 7;
			// 
			// txt_adddesignation
			// 
			this->txt_adddesignation->Location = System::Drawing::Point(237, 87);
			this->txt_adddesignation->Name = L"txt_adddesignation";
			this->txt_adddesignation->Size = System::Drawing::Size(149, 20);
			this->txt_adddesignation->TabIndex = 9;
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
			// txt_adddepartment
			// 
			this->txt_adddepartment->Location = System::Drawing::Point(237, 113);
			this->txt_adddepartment->Name = L"txt_adddepartment";
			this->txt_adddepartment->Size = System::Drawing::Size(149, 20);
			this->txt_adddepartment->TabIndex = 11;
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
			// txt_addaddress
			// 
			this->txt_addaddress->Location = System::Drawing::Point(144, 407);
			this->txt_addaddress->Name = L"txt_addaddress";
			this->txt_addaddress->Size = System::Drawing::Size(242, 20);
			this->txt_addaddress->TabIndex = 21;
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
			// txt_addconnumber
			// 
			this->txt_addconnumber->Location = System::Drawing::Point(26, 407);
			this->txt_addconnumber->Name = L"txt_addconnumber";
			this->txt_addconnumber->Size = System::Drawing::Size(100, 20);
			this->txt_addconnumber->TabIndex = 25;
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
			// num_addsalary
			// 
			this->num_addsalary->DecimalPlaces = 2;
			this->num_addsalary->Location = System::Drawing::Point(214, 139);
			this->num_addsalary->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000000, 0, 0, 0 });
			this->num_addsalary->Name = L"num_addsalary";
			this->num_addsalary->Size = System::Drawing::Size(99, 20);
			this->num_addsalary->TabIndex = 26;
			// 
			// dt_dob
			// 
			this->dt_dob->Location = System::Drawing::Point(29, 287);
			this->dt_dob->Name = L"dt_dob";
			this->dt_dob->Size = System::Drawing::Size(215, 20);
			this->dt_dob->TabIndex = 29;
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
			// txt_addage
			// 
			this->txt_addage->Location = System::Drawing::Point(262, 286);
			this->txt_addage->Name = L"txt_addage";
			this->txt_addage->Size = System::Drawing::Size(124, 20);
			this->txt_addage->TabIndex = 31;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rb_addfemale);
			this->groupBox1->Controls->Add(this->rb_addmale);
			this->groupBox1->Location = System::Drawing::Point(26, 314);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(166, 71);
			this->groupBox1->TabIndex = 32;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gender:";
			// 
			// rb_addfemale
			// 
			this->rb_addfemale->AutoSize = true;
			this->rb_addfemale->Location = System::Drawing::Point(6, 47);
			this->rb_addfemale->Name = L"rb_addfemale";
			this->rb_addfemale->Size = System::Drawing::Size(59, 17);
			this->rb_addfemale->TabIndex = 1;
			this->rb_addfemale->Text = L"Female";
			this->rb_addfemale->UseVisualStyleBackColor = true;
			// 
			// rb_addmale
			// 
			this->rb_addmale->AutoSize = true;
			this->rb_addmale->Location = System::Drawing::Point(6, 23);
			this->rb_addmale->Name = L"rb_addmale";
			this->rb_addmale->Size = System::Drawing::Size(48, 17);
			this->rb_addmale->TabIndex = 0;
			this->rb_addmale->Text = L"Male";
			this->rb_addmale->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rb_addmarriage);
			this->groupBox2->Controls->Add(this->rb_addsingle);
			this->groupBox2->Location = System::Drawing::Point(220, 314);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(166, 71);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Marital Status:";
			// 
			// rb_addmarriage
			// 
			this->rb_addmarriage->AutoSize = true;
			this->rb_addmarriage->Location = System::Drawing::Point(8, 47);
			this->rb_addmarriage->Name = L"rb_addmarriage";
			this->rb_addmarriage->Size = System::Drawing::Size(60, 17);
			this->rb_addmarriage->TabIndex = 1;
			this->rb_addmarriage->Text = L"Married";
			this->rb_addmarriage->UseVisualStyleBackColor = true;
			// 
			// rb_addsingle
			// 
			this->rb_addsingle->AutoSize = true;
			this->rb_addsingle->Location = System::Drawing::Point(8, 23);
			this->rb_addsingle->Name = L"rb_addsingle";
			this->rb_addsingle->Size = System::Drawing::Size(54, 17);
			this->rb_addsingle->TabIndex = 0;
			this->rb_addsingle->Text = L"Single";
			this->rb_addsingle->UseVisualStyleBackColor = true;
			// 
			// btn_addemp
			// 
			this->btn_addemp->Location = System::Drawing::Point(12, 448);
			this->btn_addemp->Name = L"btn_addemp";
			this->btn_addemp->Size = System::Drawing::Size(388, 23);
			this->btn_addemp->TabIndex = 34;
			this->btn_addemp->Text = L"ADD PROFILE";
			this->btn_addemp->UseVisualStyleBackColor = true;
			this->btn_addemp->Click += gcnew System::EventHandler(this, &AddForm::btn_addemp_Click);
			// 
			// txt_addpassword
			// 
			this->txt_addpassword->Location = System::Drawing::Point(237, 191);
			this->txt_addpassword->Name = L"txt_addpassword";
			this->txt_addpassword->Size = System::Drawing::Size(149, 20);
			this->txt_addpassword->TabIndex = 41;
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
			// txt_addemail
			// 
			this->txt_addemail->Location = System::Drawing::Point(237, 165);
			this->txt_addemail->Name = L"txt_addemail";
			this->txt_addemail->Size = System::Drawing::Size(149, 20);
			this->txt_addemail->TabIndex = 39;
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
			// dt_adddoh
			// 
			this->dt_adddoh->Location = System::Drawing::Point(97, 219);
			this->dt_adddoh->Name = L"dt_adddoh";
			this->dt_adddoh->Size = System::Drawing::Size(215, 20);
			this->dt_adddoh->TabIndex = 42;
			// 
			// AddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(416, 484);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->dt_adddoh);
			this->Controls->Add(this->txt_addpassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_addemail);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btn_addemp);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->txt_addage);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->dt_dob);
			this->Controls->Add(this->num_addsalary);
			this->Controls->Add(this->txt_addconnumber);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txt_addaddress);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_adddepartment);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_adddesignation);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_addlname);
			this->Controls->Add(this->txt_addfname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_addimage);
			this->Controls->Add(this->add_image);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"AddForm";
			this->Text = L"AddForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AddForm::AddForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &AddForm::AddForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_image))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_addsalary))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	String^ conn_string = "Server=localhost;port=3306;database=db_employees;uid=root;password=";
	MySqlConnection^ conn = gcnew MySqlConnection(conn_string);

	public: void clear_data() {
		txt_addfname->Text = "";
		txt_addlname->Text = "";
		txt_adddesignation->Text = "";
		txt_adddepartment->Text = "";
		num_addsalary->Value = 0;
		txt_addemail->Text = "";
		txt_addpassword->Text = "";
		dt_adddoh->Value = DateTime::Now;
		dt_dob->Value = DateTime::Now;
		txt_addage->Text = "";
		txt_addconnumber->Text = "";
		txt_addaddress->Text = "";
		rb_addfemale->Checked = false;
		rb_addmale->Checked = false;
		rb_addsingle->Checked = false;
		rb_addmarriage->Checked = false;
		add_image->ImageLocation = "";
	}
	private: System::Void AddForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Add event handler for salary changes
		this->num_addsalary->ValueChanged += gcnew System::EventHandler(this, &AddForm::num_addsalary_ValueChanged);
	}

		   // Add this new event handler
	private: System::Void num_addsalary_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (num_addsalary->Value > 0) {
			CalculatePayroll(num_addsalary->Value);
		}
	}
	private: System::Void btn_addemp_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ add_fname = txt_addfname->Text;
		String^ add_lname = txt_addlname->Text;
		String^ add_designation = txt_adddesignation->Text;
		String^ add_department = txt_adddepartment->Text;
		double add_salary = Convert::ToDouble(num_addsalary->Value);
		String^ add_email = txt_addemail->Text;
		String^ add_password = txt_addpassword->Text;
		DateTime add_doHire = dt_adddoh->Value;
		DateTime add_doBirth = dt_dob->Value;
		String^ add_age = txt_addage->Text;

		String^ add_sex;
		if (rb_addmale->Checked) {
			add_sex = rb_addmale->Text;
		}
		else if (rb_addfemale->Checked) {
			add_sex = rb_addfemale->Text;
		}

		String^ add_status;
		if (rb_addsingle->Checked) {
			add_status = rb_addsingle->Text;
		}
		else if (rb_addmarriage->Checked) {
			add_status = rb_addmarriage->Text;
		}

		String^ add_conNumber = txt_addconnumber->Text;
		String^ add_address = txt_addaddress->Text;

		array<unsigned char>^ img_employee;
		String^ file_loc = add_image->ImageLocation;

		try {
			FileStream^ fs = gcnew FileStream(file_loc, FileMode::Open, FileAccess::Read);
			BinaryReader^ br = gcnew BinaryReader(fs);
			img_employee = br->ReadBytes(fs->Length);
		}
		catch (Exception^ e) {

		}

		bool is_valid{ true };

		if (is_valid) {
			conn->Open();
			String^ cmdString = "INSERT INTO tbl_employees (emp_email, emp_password, emp_fname, emp_lname, emp_doBirth, emp_sex, emp_status, emp_address, emp_conNumber, emp_designation, emp_department, emp_doHire, emp_salary, emp_image) VALUES (@add_email, @add_password, @add_fname, @add_lname, @add_doBirth, @add_sex, @add_status, @add_address, @add_conNumber, @add_designation, @add_department, @add_doHire, @add_salary, @img_employee)";
			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);
			cmd->Parameters->AddWithValue("@add_email", add_email);
			cmd->Parameters->AddWithValue("@add_password", add_password);
			cmd->Parameters->AddWithValue("@add_fname", add_fname);
			cmd->Parameters->AddWithValue("@add_lname", add_lname);
			cmd->Parameters->AddWithValue("@add_doBirth", add_doBirth);
			cmd->Parameters->AddWithValue("@add_sex", add_sex);
			cmd->Parameters->AddWithValue("@add_status", add_status);
			cmd->Parameters->AddWithValue("@add_address", add_address);
			cmd->Parameters->AddWithValue("@add_conNumber", add_conNumber);
			cmd->Parameters->AddWithValue("@add_designation", add_designation);
			cmd->Parameters->AddWithValue("@add_department", add_department);
			cmd->Parameters->AddWithValue("@add_doHire", add_doHire);
			cmd->Parameters->AddWithValue("@add_salary", add_salary);
			cmd->Parameters->AddWithValue("@img_employee", img_employee);

			try {
				cmd->ExecuteNonQuery();
				MessageBox::Show("FILE: Employee added successfully");
				conn->Close();
				clear_data();
			}
			catch (Exception^ e) {
				MessageBox::Show("ERROR: Insertion employee failed");
			}
			conn->Close();
		}
	}
	private: System::Void btn_addimage_Click(System::Object^ sender, System::EventArgs^ e) {
		// pictureBox1 = 'add_image'
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "PNG Files *.png|*.png|JPG Files *.jpg|*.jpg|All Files *.*|*.*";

		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) {
			add_image->ImageLocation = ofd->FileName;
		}
	}
	private: System::Void AddForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
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
	}
};
}
