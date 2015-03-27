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

	//Integer& operator+ (const Integer& val) �ϸ� �ȵȴ�. ���� ���� newint�� �ּҸ� �����ϸ� �������� �����ÿ� ������ �𸣰� �Ǿ������.
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
} // ������ �ڽ��� �ƴϸ� ���� �Լ��� �ؾ��Ѵ�.

void operator+ (const int& oper1, Integer& oper2) {
	oper2.x += oper1;
} // �ٸ� ������� �� ���̰� �Ϸ��� ���� �Լ��� ���� ���־�� �Ѵ� (friend ����)

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