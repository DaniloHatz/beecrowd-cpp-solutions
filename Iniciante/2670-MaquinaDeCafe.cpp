#include <iostream>

int MelhorAndar(int a1, int a2) {
	if (a1 < a2)
		return a1;
	else
		return a2;
}

int main() {
	unsigned int andar1, andar2, andar3;
	unsigned int totalMinutosMaquinaAndar1, totalMinutosMaquinaAndar2, totalMinutosMaquinaAndar3;

	std::cin >> andar1 >> andar2 >> andar3;

	totalMinutosMaquinaAndar1 = (andar2 * 2) + (andar3 * 4);
	totalMinutosMaquinaAndar2 = (andar1 * 2) + (andar3 * 2);
	totalMinutosMaquinaAndar3 = (andar1 * 4) + (andar2 * 2);

	std::cout << MelhorAndar(totalMinutosMaquinaAndar1, MelhorAndar(totalMinutosMaquinaAndar2, totalMinutosMaquinaAndar3)) << '\n';

	return 0;
}