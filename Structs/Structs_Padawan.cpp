#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct dados
{
	char nome[50];
	int pontos;
};

int main()
{
	dados atleta[300];
	int n, i;
	int maior;
	int soma;
	char padawan[50];
	float media;

	maior = 0;
	soma = 0;

	cin >> n;
	
	for (i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(atleta[i].nome, 50);
		cin >> atleta[i].pontos;

		soma = soma + atleta[i].pontos;

		if (atleta[i].pontos > maior)
		{
			strcpy(padawan,atleta[i].nome);
			maior = atleta[i].pontos;
		}
	}
	
	cout << "Padawan com mais pontos: " << padawan << endl;

	cout << "Pontos: " << maior << endl;

	media = 1.0 * soma / n;

	cout << fixed << setprecision(2);
	cout << "Media da turma: " << media << " pontos" << endl;

	return 0;

}
