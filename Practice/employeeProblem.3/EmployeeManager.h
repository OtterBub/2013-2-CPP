#ifndef __EMPLOYEEMANAGER_H__
#define __EMPLOYEEMANAGER_H__

#include <iostream>
#include "PartEmployee.h"
#define MAX 10

class EmployeeManager {
	//const int MAX;
	Employee* emps[MAX];
	int index;
public:
	EmployeeManager();
	~EmployeeManager();
	void addEmployee(Employee* emp);
	void Pay();
};
#endif //__EMPLOYEEMANAGER_H__