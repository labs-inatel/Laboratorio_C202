#include <iostream>

using namespace std;

int main ()
{
	int valores [100];
	int numeros = 0;
	int i = 0;
	int x;
	int n;

	cin >> n;

	while ( n != 0)
	{
		numeros = valores[i];
		cin >> n;
	}

	cin >> x;
	
	for (i = 0; i < n; i++)
	{
		if (valores[i] == x)
		{
			cout << "Elemento " << x << " encontrado na posicao" << i << endl;
		}
		else if (valores[i] != x)
			cout << "Elemento " << x << " nao foi encontrado" << endl;
	}


	return 0;
}
