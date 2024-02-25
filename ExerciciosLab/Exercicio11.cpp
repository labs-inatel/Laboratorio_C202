#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int ni[50];
	int n, x;
	int i;
    float porcentagem = 0;
	int contx = 0;

	cin >> n;

	for(i = 0; i < n; i++)
	{
		cin >> ni[i];
	}

	cin >> x;

	for(i = 0; i < n; i++)
	{
		if(ni[i] == x)
		{
			contx++;
		}
	}

	porcentagem = (100.0 * contx) / n;

	cout << fixed << setprecision(2);
	cout << porcentagem << endl;

	return 0;
}
