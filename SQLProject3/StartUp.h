#pragma once

#include "GuestForm.h"
#include "EmployeeForm.h"
#include "LoginForm.h"

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
	/// Summary for StartUp
	/// </summary>
	public ref class StartUp : public System::Windows::Forms::Form
	{
	public:
		StartUp(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StartUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ img_login;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ btn_guest;
	private: System::Windows::Forms::Button^ btn_emp;
	private: System::Windows::Forms::Button^ btn_adm;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->img_login = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_guest = (gcnew System::Windows::Forms::Button());
			this->btn_emp = (gcnew System::Windows::Forms::Button());
			this->btn_adm = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox1->Location = System::Drawing::Point(154, 319);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(119, 136);
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
			// btn_guest
			// 
			this->btn_guest->Location = System::Drawing::Point(169, 334);
			this->btn_guest->Name = L"btn_guest";
			this->btn_guest->Size = System::Drawing::Size(91, 32);
			this->btn_guest->TabIndex = 11;
			this->btn_guest->Text = L"GUEST";
			this->btn_guest->UseVisualStyleBackColor = true;
			this->btn_guest->Click += gcnew System::EventHandler(this, &StartUp::btn_guest_Click);
			// 
			// btn_emp
			// 
			this->btn_emp->Location = System::Drawing::Point(169, 372);
			this->btn_emp->Name = L"btn_emp";
			this->btn_emp->Size = System::Drawing::Size(91, 32);
			this->btn_emp->TabIndex = 12;
			this->btn_emp->Text = L"EMPLOYEE";
			this->btn_emp->UseVisualStyleBackColor = true;
			this->btn_emp->Click += gcnew System::EventHandler(this, &StartUp::btn_emp_Click);
			// 
			// btn_adm
			// 
			this->btn_adm->Location = System::Drawing::Point(169, 410);
			this->btn_adm->Name = L"btn_adm";
			this->btn_adm->Size = System::Drawing::Size(91, 32);
			this->btn_adm->TabIndex = 13;
			this->btn_adm->Text = L"ADMIN";
			this->btn_adm->UseVisualStyleBackColor = true;
			this->btn_adm->Click += gcnew System::EventHandler(this, &StartUp::btn_adm_Click);
			// 
			// StartUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(415, 489);
			this->Controls->Add(this->btn_adm);
			this->Controls->Add(this->btn_emp);
			this->Controls->Add(this->btn_guest);
			this->Controls->Add(this->img_login);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Name = L"StartUp";
			this->Text = L"StartUp";
			this->Load += gcnew System::EventHandler(this, &StartUp::LoginForm_Load);
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
			MessageBox::Show("FILE: Connection Success");
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR: Connection Error");
		}
	}
	// 'GuestForm.h'
	private: System::Void btn_guest_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			GuestForm^ gf = gcnew GuestForm(this); // Contructor 'GuestForm(Form^ call_etr)'
			gf->Visible = true;
			this->Hide();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR: GuestForm window error.");
		}
	}
	// 'EmployeeForm.h'
	private: System::Void btn_emp_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			EmployeeForm^ ef = gcnew EmployeeForm(this); // Contructor 'EmployeeForm(Form^ call_etr)'
			ef->Visible = true;
			this->Hide();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR: EmployeeForm window error.");
		}
	}
	// 'AdminForm.h' / 'Login.h'
	private: System::Void btn_adm_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			LoginForm^ lf = gcnew LoginForm(this); // Contructor 'LoginForm(Form^ call_etr)'
			lf->Visible = true;
			this->Hide();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR: AdminForm window error.");
		}
	}
};
}
