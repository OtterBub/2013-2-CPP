#include <iostream>
using namespace std;

#define Max(a, b) ( a > b ? a : b ) //call이 아닌 대치, but program의 size가 커진다.

int main()
{
	int a = 3, b = 5;

	cout << Max(a, b) << endl;
}