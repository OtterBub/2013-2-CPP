#include <iostream>
#include <fstream>

int main()
{
	std::ofstream output; // Create File Output Stream
	output.open("..\\File\\scores.txt"); // Open File Output Stream

	output << "John" << " " << "T" << " " << "Smith" << " " << 90 << std::endl;
	output << "Eric" << " " << "K" << " " << "Jones" << " " << 85 << std::endl;

	output.close(); // File Stream Close

	std::ifstream input; // Create File Input Stream
	input.open("..\\File\\scores.txt");
	
	if( input.fail() ) {
		std::cout << "File does not exist!" << std::endl;
		return 0;
	}

	char firstName[80];
	char mi;
	char lastName[80];
	int score;
	
	while( ! input.eof() ) {
		input >> firstName >> mi >> lastName >> score;
		std::cout << firstName << " " << mi << " " << lastName << " " << score << std::endl;
	}
	
	input.close();


	std::cout << "Done!" << std::endl;

	return 0;
}