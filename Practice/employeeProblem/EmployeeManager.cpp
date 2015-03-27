#include "EmployeeManager.h"

EmployeeManager::EmployeeManager() :
	index(0) {}
EmployeeManager::~EmployeeManager() {
	for(int i = 0; i < index; i++)
		delete emps[i];
}

void EmployeeManager::addEmployee(Employee* emp) {
	if( index < MAX ) {
		emps[index++] = emp;
	}
}
void EmployeeManager::Pay() {
	for( int i = 0; i < index; i++)
		emps[i]->Pay();
}