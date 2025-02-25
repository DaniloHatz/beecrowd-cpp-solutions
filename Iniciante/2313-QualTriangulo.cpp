#include <stdio.h>

int main() {
    int a, b, c;
    char ehRetangulo = 'N';
    scanf("%d %d %d", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalido\n");
        return 0;
    }

    if (a == b && a == c)
        printf("Valido-Equilatero\n");
    else if (a == b || a == c || b == c)
        printf("Valido-Isoceles\n");
    else
        printf("Valido-Escaleno\n");

    if (a * a + b * b == c * c
        || a * a + c * c == b * b
        || b * b + c * c == a * a)
        ehRetangulo = 'S';
    printf("Retangulo: %c\n", ehRetangulo);

    return 0;
}