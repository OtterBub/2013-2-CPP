#include "student.h"

Student::Student(){
	name = NULL;
	subject = NULL;
	score = 0;
}

Student::Student(char* name, char* subject, int score){
	this->name = new char[strlen(name) + 1];
	this->subject = new char[strlen(subject) + 1];
	strcpy(this->name, name);
	strcpy(this->subject, subject);
	this->score = score;
}

Student::~Student(void){
	if( name != NULL ) delete this->name;
	if( subject != NULL ) delete this->subject;
}

Student::Student(const Student & rhs){
	name = new char[strlen(rhs.name) + 1];
	subject = new char[strlen(rhs.subject) + 1];
	strcpy(name, rhs.name);
	strcpy(subject, rhs.subject);
	score = rhs.score;
}

void Student::SetName(char* name){ // setor
	if( this->name != NULL ) delete this->name;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}

void Student::SetSubject(char* subject){
	if( this->subject != NULL ) delete this->subject;
	this->subject = new char[strlen(subject) + 1];
	strcpy(this->subject, subject);
}

void Student::SetScore(int score){
	this->score = score;
}

char* Student::GetName(){ return name; }
char* Student::GetSubject(){ return subject; }
int Student::GetScore(){ return score; }

void Student::print(){
	cout << "Name : " << name << endl;
	cout << "Subject : " << subject << endl;
	cout << "Score : " << score << endl;
}

//Q : this 포인터를 써줘야 할 때와 안써줘야 할 때???