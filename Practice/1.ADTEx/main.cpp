#include <iostream>
using namespace std;

class Shape {
protected:
	int x, y;
public:
	Shape(int _x, int _y) : x(_x), y(_y){}
	virtual void onDraw() = 0;
};

class Rect : public Shape {
private:
	int width, height;
public:
	Rect(int _x, int _y, int _w, int _h): Shape(_x, _y), width(_x), height(_h) {}
	void onDraw() {
		cout << "Rect::" << x << ", " << y << ", " << width << ", " << height << endl;
	}
};

class Circle : public Shape {
private:
	int radius;
public:
	Circle(int _x, int _y, int _radius) : Shape(_x, _y), radius(_radius) {}
	void onDraw() {
		cout << "Circle::" << x << ", " << y << ", " << radius << endl;
	}
};

int main()
{
	Shape* shape = new Rect(10, 50, 80, 60);
	shape->onDraw();
	Shape* circle = new Circle(45, 70, 55);
	circle->onDraw();

	return 0;
}