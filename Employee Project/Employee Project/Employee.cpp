#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string newNameOfEmployee, int newIdNumberOfEmployee,
	string newDepartmentOfEmployee, string newPositionOfEmployee)
{
	name = newNameOfEmployee;
	idNumber = newIdNumberOfEmployee;
	department = newDepartmentOfEmployee;
	position = newPositionOfEmployee;
}

Employee::Employee(string newNameOfEmployee, int newIdNumberOfEmployee)
{
	name = newNameOfEmployee;
	idNumber = newIdNumberOfEmployee;
	department = "";
	position = "";
}

Employee::Employee()
{
	name = "";
	idNumber = 0;
	department = "";
	position = "";
}

void Employee::setNameOfEmployee(string newNameOfEmployee)
{
	name = newNameOfEmployee;
}

void Employee::setIdNumberOfEmployee(int newIdNumberOfEmployee)
{
	idNumber = newIdNumberOfEmployee;
}

void Employee::setDepartmentOfEmployee(string newDepartmentOfEmployee)
{
	department = newDepartmentOfEmployee;
}

void Employee::setPositionOfEmployee(string newPositionOfEmployee)
{
	position = newPositionOfEmployee;
}

string Employee::getNameOfEmployee() const
{
	return name;
}

int Employee::getIdNumberOfEmployee() const
{
	return idNumber;
}

string Employee::getDepartmentOfEmployee() const
{
	return department;
}

string Employee::getPositionOfEmployee() const
{
	return position;
}