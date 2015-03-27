#include <iostream>
using namespace std;

//void swap(int* a, int* b)
//{
//	int* temp = a;
//	a = b;
//	b = temp;
//}

//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}

int& swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	temp = a+b;
	return temp; //local value는 reference로 return 하는 것이 아니다.
}


int main()
{
	int value = 20;
	int& value2 = value;

	cout << "&value: " << &value << endl;
	cout << "&value2: " << &value2 << endl;

	value2 = 30;
	cout << "value2 = 3;\nvalue : " <<value << endl << endl;

	int a = 10;
	int b = 20;

	cout << a << ":" << b << endl;
	cout << swap(a, b) << endl; 
	// local value가 출력이 된다. 
	// but 언제 delete가 되는지 모른다. 
	// guarantee하지 않은 매우 위험한(미친) 짓.
	cout << a << ":" << b << endl;

	return 0;
}