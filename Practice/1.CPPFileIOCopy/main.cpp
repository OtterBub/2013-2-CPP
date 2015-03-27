#include <iostream>
#include <fstream>

int main() 
{
	const int FILENAME_SIZE = 40;
	std::cout << "Enter a Source File Name: " ;
	char inputFilename[FILENAME_SIZE];
	std::cin >> inputFilename;

	std::cout << "Enter a target file name: " ;
	char outputFilename[FILENAME_SIZE];
	std::cin >> outputFilename;

	std::ifstream input;
	std::ofstream output;
	input.open(inputFilename);

	if(input.fail()) {
		std::cout << inputFilename << " does not exists!" << std::endl;

		int temp;
		std::cin >> temp;

		return 0;
	}

	output.open(outputFilename);
	while( !input.eof()) {
		output.put( input.get() );
	}

	input.close(); 
	output.close();
	std::cout << "Done!!!!" << std::endl;

	int temp;
	std::cin >> temp;

	return 0;
}