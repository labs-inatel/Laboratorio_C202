#include <iostream>

using namespace std;

struct dados
{
	int idade;
	float peso;
	char nome[50];
};

int main()
{
	int i;
	int n;
	dados atleta [5];
	int menor = 1000;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(atleta[i].nome, 50);
		cin >> atleta[i].idade;
		cin >> atleta[i].peso;
	}

	for(i = 0; i < n; i++)
		cout << atleta[i].nome << " " << atleta[i].idade << " " << atleta[i].peso << endl;

	for (i = 0; i < n; i++)
	{
		if (atleta[i].idade < menor)
		{
			menor = atleta[i].idade;
			cout << menor;
		}
	}
	
	return 0;
}
