#include <iostream>
#include <string>

const std::string MUSICAS[11]{
	"PROXYCITY",
	"P.Y.N.G.",
	"DNSUEY!",
	"SERVERS",
	"HOST!",
	"CRIPTONIZE",
	"OFFLINE DAY",
	"SALT",
	"ANSWER!",
	"RAR?",
	"WIFI ANTENNAS"
};

int main() {
	int qtEntradas, entrada1, entrada2;

	std::cin >> qtEntradas;

	for (int i = 0; i < qtEntradas; ++i) {
		std::cin >> entrada1 >> entrada2;
		std::cout << MUSICAS[entrada1 + entrada2] << '\n';
	}

	return 0;
}