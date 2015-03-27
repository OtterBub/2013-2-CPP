#include <iostream>
#include <fstream>

int main() 
{
	std::fstream inout;

	inout.open("city.txt", std::ios::out);

	inout << "Dallas" << " " << "Houston" << " " << "Atlanta" << " ";
	inout.close();

	inout.open("city.txt", std::ios::app);

	inout << "Savanah" << " " << "Austin" << " " << "Chicago" ;
	inout.close();
	
	char city[20];
	
	inout.open("city.txt", std::ios::in);

	while( ! inout.eof() ) {
		inout >> city;
		std::cout << city << " ";
	}

	inout.close();

	int temp;
	std::cin >> temp;

	return 0;
}