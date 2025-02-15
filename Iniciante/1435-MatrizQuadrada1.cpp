#include <iostream>

int main()
{
    unsigned short n;
    while (std::cin >> n && n != 0)
    {
        for (unsigned char i = 0; i < n; i++)
        {
            for (unsigned char j = 0; j < n; j++)
            {
                unsigned short valor = (i < j ? i : j);
                valor = (valor < n - i - 1 ? valor : n - i - 1);
                valor = (valor < n - j - 1 ? valor : n - j - 1);

                if (j > 0) std::cout << " ";
                std::cout.width(3);
                std::cout << std::right << valor + 1;
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}