#include <iostream>
using namespace std;

class Integer{
	int x;
public:
	Integer(int _x) : x(_x) {}
	int GetX() { return x; }
	void operator+ (int val) {
		x+= val;
	}

	//Integer& operator+ (const Integer& val) 하면 안된다. 지역 변수 newint의 주소를 참조하면 스코프를 나갈시에 누군지 모르게 되어버린다.
	Integer operator+ (const Integer& val) {
		Integer newint(x + val.x);
		return newint;
	} // Integer + 5

	friend void operator+ (const int& oper1, Integer& oper2);
	// 5 + Integer

	Integer& operator++() {
		++ x;
		return *this;
	}
	Integer& operator--() {
		--x;
		return *this;
	}

	Integer operator++(int){
		Integer temp(x);
		x ++;
		return temp;
	}

	Integer operator--(int){
		Integer temp(x);
		x --;
		return temp;
	}

	friend ostream& operator<<(ostream&, Integer&);
	friend istream& operator>>(istream&, Integer&);
};

istream& operator>>(istream& is, Integer& src){
	is >> src.x;
	return is;
}

ostream& operator<<(ostream& os, Integer& src){
	os << src.x;
	return os;
} // 좌항이 자신이 아니면 전역 함수로 해야한다.

void operator+ (const int& oper1, Integer& oper2) {
	oper2.x += oper1;
} // 다른 사람들이 잘 쓰이게 하려면 전역 함수로 선언 해주어야 한다 (friend 선언)

int main() {
	Integer integer(10);
	Integer integer2(20);
	
	// integer.operator+(5);
	integer + 5;
	5 + integer;

	/*cout << "Integer::" << integer.GetX() << endl;
	Integer int3 = integer + integer2;
	cout << "int3::" << int3.GetX() << endl;

	cout << " ---------------------------------------" << endl;

	cout << "integer::" << integer.GetX() << endl;
	cout << "++integer::" << (++integer).GetX() << endl;
	cout << "--integer::" << (--integer).GetX() << endl;

	cout << "integer::" << integer.GetX() << endl;
	cout << "integer--::" << (integer--).GetX() << endl;
	cout << "integer::" << integer.GetX() << endl;
	cout << "integer++::" << (integer++).GetX() << endl;
	cout << "integer::" << integer.GetX() << endl;*/

	cout << "Integer::" << integer << endl;
	Integer int3 = integer + integer2;
	cout << "int3::" << int3 << endl;

	cout << " ---------------------------------------" << endl;

	cout << "integer::" << integer << endl;
	cout << "++integer::" << (++integer) << endl;
	cout << "--integer::" << (--integer) << endl;

	cout << "integer::" << integer << endl;
	cout << "integer--::" << (integer--) << endl;
	cout << "integer::" << integer << endl;
	cout << "integer++::" << (integer++) << endl;
	cout << "integer::" << integer << endl;
	cout << endl;

	cout << " ---------------------------------------" << endl;

	cout << "integer::" << integer << endl;
	cout << "Please type integer" << endl;
	cin >> integer;
	cout << "integer::" << integer << endl;
	
	return 0;
}