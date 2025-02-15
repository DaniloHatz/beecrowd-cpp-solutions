#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void ValidaTriangulo(float, float, float);

int main(void)
{
    float entrada1, entrada2, entrada3;
    cin >> entrada1 >> entrada2 >> entrada3;

    float entradas[3] = { entrada1, entrada2, entrada3 };
    sort(entradas, entradas + 3, greater<float>());

    ValidaTriangulo(entradas[0], entradas[1], entradas[2]);

    return 0;
}

void ValidaTriangulo(float a, float b, float c)
{
    if (a >= b + c) {
        cout << "NAO FORMA TRIANGULO\n";
        return;
    }

    float a2 = pow(a, 2), b2 = pow(b, 2), c2 = pow(c, 2);

    if (a2 == b2 + c2)
        cout << "TRIANGULO RETANGULO\n";
    else if (a2 > b2 + c2)
        cout << "TRIANGULO OBTUSANGULO\n";
    else
        cout << "TRIANGULO ACUTANGULO\n";

    if (a == b && b == c)
        cout << "TRIANGULO EQUILATERO\n";
    else if (a == b || a == c || b == c)
        cout << "TRIANGULO ISOSCELES\n";
}