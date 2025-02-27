#include <iostream>

int main() {
	unsigned short qtGamePlays;
	unsigned int id;

	while (std::cin >> qtGamePlays >> id) {
		unsigned int idGamePlay;
		unsigned short tipoGamePlay;
		unsigned short qtGamePlaysPublicados = 0;
		for (unsigned short i = 0; i < qtGamePlays; ++i) {
			std::cin >> idGamePlay >> tipoGamePlay;
			if (idGamePlay == id && tipoGamePlay == 0)
				++qtGamePlaysPublicados;
		}
		std::cout << qtGamePlaysPublicados << '\n';
	}

	return 0;
}