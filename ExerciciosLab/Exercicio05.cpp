#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	// declarando as variaveis
	int N;
	int i;
	float soma;
	float termo;
	
	// lendo o numero de repetiçoes
	cin >> N;
	
	// atribuindo valor a varaivel soma para ela nao pegar lixo de memoria
	soma = 0;
	
	// começa em 1, se o numero contado for menor ou igual a zero, vai somar +1 a i)
	// o termo é o meu i dividido por 1.0 (transformando em double)
	// e depois faz a soma dos termos
	for (i = 1; i <= N; i++)
	{
		termo = 1.0/ i;
		soma = soma + termo;
	}
	
	// lendo a soma dos termos e apresentando o resultado com 4 casas decimais
	cout << fixed << setprecision(4);
	cout << soma << endl;
	
	return 0;
}