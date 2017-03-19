#include <thrust/host_vector.h>
#include <thrust/device_vector.h>
#include <iostream>

int main(void)
{
	const int elem_num = 10;
	thrust::host_vector<int> H(elem_num);

	// initialize individual elements
	for (int i = 0; i < H.size(); i++)
	{
		H[i] = i;
	}

	// copy host_vector H to device_vector D
	thrust::device_vector<int> D = H;

	// print values of D
	for (int i = 0; i < D.size(); i++)
	{
		std::cout << "D[" << i << "] = " << D[i] << std::endl;
	}

	return 0;
}