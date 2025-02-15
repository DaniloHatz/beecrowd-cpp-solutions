#include <iostream>

int main()
{
	int x, y, resultado = 0;;
	std::cin >> x >> y;
	if (x > y)
	{
		int temp;
		temp = y;
		y = x;
		x = temp;
	}
	while (x <= y)
	{
		if (x % 13 != 0) resultado += x;
		x++;
	}
	std::cout << resultado << std::endl;
}