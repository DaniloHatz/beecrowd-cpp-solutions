#include <iostream>
#include <vector>

int main() {
	unsigned short numQuadras;
	std::cin >> numQuadras;
	std::vector<std::vector<unsigned short>> cameras(numQuadras + 1, std::vector<unsigned short>(numQuadras + 1));

	for (unsigned short i = 0; i <= numQuadras; ++i)
		for (unsigned short j = 0; j <= numQuadras; ++j)
			std::cin >> cameras[i][j];

	for (unsigned short i = 0; i < numQuadras; ++i) {
		for (unsigned short j = 0; j < numQuadras; ++j) {
			std::cout << ((cameras[i][j] + cameras[i][j + 1] + cameras[i + 1][j] + cameras[i + 1][j + 1]) > 1 ? 'S' : 'U');
		}
		std::cout << '\n';
	}

	return 0;
}