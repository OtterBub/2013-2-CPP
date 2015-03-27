#include <iostream>

using namespace std;

/*
when call copy construction (midterm test)

student2 = student;

student( student2 );

*/

class Point {
	int x, y;
public:
	Point(int x, int y){
		this->x = x;
		this->y = y;
	}
	void print() {
		cout << "x:" << x << ",y:" << y << endl;
	}
	Point( const Point & rhs ) { //default copy constructor
		cout << "Point( const Point & rhs ) called!" << endl;
		this->x = rhs.x;
		this->y = rhs.y;
	}

	void setX(int x) { this->x = x; }
};

int main()
{
	Point point(10, 5);
	Point point2 = point;
	point.print();
	point2.print();

	point.setX(1);
	point.print();
	point2.print();

	return 0;
}