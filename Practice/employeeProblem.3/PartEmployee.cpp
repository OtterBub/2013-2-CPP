#include "PartEmployee.h"

PartEmployee::PartEmployee(){ time = 0; }

PartEmployee::PartEmployee(char* _name, int _salary, int _time) 
	: Employee(_name, _salary){
	time = _time;
}

PartEmployee::~PartEmployee() {
	cout << "~PartEmployee()" << endl;
}

void PartEmployee::SetTime(int time){
	this->time = time;
}
int PartEmployee::GetTime(){
	return time;
}

void PartEmployee::Pay(){
	cout << "PartEmployee::" << name << "::Salary:" << salary * time << endl;
}