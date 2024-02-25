#include <iostream>

using namespace std;

struct dados
{
	int numeros;
};

int main()
{
	dados inf[10];
	int x;
	int soma = 0;
	int i;

	cin >> x;

	for (i = 0; i < x; i++)
	{
		cin >> inf[i].numeros;

		if (inf[i].numeros % 2 == 0 && inf[i].numeros > 0)
			soma = soma + inf[i].numeros;
	}

	cout << soma << endl;
	
	return 0;
}
