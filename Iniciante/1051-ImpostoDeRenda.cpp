#include <iostream>
#include <iomanip>

int main() {
    double salario;
    std::cin >> salario;

    double imposto = 0.0;

    if (salario > 4500.00) {
        imposto += (salario - 4500.00) * 0.28;
        salario = 4500.00;
    }
    if (salario > 3000.00) {
        imposto += (salario - 3000.00) * 0.18;
        salario = 3000.00;
    }
    if (salario > 2000.00) {
        imposto += (salario - 2000.00) * 0.08;
    }

    if (imposto == 0.0) {
        std::cout << "Isento" << std::endl;
    }
    else {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "R$ " << imposto << std::endl;
    }

    return 0;
}
