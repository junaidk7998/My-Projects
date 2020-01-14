#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee
{
private:
	string name;
	int idNumber;
	string department;
	string position;
public:
	Employee(string newNameOfEmployee, int newIdNumberOfEmployee,
		string newDepartmentOfEmployee, string newPositionOfEmployee);
	Employee(string newNameOfEmployee, int newIdNumberOfEmployee);
	Employee();

	void setNameOfEmployee(string);
	void setIdNumberOfEmployee(int);
	void setDepartmentOfEmployee(string);
	void setPositionOfEmployee(string);
	string getNameOfEmployee() const;
	int getIdNumberOfEmployee() const;
	string getDepartmentOfEmployee() const;
	string getPositionOfEmployee() const;
};

#endif