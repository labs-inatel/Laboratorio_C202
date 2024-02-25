#include <iostream>

using namespace std;

int main ()
{
	int nota; // idade de cada pessoa
	int Nmenor; // numero de pessoas com menos de 7 anos

	// Lendo a idade e verificando quem é menor de 7 anos
	Nmenor =0;
	cin >> idade;
	do
	{
		if (idade < 7)
			Nmenor++;
		cin >> nota;
	}while(idade >= 0);
	
	// Lendo quantidade de menor de 7 anos e finalizando o codigo
	cout << Nmenor << " pessoas com menos de 7 anos" << endl;
	
	return 0;
}