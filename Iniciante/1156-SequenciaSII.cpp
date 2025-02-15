#include <iostream>

int main()
{
	float S = 0.0;
	int k = 1;
	for (int i = 1; i <= 39; i += 2)
	{
		S += float(i) / float(k);
		k *= 2;
	}
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << S << '\n';
}