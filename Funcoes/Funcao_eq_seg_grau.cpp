#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
	int delta;

	delta = ((pow(b, 2)) - (4 * a * c));

	if(delta >= 0)
	{
		x1 = (- b - sqrt(delta)) / (2 * a);
		x2 = (- b + sqrt(delta)) / (2 * a);

		return 0;
	}
	else if (delta < 0)
	{
		return 1;
	}
};
int main()
{
	float a, b, c;
	float x1, x2;
	int resultado;

	cin >> a >> b >> c;

	if (a != 0)
	{
		resultado = calc_raizes(a, b, c, x1, x2);

		if(resultado == 0)
		{
			if (x1 < x2)
			{
				cout << fixed << setprecision(2);
				cout << "x1 = " << x1 << endl;
				cout << "x2 = " << x2 << endl;
			}
			else if (x1 > x2)
			{
				cout << fixed << setprecision(2);
				cout << "x1 = " << x1 << endl;
				cout << "x2 = " << x2 << endl;
			}
			else if (x1 == x2)
			{
				cout << fixed << setprecision(2);
				cout << "x = " << x1 << endl;
			}
		}
		else if (resultado == 1)
		{
			cout << "Nao ha raizes reais" << endl;
		}
	}

	return 0;
}
