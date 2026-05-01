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
	/// Summary for EmployeeTableRecord
	/// </summary>
	public ref class EmployeeTableRecord : public System::Windows::Forms::Form
	{
	public:
		EmployeeTableRecord(void)
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
		~EmployeeTableRecord()
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
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btn_view;
	private: System::Windows::Forms::Label^ txt_department;
	private: System::Windows::Forms::Label^ txt_designation;
	private: System::Windows::Forms::Label^ txt_fullname;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txt_empsalary;
	private: System::Windows::Forms::TextBox^ tb_searchemp;
	private: System::Windows::Forms::Label^ label2;
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn_view = (gcnew System::Windows::Forms::Button());
			this->txt_department = (gcnew System::Windows::Forms::Label());
			this->txt_designation = (gcnew System::Windows::Forms::Label());
			this->txt_fullname = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txt_empsalary = (gcnew System::Windows::Forms::TextBox());
			this->tb_searchemp = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->data_employees->Location = System::Drawing::Point(23, 197);
			this->data_employees->MultiSelect = false;
			this->data_employees->Name = L"data_employees";
			this->data_employees->ReadOnly = true;
			this->data_employees->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_employees->Size = System::Drawing::Size(374, 206);
			this->data_employees->TabIndex = 0;
			this->data_employees->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EmployeeTableRecord::data_employees_CellClick);
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
			this->label5->Location = System::Drawing::Point(161, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Designation:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(161, 74);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Department:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(161, 91);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Salary:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(288, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"EDIT PROFILE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EmployeeTableRecord::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(398, 406);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 424);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(398, 52);
			this->button2->TabIndex = 11;
			this->button2->Text = L"ADD EMPLOYEE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EmployeeTableRecord::button2_Click);
			// 
			// btn_view
			// 
			this->btn_view->Location = System::Drawing::Point(165, 109);
			this->btn_view->Name = L"btn_view";
			this->btn_view->Size = System::Drawing::Size(117, 23);
			this->btn_view->TabIndex = 13;
			this->btn_view->Text = L"VIEW PROFILE";
			this->btn_view->UseVisualStyleBackColor = true;
			this->btn_view->Click += gcnew System::EventHandler(this, &EmployeeTableRecord::button4_Click);
			// 
			// txt_department
			// 
			this->txt_department->AutoSize = true;
			this->txt_department->Location = System::Drawing::Point(232, 72);
			this->txt_department->Name = L"txt_department";
			this->txt_department->Size = System::Drawing::Size(0, 13);
			this->txt_department->TabIndex = 16;
			// 
			// txt_designation
			// 
			this->txt_designation->AutoSize = true;
			this->txt_designation->Location = System::Drawing::Point(232, 54);
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
			// button3
			// 
			this->button3->Location = System::Drawing::Point(164, 138);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(232, 23);
			this->button3->TabIndex = 18;
			this->button3->Text = L"DELETE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &EmployeeTableRecord::button3_Click);
			// 
			// txt_empsalary
			// 
			this->txt_empsalary->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_empsalary->Location = System::Drawing::Point(233, 89);
			this->txt_empsalary->Name = L"txt_empsalary";
			this->txt_empsalary->ReadOnly = true;
			this->txt_empsalary->Size = System::Drawing::Size(100, 13);
			this->txt_empsalary->TabIndex = 19;
			// 
			// tb_searchemp
			// 
			this->tb_searchemp->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->tb_searchemp->Location = System::Drawing::Point(124, 169);
			this->tb_searchemp->Name = L"tb_searchemp";
			this->tb_searchemp->Size = System::Drawing::Size(273, 20);
			this->tb_searchemp->TabIndex = 28;
			this->tb_searchemp->Text = L"Search...";
			this->tb_searchemp->Click += gcnew System::EventHandler(this, &EmployeeTableRecord::tb_searchemp_Click);
			this->tb_searchemp->TextChanged += gcnew System::EventHandler(this, &EmployeeTableRecord::tb_searchemp_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 172);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Employee Name:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(23, 169);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(374, 20);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 29;
			this->pictureBox1->TabStop = false;
			// 
			// EmployeeTableRecord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(423, 488);
			this->Controls->Add(this->tb_searchemp);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txt_empsalary);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->txt_department);
			this->Controls->Add(this->txt_designation);
			this->Controls->Add(this->txt_fullname);
			this->Controls->Add(this->btn_view);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_fullname1);
			this->Controls->Add(this->txt_num);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->emp_imagetable);
			this->Controls->Add(this->data_employees);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"EmployeeTableRecord";
			this->Text = L"EmployeeTableRecord";
			this->Load += gcnew System::EventHandler(this, &EmployeeTableRecord::EmployeeTableRecord_Load);
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
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT emp_id, emp_email, emp_password, emp_conNumber, emp_doHire FROM tbl_employees", conn);
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

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT emp_fname, emp_lname, emp_designation, emp_department, emp_salary, emp_image FROM tbl_employees WHERE emp_id = " + curr_id, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			// displays in the employee table form
			txt_num->Text = curr_id;
			txt_fullname->Text = (dt->Rows[0]->ItemArray[0]->ToString()) + " " + (dt->Rows[0]->ItemArray[1]->ToString());
			txt_designation->Text = dt->Rows[0]->ItemArray[2]->ToString();
			txt_department->Text = dt->Rows[0]->ItemArray[3]->ToString();
			txt_empsalary->Text = dt->Rows[0]->ItemArray[4]->ToString();

			try {
				array<unsigned char>^ emp_image_ = (array<unsigned char>^) dt->Rows[0]->ItemArray[5];
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

	//'AddForm.h'
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			AddForm^ af = gcnew AddForm(this);
			af->Show();
			this->Hide();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR: Add form window error.");
		}

		load_table();
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

	// 'EditForm.h'
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ curr_id = data_employees->Rows[data_employees->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
		try {
			conn->Open();

			this->Hide();

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT * FROM tbl_employees WHERE emp_id = " + curr_id, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			if (dt->Rows->Count > 0) {
				DataRow^ row = dt->Rows[0];
				EditForm^ ef = gcnew EditForm(this); // 'Constructor employee_table_record'
				ef->set_employee_details(
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
				ef->ShowDialog();
			}
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR: Failed to read data.");
		}

		load_table();
	}
	//'Remove Employee'
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ curr_id = data_employees->Rows[data_employees->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

		try {
			conn->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand("DELETE FROM tbl_employees WHERE emp_id = " + curr_id, conn);
			cmd->ExecuteNonQuery();
			MessageBox::Show("FILE: Employee removed.");
			conn->Close();
			load_table();
		}
		catch (Exception^ e) {
			MessageBox::Show("ERROR: Employee not found.");
		}

		load_table();
	}
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
};
}
