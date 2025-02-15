#include <iostream>

int main()
{
	int A, N, S = 0;
	std::cin >> A >> N;
	while (N <= 0) std::cin >> N;
	for (int i = 0; i < N; i++) S += A + i;
	std::cout << S << '\n';
}