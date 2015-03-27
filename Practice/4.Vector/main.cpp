#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<char> vec;
	vec.push_back('e');
	vec.push_back('b');
	vec.push_back('a');
	vec.push_back('d');
	vec.push_back('c');

	sort(vec.begin(), vec.end());
	cout << "Vector Arranged" << endl;
	vector<char>::iterator it;
	for(it = vec.begin(); it != vec.end() ; ++it)
		cout << *it;
	
	cout << endl;

	char arr[5] = {'d', 'c', 'b', 'a', 'e'};
	sort(arr, arr + 5);
	for(char *p = arr; p != arr + 5; p++)
		cout << *p;

	return 0;
}