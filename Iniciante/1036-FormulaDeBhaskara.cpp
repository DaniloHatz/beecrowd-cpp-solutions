#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
	double a, b, c;
	cin >> a >> b >> c;

	double delta = pow(b, 2) - (4 * a * c);
	
	if (a == 0 || delta < 0)
	{
		cout << "Impossivel calcular\n";
		return 0;
	}

	double r1 = (- b + sqrt(delta)) / (2 * a);
	double r2 = (- b - sqrt(delta)) / (2 * a);

	cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
	cout << "R2 = " << fixed << setprecision(5) << r2 << endl;

	system("pause");

	return 0;
}