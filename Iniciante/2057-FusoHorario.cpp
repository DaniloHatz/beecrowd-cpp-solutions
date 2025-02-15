#include <iostream>

int main()
{
	short s, t, f, c;
	std::cin >> s >> t >> f;
	c = ((s + t) % 24) + (f);
	if (c < 0) c += 24;
	std::cout << c << '\n';
}