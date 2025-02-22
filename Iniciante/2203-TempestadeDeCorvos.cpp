#include <iostream>
#include <cmath>

int main() {
    int xF, yF, xI, yI, v, r1, r2;
    std::cin >> xF >> yF >> xI >> yI >> v >> r1 >> r2;

    double dx = xI - xF;
    double dy = yI - yF;
    double D = sqrt(dx * dx + dy * dy);

    double finalDistance = D + 1.5 * v;

    std::cout << (finalDistance <= r1 + r2 ? 'Y' : 'N') << "\n";

    return 0;
}