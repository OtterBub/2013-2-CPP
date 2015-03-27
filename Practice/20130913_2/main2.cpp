#include <iostream>
using namespace std;

// 가변인자, void*

int add(int a, int b = 5);
int add(int a);

// prototype function의 입장에서는 달라 보인다.

int main()
{

	cout << add(1, 9) << endl;
	cout << add(20) << endl; // function call 하면 ambiguous call to overloaded function.

	return 0;
}

int add(int a, int b) {
	return a + b;
}

int add(int a){
	return a + a;
}