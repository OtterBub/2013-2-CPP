#include <iostream>

using namespace std;
namespace A{
	void a() {
		cout << "A() is Called!" << endl;
	}
}

namespace B{
	void a() {
		cout << "B() is Called!" << endl;
	}
}

int main()
{
	char a('a');
	int* i = new int(100);

	cout << "Hello World!" << " " << a << " " << *i << endl;

	cout << "Please Type Your Age:";
	cin >> *i;
	cout << "Your Age is " << *i << " years old" << endl;

	A::a();
	B::a();

	return 0;
}

