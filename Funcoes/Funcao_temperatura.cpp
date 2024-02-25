#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void converte (float f, float &c, float &k)
{
	c = (f - 32)*5/9;
	k = c + 273;
};
int main()
{
	float f;
	float celsius;
	float kelvin;

	cin >> f;

	converte(f, celsius, kelvin);

	cout << fixed << setprecision(2);
	cout << "Celsius: " << celsius << endl;
	cout << "Kelvin: " << kelvin << endl;

	return 0;
}
