#include <istream>
#include <iostream>

using namespace std;

int main ()
{

	double soma;
	double x;
	int i;

	i = 0;

	cin >> x;

	do
	{
		soma = soma + ((x + i) / (i + 1));
		i++;

	}
	while (S < 10000);

	cout << fixed << setprecision (2) << soma << endl;

	return 0;

}
