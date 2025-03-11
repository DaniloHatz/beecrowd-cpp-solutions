#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
	int qtTrabalhos;
	std::vector<int> grauDificuldadeTrabalhos;

	while (std::cin >> qtTrabalhos) {
		grauDificuldadeTrabalhos.resize(qtTrabalhos);

		for (int i = 0; i < qtTrabalhos; ++i)
			std::cin >> grauDificuldadeTrabalhos[i];

		std::vector<long long> prefixSum(qtTrabalhos + 1, 0LL);
		for (int i = 1; i <= qtTrabalhos; ++i)
			prefixSum[i] = prefixSum[i - 1] + grauDificuldadeTrabalhos[i - 1];

		long long melhorDiferenca = std::numeric_limits<long long>::max();

		for (int i = 1; i < qtTrabalhos; ++i) {
			long long somaParteInicial = prefixSum[i];
			long long somaParteFinal = prefixSum[qtTrabalhos] - prefixSum[i];
			long long diferenca = std::llabs(somaParteInicial - somaParteFinal);

			if (diferenca < melhorDiferenca)
				melhorDiferenca = diferenca;
		}
		std::cout << melhorDiferenca << '\n';
	}

	return 0;
}