#include <iostream>
#include "EmployeeManager.h"
using namespace std;

class AnotherEmp : public PartEmployee {
public:
	AnotherEmp() : PartEmployee("AA", 10, 10) {}
	void printName() {
		cout << "Name::" << name << endl;
	}
};

int main() {	
	EmployeeManager manager;
	manager.addEmployee(new Employee("Lee", 5000));
	manager.addEmployee(new PartEmployee("Kim", 25, 100));
	manager.Pay();

	AnotherEmp emp;
	emp.printName();

	return 0;
}