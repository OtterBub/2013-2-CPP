#include <iostream>
using namespace std;

bool isSame(int, int);
int add(int, int);

int main()
{
	int a, b;
	cout << "input two number";
	cin >> a >> b;

	if( isSame(a, b) ){
		cout << "a::" << a << " and b::" << b << " is Same number." << endl;
	} else {
		cout << "a::" << a << " and b::" << b << " is different number." << endl;
	}
	return 0;
}

int add(int a, int b) {
	return a + b;
}

bool isSame(int a, int b)
{
	return a == b;
}