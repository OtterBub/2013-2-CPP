#pragma once
#include "student.h";

class StudentPrinter{
public:
	StudentPrinter(void);
	~StudentPrinter(void);
	void Print(Student & student);
};