#include <iostream>
#include <string>
#include <vector>

int main() {
	int qtPalavras, qtConsultas;
	std::string palavraConsulta;

	std::cin >> qtPalavras;

	std::vector<std::string> palavrasArmazenadas(qtPalavras);

	for (int i = 0; i < qtPalavras; ++i)
		std::cin >> palavrasArmazenadas[i];

	std::cin >> qtConsultas;

	for (int i = 0; i < qtConsultas; ++i) {
		std::cin >> palavraConsulta;

		int qtPalavrasEncontradas = -1, tamanhoMaiorPalavra = 0;
		
		for (std::string palavraAtual : palavrasArmazenadas) {
			if (!palavraAtual.find(palavraConsulta)) {
				
				if (qtPalavrasEncontradas == -1) ++qtPalavrasEncontradas;
				
				++qtPalavrasEncontradas;
				
				if (palavraAtual.size() > tamanhoMaiorPalavra)
					tamanhoMaiorPalavra = palavraAtual.size();
			}
		}

		if (qtPalavrasEncontradas == -1)
			std::cout << qtPalavrasEncontradas << '\n';
		else
			std::cout << qtPalavrasEncontradas << ' ' << tamanhoMaiorPalavra << '\n';
	}

	return 0;
}