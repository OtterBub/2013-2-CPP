#include "Employee.h"


Employee::Employee() {}

Employee::Employee(char* name, int salary) {
	strcpy(this->name, name);
	this->salary = salary;
}

Employee::~Employee() {
	cout << "~Employee()" << endl;
}

void Employee::SetName(char* name) {
	strcpy(this->name, name);
}
void Employee::SetSalary(int salary) {
	this->salary = salary;
}

char* Employee::GetName() {
	return name;

}
int Employee::GetSalary() {
	return salary;
}

void Employee::Pay() {
	cout << name << "::Salary:" << salary << endl;
}