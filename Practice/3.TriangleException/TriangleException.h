#pragma once
#include <iostream>
#include <exception>

class TriangleException : public std::logic_error {
	double side1, side2, side3;
public :
	TriangleException(double side1, double side2, double side3) :
		logic_error("Invalid triangle") {
		this->side1 = side1;
		this->side2 = side2;
		this->side3 = side3;
	}

	double getSide1(){ return side1; }
	double getSide2(){ return side2; }
	double getSide3(){ return side3; }
};