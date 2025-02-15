#include <iostream>

int main()
{
	short t1, t2, t3, v1, v2;
	char c;
	std::cin >> t1 >> t2 >> t3;

	v1 = t2 - t1;
	v2 = t3 - t2;

	if (v1 < 0)
		if (v2 >= 0 || v2 > v1) c = ')';
		else c = '(';
	else if (v1 > 0)
		if (v2 <= 0 || v2 < v1) c = '(';
		else c = ')';
	else
		if (v2 > v1) c = ')';
		else c = '(';

	std::cout << ':' << c << '\n';
}