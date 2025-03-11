#include <iostream>
#include <string>
#include <vector>

int main() {
	unsigned int qtEntradas;
	std::vector<std::string> diasSemana{
		"FRIDAY",
		"MONDAY",
		"MONDAY",
		"TUESDAY",
		"TUESDAY",
		"WEDNESDAY",
		"WEDNESDAY",
		"THURSDAY",
		"THURSDAY",
		"FRIDAY"
	};

	std::cin >> qtEntradas;
	for (unsigned int i = 0; i < qtEntradas; ++i) {
		std::string placa;
		std::cin >> placa;

		if (placa.size() != 8) std::cout << "FAILURE";
		else if (std::isdigit(placa.at(0)) || std::isdigit(placa.at(1)) || std::isdigit(placa.at(2))) std::cout << "FAILURE";
		else if (!std::isupper(placa.at(0)) || !std::isupper(placa.at(1)) || !std::isupper(placa.at(2))) std::cout << "FAILURE";
		else if (placa.at(3) != '-') std::cout << "FAILURE";
		else if (!std::isdigit(placa.at(4)) || !std::isdigit(placa.at(5)) || !std::isdigit(placa.at(6)) || !std::isdigit(placa.at(7))) std::cout << "FAILURE";
		else std::cout << diasSemana[std::stoi(std::string(1, placa.at(7)))];

		std::cout << '\n';
	}

	return 0;
}