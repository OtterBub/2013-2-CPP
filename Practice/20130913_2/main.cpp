#include <iostream>
using namespace std;

// 가변인자, void*

int add(int a, int b);
float add(float a, float b);

int main()
{

	cout << add(1, 9) << endl;
	cout << add(2.3f, 5.1f) << endl;

	return 0;
}

int add(int a, int b) {
	return a + b;
}

float add(float a, float b){
	return a + b;
}