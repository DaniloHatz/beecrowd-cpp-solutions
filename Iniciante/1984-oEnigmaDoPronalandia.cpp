#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	unsigned long long n;
	std::cin >> n;

	std::string nS = std::to_string(n);
	std::reverse(nS.begin(), nS.end());

    std::cout << nS << '\n';

}