#include <stdio.h>
#include <cmath>

const unsigned short BASE = 10;
unsigned short PARTE_INTEIRA = short(sqrt(BASE));
unsigned short ITERADOR = short(1 / (sqrt(BASE) - PARTE_INTEIRA));

int main() {
	unsigned short n;
	double resultado = 0.0;

	scanf("%hu", &n);

	if (n != 0) {
		resultado = ITERADOR;

		for (unsigned short i = 1; i <= n; ++i) {
			resultado = (i == n ? 0 : ITERADOR) + (1.0 / resultado);
		}
	}
	
	resultado += PARTE_INTEIRA;
	printf("%.10f\n", resultado);

	return 0;
}