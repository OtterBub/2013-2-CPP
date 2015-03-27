#include "Student.h"

Student::Student(void) {}

Student::Student(std::string firstname, std::string lastname, std::string id, int score) {
	setFirstname(firstname), setLastname(lastname), setId(id), setScore(score);
}

Student::~Student(void) {}

void Student::setFirstname(std::string value) {
	this->firstname = value;
}
void Student::setLastname(std::string value) {
	this->lastname = value;
}
void Student::setId(std::string value) {
	this->id = value;
}
void Student::setScore(int value) {
	this->score = value;
}

std::string Student::getFirstname() {
	return firstname;
}
std::string Student::getLastname() {
	return lastname;
}
std::string Student::getId() {
	return id;
}
int Student::getScore() {
	return score;
}