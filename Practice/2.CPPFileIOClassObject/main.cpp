#include <iostream>
#include <fstream>
#include "Student.h"

void displayStudent(Student &student);

int main()
{
	std::fstream bio;
	bio.open("student.kpu", std::ios::out | std::ios::binary);
	Student std1("Jonh", "Stuart", "2012183012", 95);
	Student std2("Allen", "Kim", "2013184033", 98);

	bio.write(reinterpret_cast<char*>(&std1), sizeof(Student));
	bio.write(reinterpret_cast<char*>(&std2), sizeof(Student));
	bio.close();

	bio.open("student.kpu", std::ios::in | std::ios::binary);
	Student student;
	bio.read(reinterpret_cast<char*>(&student), sizeof(Student));
	displayStudent(student);

	Student student2;
	bio.read(reinterpret_cast<char*>(&student2), sizeof(Student));
	displayStudent(student2);
	bio.close();

	return 0;
}

void displayStudent(Student &student) {
	std::cout << student.getFirstname() << " ";
	std::cout << student.getLastname() << " ";
	std::cout << student.getId() << " ";
	std::cout << student.getScore() << std::endl;
}