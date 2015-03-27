#include <iostream>
using namespace std;

template <typename T>
class AutoArray {
public:
	AutoArray(T *ptr) {
		_ptr = ptr;
	}
	~AutoArray() {
		delete [] _ptr;
	}

	T& operator[](int index){
		return _ptr[index];
	}

private:
	T *_ptr;
};


int main() {
	AutoArray<float> arr(new float[100]);
	arr[0] = 120.0f;

	AutoArray<double> darr(new double[100]);
	darr[0] = 131.2020;

	cout << "result::" << arr[0] << endl;
	cout << "result::" << darr[0] << endl;

	return 0;
}