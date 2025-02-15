#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool EhPrimo(unsigned short numero);

int main() {
    unsigned short qtMoedas;

    while (cin >> qtMoedas) {
        vector<unsigned short> moedas(qtMoedas);
        for (unsigned short i = 0; i < qtMoedas; i++) {
            if (!(cin >> moedas[i])) {
                return 0;
            }
        }

        unsigned short salto;
        if (!(cin >> salto)) {
            return 0;
        }

        unsigned short numero = 0;
        for (int i = qtMoedas - 1; i >= 0; i -= salto) {
            numero += moedas[i];
        }

        if (EhPrimo(numero)) {
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
        }
        else {
            cout << "Bad boy! I’ll hit you." << endl;
        }
    }

    return 0;
}

bool EhPrimo(unsigned short numero) {
    if (numero <= 1)
        return false;

    for (int i = 2; i <= std::sqrt(numero); ++i) {
        if (numero % i == 0)
            return false;
    }

    return true;
}
