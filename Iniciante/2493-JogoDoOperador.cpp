#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool calculo(unsigned long long op1, unsigned long long op2, unsigned long long result, char simbolo) {
	switch (simbolo) {
	case '+':
		return op1 + op2 == result;
		break;
	case '-':
		return op1 - op2 == result;
		break;
	case '*':
		return op1 * op2 == result;
		break;
	case 'I':
		return (op1 + op2 != result
			&& op1 - op2 != result
			&& op1 * op2 != result);
		break;
	default:
		return 0;
	}
}

int main() {
	unsigned short entradas;
	std::vector<unsigned long long> operador1;
	std::vector<unsigned long long> operador2;
	std::vector<unsigned long long> resultado;
	std::vector<std::string> desclassificados;
	char simbolo;

	while (std::cin >> entradas) {
		operador1.resize(entradas);
		operador2.resize(entradas);
		resultado.resize(entradas);

		for (unsigned short i = 0; i < entradas; ++i)
			std::cin >> operador1[i] >> operador2[i] >> simbolo >> resultado[i];

		for (unsigned short i = 0; i < entradas; ++i)
		{
			std::string jogador;
			unsigned short indice;
			std::cin >> jogador >> indice >> simbolo;
			if (!calculo(operador1[indice - 1], operador2[indice - 1], resultado[indice - 1], simbolo))
				desclassificados.push_back(jogador);
		}

		if (desclassificados.empty())
			std::cout << "You Shall All Pass!\n";
		else if (desclassificados.size() == entradas)
			std::cout << "None Shall Pass!\n";
		else {
			std::sort(desclassificados.begin(), desclassificados.end());
			for (unsigned short i = 0; i < desclassificados.size(); ++i)
				std::cout << (i > 0 ? " " : "") << desclassificados[i];
			std::cout << '\n';
		}

		operador1.clear();
		operador2.clear();
		resultado.clear();
		desclassificados.clear();
	}

	return 0;
}