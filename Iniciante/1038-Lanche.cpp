#include<iostream>
#include <iomanip>

int main()
{
	float lanches[5] = { 4.00, 4.50, 5.00, 2.00, 1.50 };
	int item, quantidade;
	std::cin >> item >> quantidade;
	std::cout << "Total: R$ " << std::fixed << std::setprecision(2) << lanches[item - 1] * quantidade << std::endl;;

	return 0;
}