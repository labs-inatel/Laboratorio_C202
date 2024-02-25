#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double volume (double r)
{
	double res;

	if (r > 0)
		res = (4.0/3.0) * 3.14 * pow(r, 3);

	return res;
}
int main()
{
	double r;
	double total;

	cin >> r;

	total = volume(r);

	cout << fixed << setprecision(2);
	cout << total << endl;

	return 0;
}
