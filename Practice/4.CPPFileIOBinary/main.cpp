#include <iostream>
#include <fstream>

int main() 
{
	std::fstream bio;
	bio.open("city.dat",std::ios::out | std::ios::binary);

	char s[] = "Atlanta";
	bio.write(s, strlen(s));
	bio.close();
	std::cout << "Done!" << std::endl;

	return 0;
}