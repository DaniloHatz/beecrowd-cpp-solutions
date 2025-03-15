#include <iostream>
#include <string>
#include <map>

std::map<std::string, char> codigo{
	{".", 'a'},
	{"..", 'b'},
	{"...", 'c'},
	{". .", 'd'},
	{".. ..", 'e'},
	{"... ...", 'f'},
	{". . .", 'g'},
	{".. .. ..", 'h'},
	{"... ... ...", 'i'},
	{". . . .", 'j'},
	{".. .. .. ..", 'k'},
	{"... ... ... ...", 'l'},
	{". . . . .", 'm'},
	{".. .. .. .. ..", 'n'},
	{"... ... ... ... ...", 'o'},
	{". . . . . .", 'p'},
	{".. .. .. .. .. ..", 'q'},
	{"... ... ... ... ... ...", 'r'},
	{". . . . . . .", 's'},
	{".. .. .. .. .. .. ..", 't'},
	{"... ... ... ... ... ... ...", 'u'},
	{". . . . . . . .", 'v'},
	{".. .. .. .. .. .. .. ..", 'w'},
	{"... ... ... ... ... ... ... ...", 'x'},
	{". . . . . . . . .", 'y'},
	{".. .. .. .. .. .. .. .. ..", 'z'}
};

int main() {
	unsigned short qtEntradas;

	while (std::cin >> qtEntradas) {
		std::cin.ignore();

		for (unsigned short i = 0; i < qtEntradas; ++i) {
			std::string codigoEntrada;
			std::getline(std::cin, codigoEntrada);

			std::cout << codigo[codigoEntrada] << '\n';
		}
	}

	return 0;
}