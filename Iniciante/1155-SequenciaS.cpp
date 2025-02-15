#include <iostream>

int main()
{
	float S = 0.0f;
	for (int i = 1; i <= 100; i++) S += 1.0f / i;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << S << '\n';
}