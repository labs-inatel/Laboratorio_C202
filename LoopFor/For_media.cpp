#include <iostream>

using namespace std;

int main()
{
	int n = 5; // numero de pessoas
	int idade; // variavel auxiliar em armazenar de dados 
	int soma; // soma das idades
	double media; // media das idades
	int i; // contador
	
	// atribuindo valor na variavel soma pra nao pegar lixo de memoria
	soma = 0;
	
	// i começa com zero, se o i for menor que n, vai somar +1 no i e realizar o comando de baixo
	// a leitura de n  vai ser guardada na variavel idade
	// a soma é o valores de numeros armazenados na variavel idade
	// a media é a soma das idade dividido pela quantidade de pessoas
	// multiplica a soma por 1.0 para transforma-lá em double
	for (i=0; i < n; i++)
	{
		cin >> idade; 
		soma = soma + idade;
		media = 1.0 * soma / n;
	}
		cout << "media = " << media << endl;
	
	return 0;
	
}