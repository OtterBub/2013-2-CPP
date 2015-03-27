#include <iostream>
#include <vector>
#include <string>

int main ()
{
	std::vector< std::vector<int> > vI2Matrix;
	std::vector<int> A, B;
	std::vector< std::vector<int> >::iterator iter_ii;
	std::vector<int>::iterator iter_jj;

	A.push_back(10);
	A.push_back(20);
	A.push_back(30);
	B.push_back(100);
	B.push_back(200);
	B.push_back(300);
	vI2Matrix.push_back(A);
	vI2Matrix.push_back(B);
	std::cout << std::endl << "Using Iterator:" << std::endl;
	for(iter_ii = vI2Matrix.begin(); iter_ii != vI2Matrix.end(); iter_ii++) {
		for(iter_jj = (*iter_ii).begin(); iter_jj != (*iter_ii).end(); iter_jj++){
			std::cout << *iter_jj << std::endl;
		}
	}

	return 0;
}