#include <stdio.h>

int main() {
    unsigned short tamEstrada, distPedagios, custoKm, vlPedagio;
    unsigned int custoViagem = 0;
    scanf("%hu %hu %hu %hu", &tamEstrada, &distPedagios, &custoKm, &vlPedagio);

    custoViagem += tamEstrada * custoKm;
    custoViagem += (tamEstrada / distPedagios) * vlPedagio;

    printf("%d\n", custoViagem);

    return 0;
}