#include <iostream>
#include <fstream>

void ShowState(std::fstream &);

int main()
{
	std::fstream inout;
	inout.open("temp.txt", std::ios::out);
	inout << "Dallas" ;
	std::cout << "Normal Operation!(no error)" << std::endl;

	ShowState(inout);
	inout.close();

	std::cout << std::endl;

	inout.open("temp.txt", std::ios::in);
	
	char city[20];
	inout >> city;
	std::cout << "End of File ( no errors ) " << std::endl;

	ShowState(inout);

	std::cout << std::endl;

	inout.close();

	std::cout << std::endl;

	inout >> city;
	std::cout << "Bad Operation ( errors ) " << std::endl;
	ShowState(inout);
	std::cout << std::endl;

	char temp;
	std::cin >> temp;

	return 0;
}

void ShowState(std::fstream & stream) {
	std::cout << "Stream Status: " << std::endl;
	std::cout << "eof() : " << stream.eof() << std::endl;
	std::cout << "fail() : " << stream.fail() << std::endl;
	std::cout << "bad() : " << stream.bad() << std::endl;
	std::cout << "good() : " << stream.good() << std::endl;
}