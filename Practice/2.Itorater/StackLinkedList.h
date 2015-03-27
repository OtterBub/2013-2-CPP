#ifndef STACK_LINKEDLIST_H
#define STACK_LINKEDLIST_H
#include "LinkedList.h"

template <typename T>
class Stack{
private:
	LinkedList<T> list;

public:
	Stack();
	bool isEmpty();
	T peek();
	void push_back(T value);
	T pop();
	int getSize();
};

template <typename T>
Stack<T>::Stack() {}

template <typename T>
bool Stack<T>::isEmpty() {
	return list.isEmpty();
}

template <typename T>
T Stack<T>::peek() {
	return list.getLast();
}

template <typename T>
void Stack<T>::push_back(T value) {
	list.addLast(value);
}

template <typename T>
T Stack<T>::pop() {
	return list.removeLast();
}

template <typename T>
int Stack<T>::getSize() {
	return list.getSize();
}

#endif // STACK_LINKEDLIST_H