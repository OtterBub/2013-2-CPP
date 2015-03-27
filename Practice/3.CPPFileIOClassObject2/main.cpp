#include <iostream>
#include <sstream>
#include <fstream>
#include "Student.h"

void displayStudent(Student &student);

int main()
{
	std::fstream bio;
	bio.open("student.kpu", std::ios::out | std::ios::binary );

	Student student;
	for(int i = 0; i < 10; i++) {
		std::stringstream s;
		s << i;
		student.setFirstname("student_" + s.str());
		student.setLastname("Smith");
		student.setId("2013123123" + s.str());
		student.setScore(i*10);
		bio.write(reinterpret_cast<char*>(&student), sizeof(Student));
	}

	bio.close();

	
	bio.open("student.kpu", std::ios::in | std::ios::binary);

	Student studentNew;
	bio.seekg(2 * sizeof(Student));
	std::cout << "Current Position is : " << bio.tellg() << std::endl;
	bio.read(reinterpret_cast<char*>(&studentNew), sizeof(Student));
	displayStudent( studentNew );
	std::cout << "Current Position is : " << bio.tellg() << std::endl;

	bio.close();

	return 0;
}

void displayStudent(Student &student) {
	std::cout << student.getFirstname() << " ";
	std::cout << student.getLastname() << " ";
	std::cout << student.getId() << " ";
	std::cout << student.getScore() << std::endl;
}
