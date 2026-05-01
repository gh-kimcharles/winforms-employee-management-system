# Employee Management Record System

A desktop-based Employee Management Record (EMR) system built with **C++/CLI (Windows Forms)** and **MySQL**, developed as a 2nd year personal project using **Microsoft Visual Studio**.

---

## Overview

This system allows an organization to manage employee records with full **CRUD** (Create, Read, Update, Delete) functionality. It features role-based access for three types of users - Admin, Employee, and Guest - each with different levels of access.

---

## Features

- **Role-based login system** (Admin, Employee, Guest)
- **Admin Panel** - Full CRUD access to all employee records
- **Employee Portal** - Employees can log in and view their own profile and payroll breakdown
- **Guest View** - Read-only access to basic employee directory
- **Payroll Calculator** - Automatically computes monthly gross pay, deductions (SSS, PhilHealth, Pag-IBIG, Tax), allowances, and net pay from an annual salary
- **Browsing** - Browse all employees in a sortable table

---

## Tech Stack

| Technology   | Details                                |
| ------------ | -------------------------------------- |
| Language     | C++/CLI                                |
| UI Framework | Windows Forms (.NET)                   |
| Database     | MySQL                                  |
| DB Tool      | XAMPP (MySQL server) + MySQL Workbench |
| Connector    | MySql.Data (MySqlClient)               |

---

## Database Setup

1. Start **XAMPP** and make sure the **MySQL** service is running.
2. Open **MySQL Workbench** and connect to `localhost:3306`.
3. Create the database:
   ```sql
   CREATE DATABASE db_employees;
   ```
4. Create the required tables:

   ```sql
   -- Admins table
   CREATE TABLE tbl_admins (
       adm_id INT AUTO_INCREMENT PRIMARY KEY,
       adm_email VARCHAR(100) NOT NULL,
       adm_password VARCHAR(100) NOT NULL
   );

   -- Employees table
   CREATE TABLE tbl_employees (
       emp_id INT AUTO_INCREMENT PRIMARY KEY,
       emp_email VARCHAR(100),
       emp_password VARCHAR(100),
       emp_fname VARCHAR(50),
       emp_lname VARCHAR(50),
       emp_doBirth DATETIME,
       emp_sex VARCHAR(10),
       emp_status VARCHAR(10),
       emp_address VARCHAR(255),
       emp_conNumber VARCHAR(20),
       emp_designation VARCHAR(100),
       emp_department VARCHAR(100),
       emp_doHire DATETIME,
       emp_salary DECIMAL(15,2),
       emp_image LONGBLOB
   );
   ```

5. Insert at least one admin account:
   ```sql
   INSERT INTO tbl_admins (adm_email, adm_password) VALUES ('admin@email.com', 'yourpassword');
   ```

---

## Configuration

The connection string is defined in each form file. By default it connects to:

```
Server=localhost; Port=3306; Database=db_employees; UID=root; Password=
```

If your MySQL root account has a password, update the `conn_string` in all `.h` files:

```cpp
String^ conn_string = "Server=localhost;port=3306;database=db_employees;uid=root;password=YOUR_PASSWORD";
```

---

## 🚀 How to Run

1. Clone or download this repository.
2. Open `SQLProject3.sln` in **Microsoft Visual Studio**.
3. Make sure the **MySQL Connector/NET** (`MySql.Data`) library is referenced in the project.
4. Set up the database as described above.
5. Build and run the solution (`Ctrl + F5`).

---

## Payroll Calculation

The system automatically calculates payroll breakdown from the entered **annual salary**:

| Component               | Rate                           |
| ----------------------- | ------------------------------ |
| Gross Pay               | Annual ÷ 12                    |
| Basic Needs             | 3% of Gross                    |
| Medical                 | 2% of Gross                    |
| House Rent              | 4% of Gross                    |
| Conveyance              | 1% of Gross                    |
| Tax                     | 3% of Gross                    |
| SSS Contribution        | 14% of Gross                   |
| PhilHealth Contribution | 4% of Gross                    |
| Pag-IBIG Contribution   | 2% of Gross                    |
| **Net Pay**             | Gross + Additions − Deductions |

---

## Author

Developed by Kim Charles De Guzman.
Built using C++/CLI, Windows Forms, and MySQL.
