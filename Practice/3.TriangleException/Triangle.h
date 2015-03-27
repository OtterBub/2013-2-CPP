#pragma once
#include "TriangleException.h"
#include "NonPositiveSideException.h"
#include <cmath>

class Triangle {
public:
	Triangle();
	Triangle(double _side1, double _side2, double _side3) throw(NonPositiveSideException, TriangleException);
	~Triangle() {}

	double getSide1() { return side1; }
	double getSide2() { return side2; }
	double getSide3() { return side3; }

	void setSide1(double v) throw(NonPositiveSideException, TriangleException);
	void setSide2(double v) throw(NonPositiveSideException, TriangleException);
	void setSide3(double v) throw(NonPositiveSideException, TriangleException);

	double getPerimeter();
	double getArea();

private:
	double side1, side2, side3;
	bool isValid(double side1, double side2, double side3) {
		return (side1 < side2 + side3) && 
			(side2 < side1 + side3) && 
			(side3 < side1 + side2);
	}
	void check(double side) throw(NonPositiveSideException) {
		if( side < 0 ) throw NonPositiveSideException(side);
	}

};