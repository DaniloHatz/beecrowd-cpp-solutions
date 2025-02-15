#include <stdio.h>
#include <cmath>

int Maior(int num1, int num2) {
    int maior = ((num1 + num2 + std::abs(num1 - num2))) / 2;
    return maior;
}

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int maior = Maior(a, b);
    maior = Maior(maior, c);

    printf("%d eh o maior\n", maior);

    return 0;
}