#include <iostream>

class A {
public:
	void print() {
		std::cout << "Hello This is A Class Print()" << std::endl;
	}
};

class B : public A {
public:
	void show(){
		std::cout << "Hello! B show Method" << std::endl;
	}
};

class C : public B {
public:
	void additionalShow() {
		std::cout << "Hello! C AdditionalShow()" << std::endl;
	}
};

int main(){
	A* a = new A;
	A* b = new B;
	A* c = new C;
	a->print();
	a->print();

	B* bb = (B*)b;
	bb->show();

	C* cc = (C*)b;

	cc->additionalShow();
	a->print();

	delete a;
	delete b;
	delete c;

}