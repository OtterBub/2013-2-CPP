#include <iostream>
using namespace std;

class String{
private:
	char* str;
public:
	String(char* src){
		str = new char[strlen(src) + 1];
		strcpy(str, src);
	}
	String(const String& src){
		
		str = new char[strlen(src.str) + 1];
		strcpy(str, src.str);
	}
	~String(){
		delete[] str;
	}
	friend ostream& operator<<(ostream&, String&);

	String& operator=(const String& src){
		delete[] str;
		str = new char[strlen(src.str) + 1];
		strcpy(str, src.str);
		return *this;
	} // ���� �����ڵ� ���� ���縦 �ؾ� �Ѵ�.
};

ostream& operator<<(ostream& os, String& src){
	os << src.str;
	return os;
}

int main(){
	String str1("Hello World!");
	cout << str1 << endl;
	String str2 = "Another Hello";
	cout << str2 << endl;
	String str3 = str2;
	cout << str3 <<endl;
	{
		String str4 = "Good Hello";
		cout << str4 << endl;
		str3 = str4; // ���� ����, ������ �����ε��� ���� �ÿ� ���⼭ ���װ� ����.
	}
	cout << str3 << endl;
	return 0;
}