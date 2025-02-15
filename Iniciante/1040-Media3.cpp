#include <iostream>
#include <iomanip>
using namespace std;

#define PESO1 2
#define PESO2 3
#define PESO3 4
#define PESO4 1

int main(void)
{
	float n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;
	float media = ((n1 * PESO1) + (n2 * PESO2) + (n3 * PESO3) + (n4 * PESO4)) / (PESO1 + PESO2 + PESO3 + PESO4);

	cout << "Media: " << fixed << setprecision(1) << media << endl;
	cout << "Aluno ";

	if (media > 6.9)
	{
		cout << "aprovado.\n";
	}
	else if (media < 5.0)
	{
		cout << "reprovado.\n";
	}
	else
	{
		cout << "em exame.\n";
		float notaExame;
		cin >> notaExame;
		cout << "Nota do exame: " << notaExame << endl;
		float mediaFinal = (media + notaExame) / 2;
		cout << "Aluno " << (mediaFinal > 4.9 ? "aprovado.\n" : "reprovado.\n");
		cout << "Media final: " << fixed << setprecision(1) << mediaFinal << endl;
	}

	return 0;
}