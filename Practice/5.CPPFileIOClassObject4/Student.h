#pragma once
#include <string>


class Student
{
	std::string firstname;
	std::string lastname;
	std::string id;

	int score;

public:
	Student(void);
	Student(std::string firstname, std::string lastname, std::string id, int score);

	void setFirstname(std::string value);
	void setLastname(std::string value);
	void setId(std::string value);
	void setScore(int value);

	std::string getFirstname();
	std::string getLastname();
	std::string getId();
	int getScore();

	~Student(void);


};