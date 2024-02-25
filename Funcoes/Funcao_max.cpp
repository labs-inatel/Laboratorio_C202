#include<iostream>
#include<cstring>

using namespace std;

struct dados
{
	char nome[100];
	int n1;
	int n2;
	int n3;
	int n4;
};

int strongest(dados atletas[], int nAtletas)
{
	int soma = 0;
	int i;
	
	for(i = 0; i < nAtletas; i++)
	{
		soma = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;
	}
	
	return soma;
}

int main()
{
	dados atletas[1000];
	int i;
	char vencedor[50];
	int maior = 0;
	int nAtletas;
	int total;

	cin >> nAtletas;

	for(i = 0; i < nAtletas; i++)
	{
		cin.ignore();
		cin.getline(atletas[i].nome, 100);
		cin >> atletas[i].n1 >> atletas[i].n2 >> atletas[i].n3 >> atletas[i].n4;

		total = strongest(atletas, nAtletas);

		if (total > maior)
		{
			strcpy(vencedor, atletas[i].nome);
		}
	}

	cout << "Vencedor: " << vencedor << endl;

	return 0;
}
