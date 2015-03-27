#include <iostream>
#include <exception>

class Shape {
protected:
	int x, y;
public:
	Shape(int x, int y) {
		this->x = x; this->y = y;
	}
	virtual void print() {
		std::cout << "x::" << x << " y::" << y;
	}
};

class Rectangle : public Shape
{
	int width, height;
public:
	Rectangle(int _x, int _y, int w, int h) :
		Shape(_x, _y)
	{
		this->width = w; this->height = h;
	}

	void print() {
		Shape::print();
		std::cout << " width::" << width << " height::" << height << std::endl;
	}
};

class Circle : public Shape {
	int radius;
public :
	Circle(int _x, int _y, int radius) :
		Shape(_x, _y)
	{
		this->radius = radius;
	}

	void print() {
		Shape::print();
		std::cout << " radius::" << radius << std::endl;
	}
};

int main()
{
	try {
		Rectangle r(10, 20, 40, 50);
		r.print();
		Shape &s = dynamic_cast<Shape&>(r);
		s.print();

		/*Circle &c = dynamic_cast<Circle&>(r);
		c.print();*/ // exception throw
	} catch(std::bad_cast &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}