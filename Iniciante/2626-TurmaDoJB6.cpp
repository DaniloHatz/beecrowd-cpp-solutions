#include <iostream>
#include <string>

const std::string SAIDA_DIOGO = "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
const std::string SAIDA_LEO = "Iron Maiden's gonna get you, no matter how far!\n";
const std::string SAIDA_PEPPER = "Urano perdeu algo muito precioso...\n";
const std::string SAIDA_EMPATE = "Putz vei, o Leo ta demorando muito pra jogar...\n";

int main() {
	std::string entradaDiogo, entradaLeo, entradaPepper;

	while (std::cin >> entradaDiogo >> entradaLeo >> entradaPepper) {
		if (entradaDiogo == entradaLeo && entradaDiogo == entradaPepper)
			std::cout << SAIDA_EMPATE;
		else if (entradaDiogo != entradaLeo && entradaDiogo != entradaPepper && entradaLeo != entradaPepper)
			std::cout << SAIDA_EMPATE;

		else if (entradaDiogo == "pedra" && (entradaLeo == "tesoura" || entradaPepper == "tesoura")) {
			if (entradaLeo == "pedra" || entradaPepper == "pedra") std::cout << SAIDA_EMPATE;
			else std::cout << SAIDA_DIOGO;
		}
		else if (entradaDiogo == "papel" && (entradaLeo == "pedra" || entradaPepper == "pedra")) {
			if (entradaLeo == "papel" || entradaPepper == "papel") std::cout << SAIDA_EMPATE;
			else std::cout << SAIDA_DIOGO;
		}
		else if (entradaDiogo == "tesoura" && (entradaLeo == "papel" || entradaPepper == "papel")) {
			if (entradaLeo == "tesoura" || entradaPepper == "tesoura") std::cout << SAIDA_EMPATE;
			else std::cout << SAIDA_DIOGO;
		}

		else if (entradaLeo == "pedra" && (entradaDiogo == "tesoura" || entradaPepper == "tesoura")) {
			if (entradaDiogo == "pedra" || entradaPepper == "pedra") std::cout << SAIDA_EMPATE;
			else std::cout << SAIDA_LEO;
		}
		else if (entradaLeo == "papel" && (entradaDiogo == "pedra" || entradaPepper == "pedra")) {
			if (entradaDiogo == "papel" || entradaPepper == "papel") std::cout << SAIDA_EMPATE;
			else std::cout << SAIDA_LEO;
		}
		else if (entradaLeo == "tesoura" && (entradaDiogo == "papel" || entradaPepper == "papel")) {
			if (entradaDiogo == "tesoura" || entradaPepper == "tesoura") std::cout << SAIDA_EMPATE;
			else std::cout << SAIDA_LEO;
		}

		else if (entradaPepper == "pedra" && (entradaLeo == "tesoura" || entradaDiogo == "tesoura")) {
			if (entradaLeo == "pedra" || entradaDiogo == "pedra") std::cout << SAIDA_EMPATE;
			else std::cout << SAIDA_PEPPER;
		}
		else if (entradaPepper == "papel" && (entradaLeo == "pedra" || entradaDiogo == "pedra")) {
			if (entradaLeo == "papel" || entradaDiogo == "papel") std::cout << SAIDA_EMPATE;
			else std::cout << SAIDA_PEPPER;
		}
		else if (entradaPepper == "tesoura" && (entradaLeo == "papel" || entradaDiogo == "papel")) {
			if (entradaLeo == "tesoura" || entradaDiogo == "tesoura") std::cout << SAIDA_EMPATE;
			else std::cout << SAIDA_PEPPER;
		}
	}

	return 0;
}