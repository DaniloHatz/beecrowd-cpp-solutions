#include <iostream>
#include <iomanip>

const double PI = 3.14159;
const double DIV = 4.0 / 3.0;
const double FORMULA_PARTE1 = PI * DIV;

double ElevaA(double raiz, double expoente) {
	double tmp = raiz;
	for (unsigned int i = 1; i < expoente; ++i)
		tmp *= raiz;

	return tmp;
}

int main() {
	double raio, volume;
	std::cin >> raio;
	volume = (ElevaA(raio, 3)) *FORMULA_PARTE1;

	std::cout << "VOLUME = " << std::fixed << std::setprecision(3) << volume << '\n';

	return 0;
}