#include<iostream>
#include<cstring>

using namespace std;

struct dados
{
	char nome[50];
	int notas[50];
};

int main()
{
	dados inf;
	int n, i, m=0;
	int soma = 0;
	int maior = 0;
	char vencedor[50];

	cin >> n;

	for(i = 1; i <= n; i++)
	{
		cin.ignore();
		cin.getline(inf.nome, 50);

		while (m != n)
		{
			cin >> inf.notas[i];
			
			m++;
		}
		
		m=0;

		soma = soma + inf.notas[i];

		if(soma > maior)
		{
			maior = soma;
			strcpy(vencedor, inf.nome);
		}
	}

	cout << "Vencedor: " << vencedor << endl;

	return 0;
}
