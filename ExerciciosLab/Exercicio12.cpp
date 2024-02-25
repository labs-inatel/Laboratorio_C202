#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int i;
	double n, x, total[20], soma = 0, sub = 0;

	cin >> n >> x;

	for(i = 0; i < n; i++)
	{
		total[i] = ( n - i * pow(x, i + 1) / (i + 1)) - (n - (i + 1) * pow(x, i + 2)/ (i + 2));

		soma = soma + total[i];
	}

	cout << fixed << setprecision(4);
	cout << soma << endl;
	return 0;
}
