#include <iostream>
#include <iomanip>

int main() {
	int number, workedHours;
	double hourValue, salary;

	std::cin >> number >> workedHours >> hourValue;
	salary = workedHours * hourValue;

	std::cout << "NUMBER = " << number << '\n';
	std::cout << "SALARY = U$ " << std::fixed << std::setprecision(2) << salary << '\n';

	return 0;
}