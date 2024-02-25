#include <iostream>
#include <cstring>

using namespace std;

struct dados
{
	char nome[50];
	int base;
};

int main()
{
	dados atleta[300];
	char cavaleiro[50];
	int i, n, base = -1;

	cin >> n;

	for(i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(atleta[i].nome, 50);
		cin >> atleta[i].base;
	}

	cin.ignore();
	cin.getline(cavaleiro, 50);

	for(i = 0; i < n; i++)
	{
		if(strcmp(atleta[i].nome, cavaleiro) == 0)
			base = atleta[i].base;
	}
	if(base != -1)
		cout << "Este cavaleiro esta na base " << base << endl;

	else
		cout << "Este cavaleiro nao esta cadastrado" << endl;

	return 0;
}
