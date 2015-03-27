#include <iostream>
#include "student.h"
#include "StudentPrinter.h"

using namespace std;

/* 
friend ??
A class -> B class

don't have secret member about A class


1. global function

2. class
- private is enable
- but one way

but best way is don't use friend class (or funtion)

*/

void Print(Student & student) {
	cout << "name::" << student.name << endl;
	cout << "subject::" << student.subject << endl;
	cout << "score::" << student.score << endl;
}

int main()
{
	Student student("Hong", "English", 80);
	Student student2 = student;
	student2.SetScore(90);

	StudentPrinter printer;
	printer.Print( student );
	printer.Print( student2 );

	Print(student);

	return 0;
}