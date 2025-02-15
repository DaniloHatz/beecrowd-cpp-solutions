#include <iostream>
#include <string>

int main()
{
	std::string dia;
	unsigned short diaInicio, diaFim, horaInicio, horaFim, minutoInicio, minutoFim, segundoInicio, segundoFim, diaResultado, horaResultado, minutoResultado, segundoResultado;
	char sep;

	std::cin >> dia >> diaInicio;
	std::cin >> horaInicio >> sep >> minutoInicio >> sep >> segundoInicio;
	std::cin >> dia >> diaFim;
	std::cin >> horaFim >> sep >> minutoFim >> sep >> segundoFim;

	diaResultado = diaFim - diaInicio - (horaInicio > horaFim || (horaInicio == horaFim && minutoInicio > minutoFim) || (horaInicio == horaFim && minutoInicio == minutoFim && segundoInicio > segundoFim) ? 1 : 0);
	std::cout << diaResultado << " dia(s)\n";

	horaResultado = (horaInicio > horaFim || (horaInicio == horaFim && minutoInicio > minutoFim) ? 24 : 0) + horaFim - horaInicio - (minutoInicio > minutoFim || (minutoInicio == minutoFim && segundoInicio > segundoFim) ? 1 : 0);
	std::cout << horaResultado << " hora(s)\n";

	minutoResultado = (minutoInicio > minutoFim ? 60 : 0) + minutoFim - minutoInicio - (segundoInicio > segundoFim ? 1 : 0);
	std::cout << minutoResultado << " minuto(s)\n";

	segundoResultado = (segundoInicio > segundoFim ? 60 : 0) + segundoFim - segundoInicio;
	std::cout << segundoResultado << " segundo(s)\n";

	return 0;
}