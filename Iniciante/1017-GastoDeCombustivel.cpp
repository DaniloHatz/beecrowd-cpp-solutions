#include <stdio.h>

const double consumo = 12.0;

int main() {
    int tempoViagem, velocidadeMedia;
    scanf("%d", &tempoViagem);
    scanf("%d", &velocidadeMedia);

    double consumoTotal = (tempoViagem * velocidadeMedia) / consumo;

    printf("%.3f\n", consumoTotal);

    return 0;
}