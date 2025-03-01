#include <iostream>

int main() {
	int grau;

	while (std::cin >> grau)
		if ((grau >= 0 && grau < 90))
			std::cout << "Bom Dia!!\n";
		else if ((grau >= 90 && grau < 180))
			std::cout << "Boa Tarde!!\n";
		else if ((grau >= 180 && grau < 270))
			std::cout << "Boa Noite!!\n";
		else if ((grau >= 270 && grau < 360))
			std::cout << "De Madrugada!!\n";
		else
			std::cout << "Bom Dia!!\n";

	return  0;
}