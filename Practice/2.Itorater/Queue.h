#pragma once
#include "LinkedList.h"
#include <stdexcept>
using namespace std;

template <typename T>
class Queue {
	LinkedList<T> list;
public:
	Queue();
	void enqueue(T element);
	T dequeue();
	int getSize();
};

template <typename T>
Queue<T>::Queue() {}

template <typename T>
void Queue<T>::enqueue(T element) {
	list.addLast(element);
}

template <typename T>
T Queue<T>::dequeue() {
	return list.removeFirst();
}

template <typename T>
int Queue<T>::getSize() {
	return list.getSize();
}