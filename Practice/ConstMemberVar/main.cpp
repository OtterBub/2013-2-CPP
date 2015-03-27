#include <iostream>
#include "student.h"

int main()
{
	Student student("Hong", "English", 80);
	Student student2 = student;

	student.print();
	cout << endl;
	student2.print();

	return 0;
}