#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
	std::ofstream output; // Create File Output Stream
	output.open("..\\File\\cities.txt"); // Open File Output Stream

	output << "Seoul" << std::endl;
	output << "Tokyo" << std::endl;
	output << "London" << std::endl;
	output.close();

	std::ifstream input;
	input.open("..\\File\\cities.txt");
	if( input.fail() ) {
		std::cout << "No file!" << std::endl;
		return 0;
	}
	char city[40];
	while( ! input.eof() ) {
		input.getline(city, 40, '\n');
		std::cout << city << std::endl;
	}
	input.close();

	std::cout << "Done!" << std::endl;
	return 0;
}