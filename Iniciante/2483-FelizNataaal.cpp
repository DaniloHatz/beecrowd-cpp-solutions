#include <stdio.h>

int main() {
    unsigned int i;
    scanf("%i", &i);
    printf("Feliz nat");
    for (unsigned int j = 0; j < i; ++j)
        printf("a");
    printf("l!\n");

    return 0;
}