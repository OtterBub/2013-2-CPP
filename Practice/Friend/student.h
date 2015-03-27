#pragma once
#include <iostream>

using namespace std;

class Student{
	char* name;
	char* subject;
	int score;
	const int MAX;

public:
	static int total;

	Student();
	Student(char* name, char* subject, int score);
	
	~Student(void);

	Student(const Student & rhs);

	void SetName(char* name);
	void SetSubject(char* subject);
	void SetScore(int score);

	char* GetName();
	char* GetSubject();
	int GetScore();

	void print2();

	friend void Print(Student & std);

	friend class StudentPrinter;

};