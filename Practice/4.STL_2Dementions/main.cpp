#include <iostream>
#include <vector>
#include <string>

int main ()
{
	std::vector< std::vector<int> > vI2Matrix(3, std::vector<int>(2, 0));
	vI2Matrix[0][0] = 0;
	vI2Matrix[0][1] = 1;
	vI2Matrix[1][0] = 10;
	vI2Matrix[1][1] = 11;
	vI2Matrix[2][0] = 20;
	vI2Matrix[2][1] = 21;

	std::cout << "Loop by index:" << std::endl;
	int ii, jj;
	for(ii = 0; ii < 3; ii++)
	{
		for(jj = 0; jj < 2; jj++)
		{
			std::cout << vI2Matrix[ii][jj] << std::endl;
		}
	}

	return 0;
}