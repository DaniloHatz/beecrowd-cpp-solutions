#include <iostream>
#include <cmath>

int main()
{
    short a, b, q, r;
    std::cin >> a >> b;

    q = a / b;
    r = a % b;

    if (r < 0)
    {
        if (b > 0)
        {
            r += b;
            q -= 1;
        }
        else
        {
            r -= b;
            q += 1;
        }
    }

    if (r < 0)
    {
        r += std::abs(b);
        q -= (a < 0) ? 1 : -1;
    }

    std::cout << q << " " << r << std::endl;
}