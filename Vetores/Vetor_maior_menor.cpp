#include <iostream>

using namespace std;

int main()
{
	int i, n;
	int vetor[100];
	int maior = -500;
	int menor = 10000;
	int posmaior = -50;
	int posmenor = 101;

	cin >> n;

	for(i = 0; i < n; i++)
	{
		cin >> vetor[i];
	}

	for(i = 0; i < n; i++)
	{
		if (vetor[i] > maior)
		{
			maior = vetor[i];
			posmaior = i;
		}
		if(vetor[i] < menor)
		{
			menor = vetor[i];
			posmenor = i;
		}
	}

	cout << "Pos Menor: " << posmenor << endl;
	cout << "Valor Menor: " << menor << endl;
	cout << "Pos Maior: " << posmaior << endl;
	cout << "Valor Maior: " << maior << endl;

	return 0;
}
