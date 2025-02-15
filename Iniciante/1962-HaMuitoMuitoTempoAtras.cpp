#include <iostream>

const unsigned ANO = 2015;

int main()
{
	unsigned n;
	int t;
	std::cin >> n;
	for (unsigned i = 0; i < n; ++i)
	{
		std::cin >> t;
		t = ANO - t;
		std::cout << (t > 0 ? t : (t * -1) + 1) << ' ' << (t > 0 ? 'D' : 'A') << ".C.\n";
	}
}