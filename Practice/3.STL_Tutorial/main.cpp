#include <iostream>
#include <vector>
#include <iterator>
#include <string>

int main(int argc, char** argv)
{
	std::vector<std::string> SS;
	SS.push_back("The number is 10");
	SS.push_back("The number is 20");
	SS.push_back("The number is 30");
	std::cout << "Loop by index:" << std::endl;
	
	int ii;
	for(ii = 0; ii < SS.size(); ii++){
		std::cout << SS[ii] << ", ";
	}
	std::cout << std::endl;

	std::cout << std::endl << "Constant Iterator:" << std::endl;
	std::vector<std::string>::const_iterator cii;
	for(cii = SS.begin(); cii != SS.end(); cii++){
		std::cout << *cii << ", ";
	}
	std::cout << std::endl;

	std::cout << std::endl << "Reverse Iterator:" << std::endl;
	std::vector<std::string>::reverse_iterator rii;
	for(rii = SS.rbegin(); rii != SS.rend(); rii++){
		std::cout << *rii << ", ";
	}
	std::cout << std::endl;

	std::cout << std::endl << "Sample Output:" << std::endl;
	std::cout << SS.size() << std::endl;
	std::cout << SS[2] << std::endl;
	std::swap(SS[0], SS[2]);
	std::cout << SS[2] << std::endl;


	return 0;
}