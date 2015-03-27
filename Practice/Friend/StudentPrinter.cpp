#include "StudentPrinter.h"

StudentPrinter::StudentPrinter(void) {
}

StudentPrinter::~StudentPrinter(void) {
}

void StudentPrinter::Print(Student& student) {
	cout << "name::" << student.name << endl;
	cout << "subject::" << student.subject << endl;
	cout << "score::" << student.score << endl;
}