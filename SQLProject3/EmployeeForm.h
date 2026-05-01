#pragma once

#include "EmployeeInfo.h"

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
	/// Summary for EmployeeForm
	/// </summary>
	public ref class EmployeeForm : public System::Windows::Forms::Form
	{
	private:
		Form^ start_up;

	public:
		EmployeeForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		EmployeeForm(Form^ call_etr) {
			InitializeComponent();
			start_up = call_etr;
			this->FormClosed += gcnew FormClosedEventHandler(this, &EmployeeForm::EmployeeForm_FormClosed);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_email;
	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::Button^ btn_login;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ img_login;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_email = (gcnew System::Windows::Forms::TextBox());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->img_login = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_login))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(136, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WELCOME TO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 336);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username [EMPLOYEE]:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 380);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password:";
			// 
			// txt_email
			// 
			this->txt_email->Location = System::Drawing::Point(43, 352);
			this->txt_email->Name = L"txt_email";
			this->txt_email->Size = System::Drawing::Size(323, 20);
			this->txt_email->TabIndex = 3;
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(43, 396);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(323, 20);
			this->txt_password->TabIndex = 4;
			this->txt_password->UseSystemPasswordChar = true;
			// 
			// btn_login
			// 
			this->btn_login->Location = System::Drawing::Point(170, 422);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(75, 23);
			this->btn_login->TabIndex = 5;
			this->btn_login->Text = L"LOG IN";
			this->btn_login->UseVisualStyleBackColor = true;
			this->btn_login->Click += gcnew System::EventHandler(this, &EmployeeForm::btn_login_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(69, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(288, 55);
			this->label4->TabIndex = 6;
			this->label4->Text = L"EMPLOYEE";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(80, 246);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(265, 55);
			this->label5->TabIndex = 7;
			this->label5->Text = L"RECORDS";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(27, 320);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(354, 136);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// img_login
			// 
			this->img_login->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->img_login->ErrorImage = nullptr;
			this->img_login->ImageLocation = L"C:\\Users\\pc\\Pictures\\emp_records\\login\\icon.jpg";
			this->img_login->Location = System::Drawing::Point(154, 45);
			this->img_login->Name = L"img_login";
			this->img_login->Size = System::Drawing::Size(119, 115);
			this->img_login->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->img_login->TabIndex = 9;
			this->img_login->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Location = System::Drawing::Point(12, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(391, 465);
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// EmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(415, 489);
			this->Controls->Add(this->img_login);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_login);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->txt_email);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Name = L"EmployeeForm";
			this->Text = L"EmployeeForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &EmployeeForm::EmployeeForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &EmployeeForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img_login))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	String^ conn_string = "Server=localhost;port=3306;database=db_employees;uid=root;password=";
	MySqlConnection^ conn = gcnew MySqlConnection(conn_string);

	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//Server = 127.0.0.1
		//Port = 3306
		//Database = 'db_employees'
		//UID = root
		//Password = password

		try {
			conn->Open();
			//MessageBox::Show("FILE: Connection Succeeded");
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR: Connection Error");
		}
	}
	private: System::Void btn_login_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ id_;
		String^ email = txt_email->Text;
		String^ password = txt_password->Text;
		bool is_login{ false };

		// 'Clear password for invalid input'.
		txt_password->Text = "";

		try {
			conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT emp_email, emp_password, emp_id FROM tbl_employees", conn);
			DataSet^ ds = gcnew DataSet();
			adapter->Fill(ds, "tbl_employees");

			if (ds->Tables["tbl_employees"]->Rows->Count > 0) {
				for (int i{ 0 }; i < ds->Tables["tbl_employees"]->Rows->Count; i++) {
					DataRow^ row = ds->Tables["tbl_employees"]->Rows[i];
					String^ email_ = row["emp_email"]->ToString();
					String^ password_ = row["emp_password"]->ToString();

					id_ = row["emp_id"]->ToString();

					if (email_->Equals(email, StringComparison::InvariantCultureIgnoreCase) && password_->Equals(password)) {
						is_login = true;
						MessageBox::Show("FILE: Employee login success.");
						break;
					}
				}
			}
			conn->Close();

			if (is_login) {
				this->Hide();
				
				// 'id_' = Employee ID
				try {

					conn->Open();
					
					MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM tbl_employees WHERE emp_id = " + id_, conn);
					DataTable^ dt = gcnew DataTable();
					adapter->Fill(dt);
					
					if (dt->Rows->Count > 0) {
						DataRow^ row = dt->Rows[0];
						EmployeeInfo^ ei = gcnew EmployeeInfo(this); // Constructor 'EmployeeInfo(Form^ call_etr)'
						ei->set_employee_details(
							row["emp_id"]->ToString(),
							row["emp_email"]->ToString(),
							row["emp_password"]->ToString(),
							row["emp_fname"]->ToString(),
							row["emp_lname"]->ToString(),
							row["emp_doBirth"]->ToString(),
							row["emp_sex"]->ToString(),
							row["emp_status"]->ToString(),
							row["emp_address"]->ToString(),
							row["emp_conNumber"]->ToString(),
							row["emp_designation"]->ToString(),
							row["emp_department"]->ToString(),
							row["emp_doHire"]->ToString(),
							Convert::ToDecimal(row["emp_salary"])
						);
						ei->ShowDialog();
					}
					conn->Close();
				}
				catch (Exception^ e) {
					MessageBox::Show("ERROR: Failed to read data.");
				}
			}
			else {
				MessageBox::Show("ERROR: Invalid email and password.");
			}
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR: Failed to read data.");
		}
	}
	private: System::Void EmployeeForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		if (start_up != nullptr) {
			start_up->Show();
		}
	}
};
}
