#include <iostream>

int main()
{
	int v[10];
	for (unsigned short i = 0; i < 10; i++)
	{
		std::cin >> v[i];
		if (v[i] <= 0) v[i] = 1;
		std::cout << "X[" << i << "] = " << v[i] << '\n';
	}
}