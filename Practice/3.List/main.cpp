#include <iostream>
#include <list>
using namespace std;

int main() {

	std::list<int> intList;
	for(int i = 0; i < 10; i++)
		intList.push_back(i);
	intList.remove(5);
	std::list<int>::iterator it;

	for(it = intList.begin(); it != intList.end(); ++it)
		cout << *it << endl;

	std::list<float> floatList;
	for(int i = 0; i < 10; i++)
		floatList.push_back(i + 0.124 * i);
	floatList.remove(5);
	std::list<float>::iterator fit;

	for(fit = floatList.begin(); fit != floatList.end(); ++fit)
		cout << *fit << endl;

	std::list<double> doubleList;
	for(int i = 0; i < 10; i++)
		doubleList.push_back(i + 0.235234 * i);
	doubleList.remove(5);
	std::list<double>::iterator dit;

	for(dit = doubleList.begin(); dit != doubleList.end(); ++dit)
		cout << *dit << endl;

	return 0;
}