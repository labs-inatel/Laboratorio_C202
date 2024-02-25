#include <iostream>

using namespace std;

int main()
{
	int x; // numeros a seres somados
	int soma; //soma dos numeros digitados
	
	//Lendo os numeros e somando
	
	soma = 0;
	cin >> x;
	while (x != -1)
	{
		soma = soma + x;
		cin >> x;
	}
	
	// Mostrando o resultado
	cout << "soma = " << soma << endl;
	
	return 0;
}
