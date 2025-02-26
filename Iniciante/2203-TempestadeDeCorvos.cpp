#include <iostream>
#include <cmath>

int main() {
    int xF, yF, xI, yI, v, r1, r2;

    while (std::cin >> xF >> yF >> xI >> yI >> v >> r1 >> r2)
    {
        double dx = xI - xF;
        double dy = yI - yF;
        double D = sqrt(dx * dx + dy * dy);

        double finalDistance = D + 1.5 * v;

        double totalRange = r1 + r2;

        if (finalDistance <= totalRange)
            std::cout << "Y\n";
        else
            std::cout << "N\n";
    }

    return 0;
}