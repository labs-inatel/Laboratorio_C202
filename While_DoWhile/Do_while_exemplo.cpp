#include <iostream>

using namespace std;

int main ()
{
	int nota; // nota de cada pessoa

	// Lendo a nota e verificando se passou ou nao
	
	cin >> nota;
	do
	{
		if (nota >= 60)
			cout << "Passou" << endl;
		else 
			cout << "Nao passou" << endl;
		cin >> nota;
	}while(nota >= 60);
	
	// Finalizando o codigo
	return 0;