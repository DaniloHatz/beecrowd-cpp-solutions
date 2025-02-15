#include <iostream>

int main()
{
    unsigned n, tamanhoMuralha, qtMuralhas = 0, tmP, tmM, tmG, ixP = 0, ixM = 0, ixG = 0;
    std::cin >> n >> tamanhoMuralha;
    char* ts = new char[n];
    unsigned* ms = new unsigned[n];
    
    for (unsigned i = 0; i < n; ++i)
    {
        std::cin >> ts[i];
        ms[i] = tamanhoMuralha;
    }

    std::cin >> tmP >> tmM >> tmG;

    for (unsigned i = 0; i < n; ++i)
    {

        if (ts[i] == 'P')
        {
            while (tmP > ms[ixP]) ++ixP;

            ms[ixP] -= tmP;
        }

        else if (ts[i] == 'M')
        {
            while (tmM > ms[ixM]) ++ixM;

            ms[ixM] -= tmM;
        }

        else
        {
            while (tmG > ms[ixG]) ++ixG;

            ms[ixG] -= tmG;
        }
    }
    for (unsigned i = 0; i < n; ++i)
        if (ms[i] != tamanhoMuralha) ++qtMuralhas;
    std::cout << qtMuralhas << '\n';
    delete[] ts;
    delete[] ms;
}