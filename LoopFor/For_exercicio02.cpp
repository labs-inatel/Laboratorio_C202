#include <iostream>

using namespace std;

int main ()
{
	int N=5; // numero de pessoas
	int idade; // idade de cada pessoa
	int soma; // soma das idades
	float media; // idade media
	int i; // contador
	
	//Lendo as idades e calculando a soma
	
	soma = 0;
	for(i=0; i<N; i++)
	{
		cin >> idade;
		soma = soma+idade;
	}
	// Calculando a media
	media = 1.0*soma/N;
	
	// Mostrando a idade media
	cout << "media = " << media << endl;
	
	return 0;

}