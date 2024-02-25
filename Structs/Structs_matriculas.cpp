#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;

struct dados
{
	char nome[50];
	int matricula;
	double nota;
};

int main()
{
	dados inf;

	int n, i, j, matriculaj;
	double menor = 1000;
	double notaj;
	double soma = 0;
	char menor_nota[50];
	char nomej[50];
	
	cin >> n;
	cin >> j;

	for(i = 1; i <= n; i++)
	{
		cin.ignore();
		cin.getline(inf.nome, 50);
		cin >> inf.matricula >> inf.nota;

		soma = soma + inf.nota;

		if (inf.nota < menor)
		{
			menor = inf.nota;
			strcpy(menor_nota, inf.nome);
		}
		
		if (i == j)
		{
			strcpy(nomej, inf.nome);
			matriculaj = inf.matricula;
			notaj = inf.nota;
		}
	}

	cout << fixed << setprecision(2);
	cout << "Media: " << soma / n << endl;
	cout << menor_nota << endl;
	cout << nomej << " " << matriculaj << " " << notaj << endl;

	return 0;
}
