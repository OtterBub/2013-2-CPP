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
		doTriangle(); // Stack Ǯ��
	} catch(NonPositiveSideException &ex) {
		std::cout << ex.what();
		std::cout << " this side is " << ex.getSide() << std::endl;
	} catch(TriangleException &ex) {
		std::cout << ex.what();
		std::cout << " sides::" << ex.getSide1() << ", " << ex.getSide2() << ", " << ex.getSide3() << std::endl;
	}
	std::cout << triangle.getSide1() << ", " << triangle.getSide2() << ", " << triangle.getSide3() << std::endl;
	// exception�� ��Ӱ���, ���� �������� üũ�� ���ư�����.

	return 0;
}