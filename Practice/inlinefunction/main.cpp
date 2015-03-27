#include <iostream>
using namespace std;

inline void print() {
	for(char c = 32; c < 96; c++)
		cout << "a::" << c << endl;
}

int main()
{
	int a = 3, b = 5;

	print();
}