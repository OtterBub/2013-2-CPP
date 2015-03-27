#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <algorithm>

int main () 
{
	std::list<int> L;
	L.push_back(0);
	L.push_front(0);
	L.insert(++L.begin(), 2);

	L.push_back(5);
	L.push_back(6);
	std::list<int>::iterator it;
	for(it = L.begin(); it != L.end(); ++it){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	return 0;
}