#include <iostream>
#include <string>

using namespace std;

template <typename T>
T add(T value1, T value2) {
	return value1 + value2;
};

template <typename A, typename B>
A add(A value1, B value2) {
	return value1 + value2;
};

int main ()
{
	cout << add(10, 10) << endl;
	cout << add(10.2, 10.2) << endl;
	cout << add(10.23f, 10.2f) << endl;
	cout << add((string)"skh", (string)"asdd") << endl;
	cout << add(10.239, 4) << endl;
	return 0;
}