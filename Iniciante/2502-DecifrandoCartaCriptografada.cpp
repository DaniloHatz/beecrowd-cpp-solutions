#include <iostream>
#include <string>
#include <limits>
#include <cctype>

int main() {
    int qtLetras, qtEntradas;
    while (std::cin >> qtLetras >> qtEntradas) {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        std::string letras1, letras2;
        std::getline(std::cin, letras1);
        std::getline(std::cin, letras2);
        
        for (int i = 0; i < qtEntradas; i++) {
            std::string frase;
            std::getline(std::cin, frase);
        
            for (int j = 0; j < (int)frase.size(); j++) {
                char letra = frase[j];
                bool isUpper = std::isupper(static_cast<unsigned char>(letra));
                char lowerX = std::tolower(static_cast<unsigned char>(letra));
            
                for (int k = 0; k < qtLetras; k++) {
                    if (lowerX == std::tolower(static_cast<unsigned char>(letras1[k]))) {
                        char letraCifra = letras2[k];

                        if (std::isalpha(static_cast<unsigned char>(letraCifra)))
                            letraCifra = isUpper ? std::toupper(static_cast<unsigned char>(letraCifra)) : std::tolower(static_cast<unsigned char>(letraCifra));
                        
                        letra = letraCifra;
                
                        break;
                    }
                    else if (lowerX == std::tolower(static_cast<unsigned char>(letras2[k]))) {
                        char letraCifra = letras1[k];

                        if (std::isalpha(static_cast<unsigned char>(letraCifra)))
                            letraCifra = isUpper ? std::toupper(static_cast<unsigned char>(letraCifra)) : std::tolower(static_cast<unsigned char>(letraCifra));
                        
                        letra = letraCifra;
                        
                        break;
                    }
                }
                std::cout << letra;
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }
    return 0;
}