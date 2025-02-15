#include <iostream>

int main()
{
	double a[100];
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(1);
	for (unsigned short i = 0; i < 100; i++)
	{
		std::cin >> a[i];
		if (a[i] <= 10.0) std::cout << "A[" << i << "] = " << a[i] << '\n';
	}
}