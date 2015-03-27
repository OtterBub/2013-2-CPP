#include <iostream>
#include <sstream>
#include <fstream>
#include "Student.h"

void displayStudent(Student &student);

int main()
{
	std::fstream bio;
	bio.open("student.kpu", std::ios::in | std::ios::out | std::ios::binary);

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

	Student student1;
	bio.seekg(2 * sizeof(Student));
	bio.read( reinterpret_cast<char*>(&student1), sizeof(Student) );
	
	displayStudent( student1 );
	student1.setFirstname("Peterson");
	student1.setScore(76);

	bio.seekg( 2 * sizeof(Student) );
	bio.write( reinterpret_cast<char*>(&student1), sizeof(Student) );

	Student student2;
	bio.seekg(2 * sizeof(Student));
	bio.read( reinterpret_cast<char*>(&student2), sizeof(Student) );
	displayStudent( student2 );
	bio.close();

	std::cout << typeid( student2 ).name() << std::endl;

	return 0;
}

void displayStudent(Student &student) {
	std::cout << student.getFirstname() << " ";
	std::cout << student.getLastname() << " ";
	std::cout << student.getId() << " ";
	std::cout << student.getScore() << std::endl;
}
