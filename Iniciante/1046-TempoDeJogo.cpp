#include <iostream>

int main(void)
{
	unsigned short horaInicio, horaFim, resultado;
	std::cin >> horaInicio >> horaFim;

	resultado = horaInicio > horaFim ? (horaFim + 12) - (horaInicio - 12) : horaFim - horaInicio;
	if (resultado == 0)
		resultado = 24;
	std::cout << "O JOGO DUROU " << resultado << " HORA(S)\n";

	return 0;
}