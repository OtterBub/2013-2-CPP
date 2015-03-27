#ifndef STACK_H
#define STACK_H

template <typename T>
class TStack{
private:
	T* elements;
	int size;
	int capacity;
	void ensureCapacity();
public:

	TStack(void);
	~TStack(void);

	bool empty();
	T peek();

	void push(T value);
	T pop();

	int getSize();
};

template <typename T>
TStack<T>::TStack(void) : size(0), capacity(16)
{
	elements = new T[capacity];
}

template <typename T>
TStack<T>::~TStack(void)
{
	delete elements;
}

template <typename T>
bool TStack<T>::empty()
{
	return (size == 0);
}

template <typename T>
T TStack<T>::peek()
{
	return elements[size - 1];
}

template <typename T>
void TStack<T>::push(T value)
{
	ensureCapacity();
	elements[size++] = value;
}
template <typename T>
T TStack<T>::pop(){
	return elements[--size];
}

template <typename T>
int TStack<T>::getSize(){
	return size;
}

template <typename T>
void TStack<T>::ensureCapacity() {
	if( size >= capacity ){
		T *old = elements;
		capacity = 2 * size;
	}
	elements = new T[size*2];
	for(int i = 0; i < size; i++)
		elements[i] = old[i];
	delete old;
}

#endif // STACK_H