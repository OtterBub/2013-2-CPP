#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string str;
	char result[300];

	std::fstream bio;

	bio.open("11.FBX", std::ios::in | std::ios::binary);
	
	if( bio.fail() ) {
		std::cout << "file open failed!" << std::endl;
		std::cin >> result;
		return 0;
	}

	bio.read(result,sizeof(result));

	std::cout << result;

	std::cin >> result;

	while( ! bio.eof() ) {
		
		bio.read(result,sizeof(result));

		if( strcpy("Vertices", result) == 0 ) {
			std::cout << "vertices found" << std::endl;
			std::cin >> result;
		}

	}

	bio.close();

	std::cout << std::endl;
	return 0;
}