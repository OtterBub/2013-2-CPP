#include <iostream>
#include "Triangle.h"

void doTriangle() {
	Triangle triangle;
	std::cout << "perimeter::" << triangle.getPerimeter() << std::endl;
	std::cout << "Area is::" << triangle.getArea() << std::endl;
	//triangle.setSide3(4);
	triangle.setSide2(-10);
}

int main()
{
	Triangle triangle;
	try {
		doTriangle(); // Stack 풀기
	} catch(NonPositiveSideException &ex) {
		std::cout << ex.what();
		std::cout << " this side is " << ex.getSide() << std::endl;
	} catch(TriangleException &ex) {
		std::cout << ex.what();
		std::cout << " sides::" << ex.getSide1() << ", " << ex.getSide2() << ", " << ex.getSide3() << std::endl;
	}
	std::cout << triangle.getSide1() << ", " << triangle.getSide2() << ", " << triangle.getSide3() << std::endl;
	// exception도 상속가능, 좁은 범위부터 체크해 나아가야함.

	return 0;
}