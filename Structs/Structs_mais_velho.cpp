#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct dados
{
	char nome[100];
	char estado_civil;
	int sexo;
	int idades;
};

int main()
{
	dados inf;
	char velho[100];
	int mais_velho = 0;
	int maior = 0;
	int i = 0;
	int casados = 0;
	double soma = 0;
	double porcentagem;

	cin.ignore();
	cin.getline(inf.nome, 50);

	while(strcmp (inf.nome, "sair") != 0)
	{
		cin >> inf.sexo >> inf.estado_civil >> inf.idades;

		soma = soma + inf.idades;

		if(strcmp(inf.estado_civil,"C") == 0)
			casados++;

		if (inf.idades > maior)
			maior = inf.idades;

		if(inf.sexo == 1 || inf.sexo == 2)
		{
			if (inf.sexo == 1 && inf.idades == maior)
			{
				strcpy(velho, inf.nome);
				mais_velho = inf.idades;
			}
		}

		i++;

		cin >> inf.sexo;
		cin >> inf.estado_civil;
		cin >> inf.idades;
	}

	porcentagem = (100.0 * casados) / i;

	cout << fixed << setprecision(2);
	cout << "Porcentagem de pessoas casadas: " << porcentagem << " %" << endl;
	cout << "Idade media da populacao: " << soma / i << " anos" << endl;
	cout << "Nome e idade do homem mais velho: " << velho << " " << mais_velho << " anos" << endl;

	return 0;
}