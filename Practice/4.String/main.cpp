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
	} // 대입 연산자도 깊은 복사를 해야 한다.
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
		str3 = str4; // 깊은 복사, 연산자 오버로딩을 안할 시에 여기서 버그가 난다.
	}
	cout << str3 << endl;
	return 0;
}