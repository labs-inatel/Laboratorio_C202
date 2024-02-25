#include <iostream>

using namespace std;

int main()
{
	int n = 5; // numero de pessoas
	int idade; // idade de cada pessoas
	int maiorIdade; // maior idade da pessoa
	int i; // contador
	
	// atribuindo valor na variavel maiorIdade pra nao pegar lixo de memoria
	maiorIdade = -1;
	
	// i começa com zero, se o i for menor que n, vai somar +1 no i e realizar o comando de baixo
	// a leitura do n vai ser guardada na variavel maiorIdade 
	// o if vai verificar se a idade é maior que a maiorIdade, se sim, essa idade passa ser a maiorIdade
	for (i=0; i < n; i++)
	{
		cin >> idade;
		if (idade > maiorIdade)
		    maiorIdade = idade;
	}
		cout << "Maior idade = " << maiorIdade << endl;
	
	return 0;
	
}