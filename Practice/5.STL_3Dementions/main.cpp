#include <iostream>
#include <vector>
#include <string>

int main ()
{
	std::vector< std::vector< std::vector<int> > > vI3Matrix(2, std::vector< std::vector <int> >(3, std::vector<int>(4,0)));
	vI3Matrix[0][0][0] = 0;
	vI3Matrix[0][1][0] = 1;
	vI3Matrix[1][0][0] = 10;
	vI3Matrix[1][1][0] = 11;
	vI3Matrix[0][0][3] = 20;
	vI3Matrix[0][1][3] = 21;

	std::cout << "Loop by index:" << std::endl;
	int ii, jj, kk;
	for(ii = 0; ii < 4; ii++) {
		for(jj = 0; jj < 3; jj++) {
			for(kk = 0; kk < 2; kk++){
			std::cout << vI3Matrix[kk][jj][ii] << std::endl;
			}
		}
	}

	return 0;
}