#include "Triangle.h"

Triangle::Triangle() {
	side1 = side2 = side3 = 1; 
}

Triangle::Triangle(double _side1, double _side2, double _side3) {
	check(_side1);
	check(_side2);
	check(_side3);

	if(!isValid(_side1, _side2, _side3))
		throw TriangleException(_side1, _side2, _side3);

	this->side1 = _side1;
	this->side2 = _side2;
	this->side3 = _side3;
}

void Triangle::setSide1(double v) { 
	check(v);

	if(!isValid(v, side2, side3))
		throw TriangleException(v, side2, side3);
	
	side1 = v; 
}
void Triangle::setSide2(double v) { 
	check(v);

	if(!isValid(side1, v, side3))
		throw TriangleException(side1, v, side3);
	
	side2 = v; 
}
void Triangle::setSide3(double v) { 
	check(v);

	if(!isValid(side1, side2, v))
		throw TriangleException(side1, side2, v);

	side3 = v; 
}

double Triangle::getPerimeter() 
{
	return side1 + side2 + side3;
}
double Triangle::getArea() 
{
	double s = getPerimeter() / 2;
	return sqrt(s * (s - side1) * (s - side2) * (s-side3) );
}