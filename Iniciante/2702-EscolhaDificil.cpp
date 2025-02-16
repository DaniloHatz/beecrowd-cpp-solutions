#include <stdio.h>

int main() {
    unsigned short qtFrango, qtBife, qtMassa, qtPassageirosFrango, qtPassageirosBife, qtPassageirosMassa, totalPassageirosSemRefeicao = 0;
    
    scanf("%hu %hu %hu %hu %hu %hu",
        &qtFrango, &qtBife, &qtMassa, &qtPassageirosFrango, &qtPassageirosBife, &qtPassageirosMassa);

    totalPassageirosSemRefeicao += qtPassageirosFrango > qtFrango ? qtPassageirosFrango - qtFrango : 0;
    totalPassageirosSemRefeicao += qtPassageirosBife > qtBife ? qtPassageirosBife - qtBife : 0;
    totalPassageirosSemRefeicao += qtPassageirosMassa > qtMassa ? qtPassageirosMassa - qtMassa : 0;

    printf("%d\n", totalPassageirosSemRefeicao);

    return 0;
}