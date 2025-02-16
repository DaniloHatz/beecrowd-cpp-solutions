#include <stdio.h>

int main() {
    unsigned short entrada, maior = 0;
    do {
        scanf("%hu", &entrada);
        if (entrada > maior) maior = entrada;
    } while (entrada != 0);

    printf("%d\n", maior);

    return 0;
}