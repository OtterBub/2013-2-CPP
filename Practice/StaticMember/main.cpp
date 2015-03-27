#include <iostream>
#include "student.h"

int main()
{
	Student student("Hong", "English", 80);
	Student student2 = student;

	cout << "student" << endl;
	student.print();
	cout << endl;

	cout << "student2" << endl;
	student2.print();
	cout << endl;

	cout << "student2 SetScore(100)" << endl;
	student2.SetScore(100);
	student2.print();
	cout << endl;

	cout << "total::" << Student::total << endl;

	return 0;
}