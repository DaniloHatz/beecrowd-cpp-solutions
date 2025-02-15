#include <iostream>
using namespace std;

int main(void)
{
    int tamanho;
    cin >> tamanho;

    int listanumeros[500];

    for (int i = 0; i < tamanho; i++)
    {
        cin >> listanumeros[i];
    }

    int quantidade = 1;
    for (int i = 1; i < tamanho; i++)
    {
        if (listanumeros[i] != listanumeros[i - 1])
        {
            quantidade += 1;
        }
    }

    cout << quantidade << endl;

    return 0;
}