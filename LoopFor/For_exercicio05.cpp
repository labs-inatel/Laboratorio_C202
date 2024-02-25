#include <iostream>

using namespace std;

int main ()
{
	int N=5; // numero de pessoas
	int idade; // idade de cada pessoa
	int i; // contador
	int maiorIdade; // maior idade do grupo
	
	//Lendo as idades e identificando a maior
	maiorIdade = -1;
	for (i=0; i<N; i++)
	{
		cin >> idade;
		if (idade > maiorIdade)
			maiorIdade = idade;
	}
	
	// Mostrando resultado
	cout << "Maior idade: " << maiorIdade << endl;
	
	return 0;
}