#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double soma = 0;
	double x;
	int i = 0;

	cin >> x;

	do
	{
		soma = soma + ((x + i) / (i + 1));
		i++;
	}
	while (soma <= 10000);

	cout << fixed << setprecision(2) << soma << endl;
	cout << i << ".00 Repetições" << endl;

	return 0;
}
