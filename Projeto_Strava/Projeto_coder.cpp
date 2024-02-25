#include <iostream> //Biblioteca

using namespace std;

int main() //Declarando as variaveis
{
	int m; //quantidade de bits a serem processados
	int n; //número de repetições de cada bit
	int i; // contador para o For
	int contador = 0; // contador para ver quantas vezes vai entrar no while
	int bits[100]; // vetor para armazenar os bits

	cin >> m >> n; //lendo o número de bits e o número de repetições

	//For para ler o vetor:
	for(i = 0; i < m; i++) //Se o contador i for menor que a quantidade de bits
	{
		cin >> bits[i]; //Entrará no for/loop e irá fazer a leitura dos bits e armazená-los no vetor
	}
	
	//For para mostrar o vetor como saída:
	for(i = 0; i < m; i++) //Se o contador i for menor que a quantidade de bits
	{
		while (contador != n) //Repentindo cada valor armazenado no vetor
		{
			cout << bits[i] << " "; // mostrando o resultado/os bits repetidos 
			contador++; // somando +1 ao contador 
		}
		
		contador = 0; // zerando o contador para compará-lo na condição do while para fazer a repetição dos bits
	}

	return 0; // Finalizando o código
}
