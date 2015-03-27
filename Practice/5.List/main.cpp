#include <iostream>
#include <list>
using namespace std;

template <typename T>
void selectionSort(T *list, int arraySize){
	for(int i = arraySize - 1; i >= 1; i--){
		T currentMax = list[0];
		int currentMaxIndex = 0;

		for(int j = 1; j <= i; j++){
			if( currentMax < list[j]) {
				currentMax = list[j];
				currentMaxIndex = j;
			}
		}
		if( currentMaxIndex != i) {
			list[currentMaxIndex] = list[i];
			list[i] = currentMax;
		}
	}
}

template <typename T>
void printArray(T *list, int arraySize) {
	for(int i = 0; i < arraySize; i++)
		cout << list[i] << " ";
}

int main() {
	int list[] = {3, 2, 5, 4, 1, 0, 4};
	
	selectionSort(list, 7);
	printArray(list, 7);

	return 0;
}