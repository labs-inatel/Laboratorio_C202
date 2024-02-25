#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float calc_delta(float a, float b, float c)
{
	int valor;

	if (a != 0)
		valor = ((pow(b, 2)) - (4 * a * c));

	return valor;
}
int main ()
{
	float a, b, c;
	float delta;

	cin >> a >> b >> c;

	if (a != 0)
		delta = calc_delta(a, b, c);

	cout << fixed << setprecision(2);
	cout << "delta = " << delta << endl;

	return 0;
}

