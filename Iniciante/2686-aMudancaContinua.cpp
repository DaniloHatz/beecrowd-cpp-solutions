#include <iostream>
#include <iomanip>

unsigned int HORA_BASE = 21600;
unsigned int SEGUNDOS_GRAU = 240;
unsigned int MINUTOS_EM_HORA = 60;
unsigned int SEGUNDOS_EM_HORA = 3600;

int main() {
	double grau;

	while (std::cin >> grau) {
		if (grau == 360) grau = 0;

		double deslocamento = grau * SEGUNDOS_GRAU;
		unsigned int tempoTotal = HORA_BASE + static_cast<unsigned int>(deslocamento);
		tempoTotal %= 86400;
		
		int horas = tempoTotal / SEGUNDOS_EM_HORA;
		int minutos = (tempoTotal % SEGUNDOS_EM_HORA) / MINUTOS_EM_HORA;
		int segundos = tempoTotal % MINUTOS_EM_HORA;

		if ((grau >= 0 && grau < 90))
			std::cout << "Bom Dia!!\n";
		else if ((grau >= 90 && grau < 180))
			std::cout << "Boa Tarde!!\n";
		else if ((grau >= 180 && grau < 270))
			std::cout << "Boa Noite!!\n";
		else if ((grau >= 270 && grau < 360))
			std::cout << "De Madrugada!!\n";

		std::cout << std::setw(2) << std::setfill('0') << (horas < 24 ? horas : 0) << ':'
			<< std::setw(2) << std::setfill('0') << minutos << ':'
			<< std::setw(2) << std::setfill('0') << segundos << '\n';
	}

	return  0;
}