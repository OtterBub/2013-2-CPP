#include <iostream>
#include <exception>

int main() 
{
	try {
		for(int i = 1; i <= 100; i++) {
			new int[70000000];
			std::cout << i << " arrays have been created!" << std::endl;
		}
	} catch(std::bad_alloc &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}