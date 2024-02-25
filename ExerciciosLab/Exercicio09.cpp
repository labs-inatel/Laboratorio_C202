#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int M, ano, n, i, j, T;
	double E, quantia, maior, menor, abaixo, acima, porcentagem, porcentagem1;
	double notas[100];
	char nome[100];
	char classificacao;

	T = 0;
	M = 0;
	E = 0;
	acima = 0;
	abaixo = 0;
	maior = 0;
	menor = 10000000;

	cin >> n;

	for(i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(nome, 100);
		cin >> ano;
		cin >> classificacao;

		for(j = 0; j < n ; j++)
		{
			cin >> notas[i];
		}

		cin >> quantia;

		if(notas[i] > 8.0)
			acima++;

		if(quantia > maior)
			maior = quantia;

		if(quantia < menor)
			menor = quantia;

		if (classificacao == 'E')
			E = quantia;

		if (classificacao == 'T')
		{
			T++;
			
			if(notas[i] < 5.0)
				abaixo++;
		}

		if (classificacao == 'M')
		{
			if (ano < 2002)
				M++;
		}
	}

	porcentagem1 = (100.0 * acima) / n;
	porcentagem = (100.0 * abaixo) / T;

	cout << fixed << setprecision(2);
	cout << porcentagem1 << "% tiveram nota media acima de 8" << endl;
	cout << "Maior arrecadacao no mes de lancamento: " << maior << endl;
	cout << "Menor arrecadacao no mes de lancamento: " << menor << endl;
	cout << M << " jogos lancados antes de 2002 obtiveram classificacao M" << endl;
	cout << porcentagem << "% dos jogos com classificacao T obtiveram nota media abaixo de 5" << endl;
	cout << "Os jogos com classificacao E, arrecadaram em media: " << E << endl;

	return 0;
}
