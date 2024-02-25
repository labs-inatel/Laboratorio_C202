#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct dados
{
	char nome[50];
	char estado_civil;
	int sexo;
	int idades;
};

int main()
{
	dados inf[100];
	char velho[50];
	int mais_velho = 0;
	int i = 0;
	int casados = 0;
	double soma = 0;
	double porcentagem;

	cin.getline(inf[i].nome, 50);

	while(strcmp(inf[i].nome, "sair") != 0)
	{
		do
		{
			cin >> inf[i].sexo;
		}
		while(inf[i].sexo != 1 && inf[i].sexo != 2);

		do
		{
			cin >> inf[i].estado_civil;
		}
		while(inf[i].estado_civil != 'C' && inf[i].estado_civil != 'D' && inf[i].estado_civil != 'S' && inf[i].estado_civil != 'V');

		cin >> inf[i].idades;

		soma = soma + inf[i].idades;

		if(inf[i].estado_civil == 'C')
			casados++;

		if (inf[i].idades > mais_velho && inf[i].sexo == 1)
		{
			strcpy(velho, inf[i].nome);
			mais_velho = inf[i].idades;
		}

		i++;

		cin.ignore();
		cin.getline(inf[i].nome, 50);

	}

	porcentagem = (100.0 * casados) / i;

	cout << fixed << setprecision(2);
	cout << "Porcentagem de pessoas casadas: " << porcentagem << " %" << endl;
	cout << "Idade media da populacao: " << soma / i << " anos" << endl;
	cout << "Nome e idade do homem mais velho: " << velho << " " << mais_velho << " anos" << endl;

	return 0;
}
