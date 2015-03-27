#include <iostream>
using namespace std;

class A {
public:
	void print() {
		cout << "A::print()" << endl;
	}
};

class B {
public:
	void print() {
		cout << "B::print()" << endl;
	}
};

class C : public A, public B {
public:
	
};

int main()
{
	C c;
	c.A::print();
	c.B::print();
	return 0;
}