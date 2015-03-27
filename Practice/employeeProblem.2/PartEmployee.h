#ifndef __PARTEMPLOYEE_H__
#define __PARTEMPLOYEE_H__
#include "Employee.h"

class PartEmployee : public Employee {
	int time;

public:
	
	PartEmployee();
	PartEmployee(char* name, int salary, int time);
	~PartEmployee();

	void SetTime(int time);
	int GetTime();

	void Pay();
};

#endif //__PARTEMPLOYEE_H__