#include <iostream>
#include "TStack.h"
#include <string>
using namespace std;

template <typename T>
void printStack(TStack<T> & stack) {
	while(! stack.empty() ){
		cout << stack.pop() << " ";
	}
	cout << endl;
}

int main() {

	/*TStack<int> stack;
	for(int i = 0; i < 10; i++)
		stack.push(i);

	printStack(stack);

	TStack<string,5> stringStack;

	for(int i = 0; i < 5; i++){
		stringStack.push((string)"sdgsdf");
	}

	printStack(stringStack);*/
	

	return 0;
}
