#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
	std::ofstream output; // Create File Output Stream
	output.open("..\\File\\formatscore.txt"); // Open File Output Stream

	output<<std::setw(6) << "John" << std::setw(2) << "T" << std::setw(6) << "Smith" << " " << std::setw(4) << 90 << std::endl;
	output<<std::setw(6) << "Eric" << std::setw(2) << "K" << std::setw(6) << "Jones" << " " << std::setw(4) << 90 << std::endl;

	output.close();

	std::cout << "Done!" << std::endl;
	return 0;
}