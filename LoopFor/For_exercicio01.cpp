#include <iostream>

using namespace std;

int main ()
{
	int N; // quantidade de numeros a serem lidos
    int X; // var aux para leitura dos dados
	int soma; // soma dos numeros
	int i; // contador
	
	// Ler a quantidde de numeros a serem lidos
	cin >> N;
	
	// Ler os numeros e calcular a soma
	soma = 0;
	for (i=0; i<N; i++)
	{
		cin >> X;
		soma = soma+X;
	}
	// Mostrar resultado
	cout << "soma = " << soma << endl;
	
	return 0;

}