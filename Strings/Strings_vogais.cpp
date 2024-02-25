#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char texto[50];
	int tamanho;//tamaho do vetor
	int vogais = 0; //contando as vogais
	int i = 0; //variavel de controle

	//entrada de dados
	cin.getline(texto, 50);

	//tamanho da string(vetor)
	tamanho = strlen(texto);

//repeticao
	for(i = 0; i < tamanho; i++)
	{

		if(texto[i] == 'a')   //se a posicao que é i=='a' vai substituir para 'A'
		{

			texto[i] = 'A';
			vogais++;
		}

		if(texto[i] == 'e')
		{
			texto[i] = 'E';
			vogais++;
		}

		if(texto[i] == 'i')
		{
			texto[i] = 'I';
			vogais++;
		}

		if(texto[i] == 'o')
		{
			texto[i] = 'O';
			vogais++;
		}

		if(texto[i] == 'u')
		{
			texto[i] = 'U';
			vogais++;
		}
	}
//saida de dados
	cout << texto << endl;
	cout << vogais << endl;

	return 0;
}
