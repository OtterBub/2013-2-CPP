#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "Hello";
	string str2 = "World!";
	string str3 = str1 + str2;
	string str4 = str3 + " Good Morning!";
	string str5 = "Hello";

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;

	// str5 = str3;

	if( str1 == str5){
		cout << "str1 is equal str5" << endl;
	} else {
		cout << "str1 is not equal str5" << endl;
	}

	return 0;
}