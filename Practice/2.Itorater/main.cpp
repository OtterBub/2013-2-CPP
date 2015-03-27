#include <iostream>
#include <string>
#include "LinkedList.h"
//#include "StackLinkedList.h"
#include "Queue.h"

using namespace std;

int main(int argc, char** argv)
{
	LinkedList<string> list;
	list.add("USA");
	list.add("Korea");
	list.add("China");
	list.add("Russia");
	list.add("Canada");

	for(Iterator<string> it = list.begin(); it != list.end(); it++)
		cout << *it << " ";

	cout << endl;
	return 0;
}