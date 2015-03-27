#include <iostream>
#include <string>
#include "LinkedList.h"
#include "StackLinkedList.h"

using namespace std;

int main(int argc, char** argv)
{
	LinkedList<string> list;
	list.add("New York");
	list.add("Canada");
	list.add("Dallas");
	list.add("Seoul");

	cout << list.removeLast() << endl;
	cout << list.removeFirst() << endl;
	cout << list.getFirst() << endl;
	cout << list.getLast() << endl;

	cout << "------------- used STACK --------------" << endl;

	Stack<string> stack;
	stack.push_back("New York");
	stack.push_back("Canada");
	stack.push_back("Dallas");
	stack.push_back("Seoul");
	stack.push_back("L.A.");

	while(! stack.isEmpty())
		cout << stack.pop() << endl;

	// next time
	// Queue
	// Iterator
	// --------------- 
	// 11월
	// and Exeption
	// File I/O
	// ---------------
	// 12월
	// and UML
	// OOP를 이용한 win32

	return 0;
}