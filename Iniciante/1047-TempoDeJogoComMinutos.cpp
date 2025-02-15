#include <iostream>

int main(void)
{
    unsigned short horaInicio, minutoInicio, horaFim, minutoFim, resultadoHora, resultadoMinuto;
    std::cin >> horaInicio >> minutoInicio >> horaFim >> minutoFim;

    unsigned short inicioTotalMinutos = horaInicio * 60 + minutoInicio;
    unsigned short fimTotalMinutos = horaFim * 60 + minutoFim;

    if (fimTotalMinutos <= inicioTotalMinutos) {
        fimTotalMinutos += 24 * 60;
    }

    unsigned short duracaoTotalMinutos = fimTotalMinutos - inicioTotalMinutos;

    resultadoHora = duracaoTotalMinutos / 60;
    resultadoMinuto = duracaoTotalMinutos % 60;

    if (resultadoHora == 0 && resultadoMinuto == 0) {
        resultadoHora = 24;
    }

    std::cout << "O JOGO DUROU " << resultadoHora << " HORA(S) E " << resultadoMinuto << " MINUTO(S)\n";

    return 0;
}
