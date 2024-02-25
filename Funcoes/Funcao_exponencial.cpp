#include <iostream>
#include <cmath>

using namespace std;

int potencia(int a, int b)
{
	int res = 1;
	int i;

	for (i = 0; i < b; i++)
	{
		res = res * a;
	}
	return res;
}

int main()
{
	int x, y;
	int total;

	cin >> x >> y;

	total = potencia(x, y);

	cout << total;

	return 0;
}
