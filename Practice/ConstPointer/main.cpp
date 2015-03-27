#include <iostream>
using namespace std;

int main()
{
	const int a = 10;
	const int b = 20;
	const int value = 10;
	const int* ptr1 = &a;
	int const* ptr2 = &b;

	cout << "value::" << value << endl;
	cout << "ptr1::" << *ptr1 << endl;
	cout << "ptr2::" << *ptr2 << endl;

	// *ptr1 = 20;

	ptr2 = ptr1;

	// *ptr2 = 15;

	int* const ptr3 = &b;

	*ptr3 = 30;

	// ptr3 = ptr2 ;	

	return 0;
}