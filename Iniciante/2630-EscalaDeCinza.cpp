#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
	int qtCasosTeste;

	std::cin >> qtCasosTeste;

	for (int i = 1; i <= qtCasosTeste; ++i) {
		std::string metodoConversao;
		std::cin >> metodoConversao;
		int resultado;

		std::vector<int> rgb(3);
		std::cin >> rgb[0] >> rgb[1] >> rgb[2];

		if (metodoConversao == "min") {
			std::sort(rgb.begin(), rgb.end());
			resultado = rgb[0];
		}
		else if (metodoConversao == "max") {
			std::sort(rgb.begin(), rgb.end(), [](int a, int b) { return a > b; });
			resultado = rgb[0];
		}
		else if (metodoConversao == "eye") {
			double red = rgb[0] * 0.3;
			double green = rgb[1] * 0.59;
			double blue = rgb[2] * 0.11;
			resultado = red + green + blue;
		}
		else {
			resultado = (double(rgb[0]) + double(rgb[1]) + double(rgb[2])) / 3.0;
		}

		std::cout << "Caso #" << i << ": " << resultado << '\n';
	}

	return 0;
}