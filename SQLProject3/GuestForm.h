#pragma once

#include "EditForm.h"
#include "ViewForm.h"
#include "AddForm.h"

ref class Addform;

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
	/// Summary for GuestForm
	/// </summary>
	public ref class GuestForm : public System::Windows::Forms::Form
	{
	private:
		Form^ start_up;

	public:
		GuestForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		GuestForm(Form^ call_etr) {
			InitializeComponent();
			start_up = call_etr;
			this->FormClosed += gcnew FormClosedEventHandler(this, &GuestForm::GuestForm_FormClosed);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GuestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ data_employees;
	private: System::Windows::Forms::PictureBox^ emp_imagetable;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ txt_num;
	private: System::Windows::Forms::Label^ txt_fullname1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ txt_department;
	private: System::Windows::Forms::Label^ txt_designation;
	private: System::Windows::Forms::Label^ txt_fullname;
	private: System::Windows::Forms::Label^ txt_conNumber;
	private: System::Windows::Forms::Label^ txt_email;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tb_searchemp;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

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
			this->data_employees = (gcnew System::Windows::Forms::DataGridView());
			this->emp_imagetable = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_num = (gcnew System::Windows::Forms::Label());
			this->txt_fullname1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txt_department = (gcnew System::Windows::Forms::Label());
			this->txt_designation = (gcnew System::Windows::Forms::Label());
			this->txt_fullname = (gcnew System::Windows::Forms::Label());
			this->txt_conNumber = (gcnew System::Windows::Forms::Label());
			this->txt_email = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_searchemp = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_employees))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->emp_imagetable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// data_employees
			// 
			this->data_employees->AllowUserToAddRows = false;
			this->data_employees->AllowUserToDeleteRows = false;
			this->data_employees->AllowUserToResizeColumns = false;
			this->data_employees->AllowUserToResizeRows = false;
			this->data_employees->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->data_employees->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->data_employees->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_employees->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->data_employees->Location = System::Drawing::Point(23, 196);
			this->data_employees->MultiSelect = false;
			this->data_employees->Name = L"data_employees";
			this->data_employees->ReadOnly = true;
			this->data_employees->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_employees->Size = System::Drawing::Size(374, 269);
			this->data_employees->TabIndex = 0;
			this->data_employees->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GuestForm::data_employees_CellClick);
			// 
			// emp_imagetable
			// 
			this->emp_imagetable->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->emp_imagetable->Location = System::Drawing::Point(23, 38);
			this->emp_imagetable->Name = L"emp_imagetable";
			this->emp_imagetable->Size = System::Drawing::Size(132, 123);
			this->emp_imagetable->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->emp_imagetable->TabIndex = 1;
			this->emp_imagetable->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Employee No.:";
			// 
			// txt_num
			// 
			this->txt_num->AutoSize = true;
			this->txt_num->Location = System::Drawing::Point(102, 20);
			this->txt_num->Name = L"txt_num";
			this->txt_num->Size = System::Drawing::Size(0, 13);
			this->txt_num->TabIndex = 3;
			// 
			// txt_fullname1
			// 
			this->txt_fullname1->AutoSize = true;
			this->txt_fullname1->Location = System::Drawing::Point(162, 39);
			this->txt_fullname1->Name = L"txt_fullname1";
			this->txt_fullname1->Size = System::Drawing::Size(57, 13);
			this->txt_fullname1->TabIndex = 4;
			this->txt_fullname1->Text = L"Full Name:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(151, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(161, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Designation:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(161, 127);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Department:";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(398, 464);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// txt_department
			// 
			this->txt_department->AutoSize = true;
			this->txt_department->Location = System::Drawing::Point(232, 126);
			this->txt_department->Name = L"txt_department";
			this->txt_department->Size = System::Drawing::Size(0, 13);
			this->txt_department->TabIndex = 16;
			// 
			// txt_designation
			// 
			this->txt_designation->AutoSize = true;
			this->txt_designation->Location = System::Drawing::Point(232, 108);
			this->txt_designation->Name = L"txt_designation";
			this->txt_designation->Size = System::Drawing::Size(0, 13);
			this->txt_designation->TabIndex = 15;
			// 
			// txt_fullname
			// 
			this->txt_fullname->AutoSize = true;
			this->txt_fullname->Location = System::Drawing::Point(233, 37);
			this->txt_fullname->Name = L"txt_fullname";
			this->txt_fullname->Size = System::Drawing::Size(0, 13);
			this->txt_fullname->TabIndex = 14;
			// 
			// txt_conNumber
			// 
			this->txt_conNumber->AutoSize = true;
			this->txt_conNumber->Location = System::Drawing::Point(232, 73);
			this->txt_conNumber->Name = L"txt_conNumber";
			this->txt_conNumber->Size = System::Drawing::Size(0, 13);
			this->txt_conNumber->TabIndex = 23;
			// 
			// txt_email
			// 
			this->txt_email->AutoSize = true;
			this->txt_email->Location = System::Drawing::Point(232, 55);
			this->txt_email->Name = L"txt_email";
			this->txt_email->Size = System::Drawing::Size(0, 13);
			this->txt_email->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(161, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Contact No.:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(161, 55);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Email:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Employee Name:";
			// 
			// tb_searchemp
			// 
			this->tb_searchemp->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->tb_searchemp->Location = System::Drawing::Point(124, 167);
			this->tb_searchemp->Name = L"tb_searchemp";
			this->tb_searchemp->Size = System::Drawing::Size(273, 20);
			this->tb_searchemp->TabIndex = 25;
			this->tb_searchemp->Text = L"Search...";
			this->tb_searchemp->Click += gcnew System::EventHandler(this, &GuestForm::tb_searchemp_Click);
			this->tb_searchemp->TextChanged += gcnew System::EventHandler(this, &GuestForm::tb_searchemp_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(23, 167);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(374, 20);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// GuestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(423, 488);
			this->Controls->Add(this->tb_searchemp);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txt_conNumber);
			this->Controls->Add(this->txt_email);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_department);
			this->Controls->Add(this->txt_designation);
			this->Controls->Add(this->txt_fullname);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_fullname1);
			this->Controls->Add(this->txt_num);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->emp_imagetable);
			this->Controls->Add(this->data_employees);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"GuestForm";
			this->Text = L"GuestForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &GuestForm::GuestForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &GuestForm::EmployeeTableRecord_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_employees))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->emp_imagetable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	String^ conn_string = "Server=localhost;port=3306;database=db_employees;uid=root;password=";
	MySqlConnection^ conn = gcnew MySqlConnection(conn_string);

	public: void load_table() {
		try {
			conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT emp_id, emp_email, emp_address, emp_conNumber, emp_doHire FROM tbl_employees", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			data_employees->DataSource = dt;
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR: Failed to read data");
		}
	}

	// LoadTable of DataTable
	private: System::Void EmployeeTableRecord_Load(System::Object^ sender, System::EventArgs^ e) {
		load_table();
	}

	//'CellClick'
	private: System::Void data_employees_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ curr_id = data_employees->Rows[data_employees->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

		try {
			conn->Open();
			emp_imagetable->Image = nullptr;

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT emp_fname, emp_lname, emp_email, emp_conNumber, emp_designation, emp_department, emp_salary, emp_image FROM tbl_employees WHERE emp_id = " + curr_id, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			// displays in the employee table form
			txt_num->Text = curr_id;
			txt_fullname->Text = (dt->Rows[0]->ItemArray[0]->ToString()) + " " + (dt->Rows[0]->ItemArray[1]->ToString());
			txt_email->Text = dt->Rows[0]->ItemArray[2]->ToString();
			txt_conNumber->Text = dt->Rows[0]->ItemArray[3]->ToString();
			txt_designation->Text = dt->Rows[0]->ItemArray[4]->ToString();
			txt_department->Text = dt->Rows[0]->ItemArray[5]->ToString();

			try {
				array<unsigned char>^ emp_image_ = (array<unsigned char>^) dt->Rows[0]->ItemArray[7];
				MemoryStream^ ms = gcnew MemoryStream(emp_image_);
				emp_imagetable->Image = Image::FromStream(ms);
			}
			catch (Exception^ e) {

			}

			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR: Failed to read data.");
		}
	}

	//'ViewForm.h'
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ curr_id = data_employees->Rows[data_employees->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
		try {
			conn->Open();

			this->Hide();

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM tbl_employees WHERE emp_id = " + curr_id, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			if (dt->Rows->Count > 0) {
				DataRow^ row = dt->Rows[0];
				ViewForm^ vf = gcnew ViewForm(this); // 'Constructor employee_table_record'
				vf->set_employee_details(
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
				vf->ShowDialog();

			}
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR: Failed to read data.");
		}

		load_table();
	}
	//'Search bar'
	private: System::Void tb_searchemp_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->tb_searchemp->ForeColor = System::Drawing::SystemColors::ControlText;
		
		try {
			conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT emp_id, emp_email, emp_address, emp_conNumber, emp_doHire FROM tbl_employees WHERE emp_fname LIKE '%" + tb_searchemp->Text + "%' OR emp_lname LIKE '%" + tb_searchemp->Text + "%'", conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			data_employees->DataSource = dt;
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR: Failed to read data");
		}
		
	}
	private: System::Void tb_searchemp_Click(System::Object^ sender, System::EventArgs^ e) {
		tb_searchemp->Text = "";
	}
	private: System::Void GuestForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		if (start_up != nullptr) {
			start_up->Show();
		}
	}
};
}
