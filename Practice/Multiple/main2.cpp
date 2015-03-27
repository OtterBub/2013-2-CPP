#include <iostream>
using namespace std;

class Base {
public:
	int value;
	Base() : value(0) { cout << "Base() Call!" << endl; }
};

class A : virtual public Base {
public:
	A() { cout << "A() Call!" << endl; value = 10;}
};

class B : virtual public Base {
public:
	B() { cout << "B() Call!" << endl; value = 20;}
};

class C : public A, public B { // 순서대로 호출되어 생성자가 불려진다.
public:
	C() { cout << "C() Call!" << endl; }
	
};

int main()
{
	C c;
	cout << c.A::value << endl;
	cout << c.B::value << endl;
	cout << c.Base::value << endl;
	return 0;
}