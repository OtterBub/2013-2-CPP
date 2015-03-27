#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#include <iostream>
using namespace std;

class Employee{
protected:
	char name[20];
	int salary;
public:
	Employee();
	Employee(char* name, int salary);
	virtual ~Employee();

	void SetName(char* name);
	void SetSalary(int salary);

	char* GetName();
	int GetSalary();

	virtual void Pay();
};
#endif // __EMPLOYEE_H__