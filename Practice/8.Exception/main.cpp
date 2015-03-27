#include <iostream>
#include <stdexcept>
using namespace std;


int main() {

	cout << "Enter Two integers:";
	int number1, number2;
	cin >> number1 >> number2;

	// C Style
	/*if( number2 != 0 )
		cout << number1 << " / " << number2 << " is " << (number1 / number2) << endl;
	else
		cout << "Number2 must not Zero";
	cout << endl;*/

	try {
		if(number2 == 0) throw runtime_error("integer cannot be zero");
		cout << number1 << " / " << number2 << " is " << (number1 / number2) << endl;
	} catch(exception &ex) {
		//cout << "Exception : integer " << ex << " cannot be divided by zero" << endl;
		cout << ex.what() << endl;
	}

	return 0;
}