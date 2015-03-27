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
	return temp; //local value�� reference�� return �ϴ� ���� �ƴϴ�.
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
	// local value�� ����� �ȴ�. 
	// but ���� delete�� �Ǵ��� �𸥴�. 
	// guarantee���� ���� �ſ� ������(��ģ) ��.
	cout << a << ":" << b << endl;

	return 0;
}