#include <stdio.h>
#include <cmath>

const double MULTIPLICADOR = 1.25506;

int main() {
    unsigned int n;
    scanf("%u", &n);

    double minimo = n / (log(n));
    double maximo = MULTIPLICADOR * minimo;

    printf("%.1f %.1f\n", minimo, maximo);

    return 0;
}