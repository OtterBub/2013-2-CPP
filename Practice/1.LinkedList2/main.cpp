#include <iostream>
#include <string>
#include "LinkedList.h"
//#include "StackLinkedList.h"
#include "Queue.h"

using namespace std;

template <typename T>
void printQueue(Queue<T> &queue) {
	while(queue.getSize() > 0)
		cout << queue.dequeue() << " ";
	cout << endl;
}

int main(int argc, char** argv)
{
	Queue<int> intQueue;
	for(int i = 0; i < 10; i++)
		intQueue.enqueue(i);
	printQueue(intQueue);

	Queue<string> stringQueue;
	stringQueue.enqueue("New York");
	stringQueue.enqueue("Boston");
	stringQueue.enqueue("Denver");
	printQueue(stringQueue);

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