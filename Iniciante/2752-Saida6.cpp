#include <stdio.h>

int main(void)
{
    char entrada[50] = "AMO FAZER EXERCICIO NO URI";

    printf("<%s>\n", entrada);
    printf("<%30s>\n", entrada);
    printf("<%.20s>\n", entrada);
    printf("<%-20s>\n", entrada);
    printf("<%-30s>\n", entrada);
    printf("<%.30s>\n", entrada);
    printf("<%30.20s>\n", entrada);
    printf("<%-30.20s>\n", entrada);

    return 0;
}