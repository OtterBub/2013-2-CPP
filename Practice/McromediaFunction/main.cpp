#include <iostream>
using namespace std;

#define Max(a, b) ( a > b ? a : b ) //call�� �ƴ� ��ġ, but program�� size�� Ŀ����.

int main()
{
	int a = 3, b = 5;

	cout << Max(a, b) << endl;
}