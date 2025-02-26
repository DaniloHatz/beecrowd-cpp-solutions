#include <stdio.h>
#include <cstring>

int main() {
    unsigned int entradas;
    char vilao[26];

    scanf("%i", &entradas);
    for (unsigned int i = 0; i < entradas; ++i)
    {
        scanf("%s", vilao);
        if (std::strcmp(vilao, "Batmain") != 0)
            printf("Y\n");
        else
            printf("N\n");
    }


    return 0;
}