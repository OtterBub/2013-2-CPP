#include <iostream>
using namespace std;

const int SIZE = 10;

class Array{
private:
	int array[SIZE];
	int idx;
public:
	Array() : idx(0) {}
	int GetElement(int i);
	void SetElement(int i, int element);
	void AddElement(int element);
	void ShowAllData();
	int length() {return idx;}

	int& operator[](int i);
};

int& Array::operator[](int i){
	return array[i];
}

int Array::GetElement(int i){
	return array[i];
}

void Array::SetElement(int i, int element){
	if( idx <= i ){
		cout << "No Item!!" << endl;
		return;
	}
	array[i] = element;
}

void Array::AddElement(int element){
	if(idx >= SIZE) {
		cout << "overflow!!" << endl;
		return;
	}

	array[idx++] = element;
}

//void Array::ShowAllData(){
//	for(int i = 0; i < idx; i++){
//		cout << "array [" << i << "]::" << array[i] << endl;
//	}
//	cout << endl;
//}

void ShowAllData(Array arr){
	for(int i = 0; i < arr.length(); i++){
		cout << "array [" << i << "]::" << arr[i] << endl;
	}
	cout << endl;
}

int main()
{
	Array arr;
	for(int i = 0; i < 5; i++)
		arr.AddElement( i * 2 );
	ShowAllData(arr);
	for(int i = 0; i < 5; i++)
		arr.SetElement(i, i+20);
	ShowAllData(arr);
	for(int i = 0; i < 5; i++)
		cout << arr.GetElement(i) << endl;

	return 0;
}