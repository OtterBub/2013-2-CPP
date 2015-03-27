#include <iostream>
#include <fstream>
int main()
{
	std::fstream bio;
	bio.open("temp.dat", std::ios::out | std::ios::binary);
	int value = 231321321;
	
	bio.write( reinterpret_cast<char*>(&value), sizeof(value));
	//bio.write( (char*)(&value), sizeof(value));

	bio.close();

	bio.open("temp.data", std::ios::in | std::ios::binary);
	int val;
	bio.read( reinterpret_cast<char*>(&val), sizeof(val));
	// class를 재해석 할 때 reinterpret_cast 쓰인다.
	//bio.read( (char*)(&val), sizeof(val));

	std::cout << val << std::endl;
	std::cout << "Done!" << std::endl;


	char temp;
	std::cin >> temp;

	return 0;
}