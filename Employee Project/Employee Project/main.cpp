#include "Employee.h"
#include <string>
#include <iomanip>

int main()
{
	Employee worker1("John Doe", 62948, "Accounting", "Vice President");

	Employee worker2("Joe Jones", 25935);
	worker2.setDepartmentOfEmployee("IT");
	worker2.setPositionOfEmployee("Programmer");

	Employee worker3;
	worker3.setNameOfEmployee("Jeff Garcia");
	worker3.setIdNumberOfEmployee(91482);
	worker3.setDepartmentOfEmployee("Manufacturing");
	worker3.setPositionOfEmployee("Engineer");

	cout << "----------------------------------------------------------" << endl;
	cout << left << setw(15) << "Name" << setw(12) << "ID Number"
		<< setw(15) << "Department" << setw(15) << "Position" << endl;
	cout << "----------------------------------------------------------" << endl;

	cout << setw(15) << worker1.getNameOfEmployee()
		<< setw(12) << worker1.getIdNumberOfEmployee()
		<< setw(15) << worker1.getDepartmentOfEmployee()
		<< setw(15) << worker1.getPositionOfEmployee() << endl;

	cout << setw(15) << worker2.getNameOfEmployee()
		<< setw(12) << worker2.getIdNumberOfEmployee()
		<< setw(15) << worker2.getDepartmentOfEmployee()
		<< setw(15) << worker2.getPositionOfEmployee() << endl;

	cout << setw(15) << worker3.getNameOfEmployee()
		<< setw(12) << worker3.getIdNumberOfEmployee()
		<< setw(15) << worker3.getDepartmentOfEmployee()
		<< setw(15) << worker3.getPositionOfEmployee() << endl;

	cout << "----------------------------------------------------------" << endl;

	return 0;
}