#include <iostream>
using namespace std;

// ��������, void*

int add(int a, int b = 5);
int add(int a);

// prototype function�� ���忡���� �޶� ���δ�.

int main()
{

	cout << add(1, 9) << endl;
	cout << add(20) << endl; // function call �ϸ� ambiguous call to overloaded function.

	return 0;
}

int add(int a, int b) {
	return a + b;
}

int add(int a){
	return a + a;
}