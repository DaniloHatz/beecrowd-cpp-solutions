#include <iostream>
#include <string>
#include <cmath>

int main(void)
{
    int casos;
    std::cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        int larguraRetangulo, alturaRetangulo, xRetangulo, yRetangulo;
        std::cin >> larguraRetangulo >> alturaRetangulo >> xRetangulo >> yRetangulo;

        std::string magia;
        int nivelMagia, xCentroExplosao, yCentroExplosao;
        std::cin >> magia >> nivelMagia >> xCentroExplosao >> yCentroExplosao;

        int dano, alcance;

        if (magia == "fire")
        {
            dano = 200;
            alcance = (nivelMagia == 1) ? 20 : (nivelMagia == 2) ? 30 : 50;
        }
        else if (magia == "water")
        {
            dano = 300;
            alcance = (nivelMagia == 1) ? 10 : (nivelMagia == 2) ? 25 : 40;
        }
        else if (magia == "earth")
        {
            dano = 400;
            alcance = (nivelMagia == 1) ? 25 : (nivelMagia == 2) ? 55 : 70;
        }
        else
        {
            dano = 100;
            alcance = (nivelMagia == 1) ? 18 : (nivelMagia == 2) ? 38 : 60;
        }

        bool dentroAlcance = false;

        for (int x = xRetangulo; x <= xRetangulo + larguraRetangulo && !dentroAlcance; x++)
            for (int y = yRetangulo; y <= yRetangulo + alturaRetangulo && !dentroAlcance; y++)
                if (std::sqrt(std::pow(x - xCentroExplosao, 2) + std::pow(y - yCentroExplosao, 2)) <= alcance)
                    dentroAlcance = true;

        if (dentroAlcance)
            std::cout << dano << std::endl;
        else
            std::cout << 0 << std::endl;
    }

    return 0;
}
