#include "PartEmployee.h"

PartEmployee::PartEmployee(){ time = 0; }
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