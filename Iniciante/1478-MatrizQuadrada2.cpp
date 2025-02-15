#include <iostream>

int main()
{
    unsigned short n;

    for (std::cin >> n; n != 0; std::cin >> n)
    {
        for (unsigned char i = 0; i < n; i++)
        {
            for (unsigned char j = 0; j < n; j++)
            {
                std::cout.width(3);
                std::cout << std::right;
                std::cout << (i > j ? i - j + 1 : j - i + 1);
                if (j < n - 1) std::cout << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}