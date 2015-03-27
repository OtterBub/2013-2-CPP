#include <iostream>
#include "EmployeeManager.h"
using namespace std;

int main() {

	Employee* emp = new Employee();
	emp->SetName("Park");
	emp->SetSalary(5000);
	//emp->Pay();

	PartEmployee* emp2 = new PartEmployee();
	emp2->SetName("KIM");
	emp2->SetSalary(25);
	emp2->SetTime(100);
	//emp2->Pay();
	
	EmployeeManager manager;
	manager.addEmployee(emp);
	manager.addEmployee(emp2);
	manager.Pay();
	
	

	return 0;
}