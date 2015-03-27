#include <iostream>
using namespace std;

class Car {
public:
	int model;
	int year;
	int price;
	Car() { cout << "Car() call!" << endl; }
	~Car() { cout << "~Car() call!" << endl; }
};

// this is extend car.
// so, first construction class Car
// and then construction class Truck

class Truck : public Car { 
public:
	int weigh;
	Truck() { cout << "Truck() call!" << endl; }
	~Truck() { cout << "~Truck() call!" << endl; }
};

int main()
{
	Truck truck;
	truck.model = 1111;
	truck.price = 5000;
	truck.weigh = 2000;
	truck.year = 2003;

	cout << "Truck::" 
		<< truck.model << " " 
		<< truck.price << " " 
		<< truck.weigh << " " 
		<< truck.year << endl;

	return 0;
}