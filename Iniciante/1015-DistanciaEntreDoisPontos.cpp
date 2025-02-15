#include <stdio.h>
#include <cmath>

double Distancia(double x1, double x2, double y1, double y2) {
    return std::sqrt((std::pow((x2 - x1), 2)) + (std::pow((y2 - y1), 2)));
}

int main() {
    double x1, x2, y1, y2;

    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);

    double distancia = Distancia(x1, x2, y1, y2);

    printf("%.4f\n", distancia);

    return 0;
}