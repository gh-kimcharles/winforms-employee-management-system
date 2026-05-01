#include "LoginForm.h"
#include "EmployeeTableRecord.h"
#include "EditForm.h"
#include "ViewForm.h"

#include "GuestForm.h"
#include "StartUp.h"

using namespace SQLProject3;

[STAThreadAttribute]
int main() {
	// 'StartUp.h Window'
	// 'GUEST, EMPLOYEE, ADMIN'
	Application::Run(gcnew StartUp());
	return 0;
}