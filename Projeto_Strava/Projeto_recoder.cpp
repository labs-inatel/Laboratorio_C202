#include <iostream> //Biblioteca

using namespace std;

int main() //Declarando variaveis e atribuindo valor para não pegar lixo de memória
{
	int repeticoes; // número de repetições de cada bit
	int m = 0; // contador para loop divisor 
	int i = 0; // contador para o loop de leitura
	int grupos; // grupos divididos pela quantidade de repetições
	int bits_processados = 0; // quantidade de bits armazenados no vetor de bits
	int bits_zero = 0; // variavel para armazenar a quantidade de bits de valor zero
	int bits_um = 0; // variavel para armazenar a quantidade de bits de valor um
	int sequencia = 0; // contador para contar as vezes que os bits forem armazenados no vetor
	int bits[50]; // vetor para a leitura dos bits 
	int recuperado[50]; // vetor para armazenar os bits recuperados
	int recup[50][50]; // vetor de separação de grupos de bits

	//Lendo o número de repetições de cada bit
	cin >> repeticoes; 

	//Lendo os bits e armazenando no vetor
	cin >> bits[i];

	//verificando se algum bit tem valor igual a -1, se sim, ele não entra no loop
	//Se for diferente de -1, entra no loop 
	while(bits[i] != -1)
	{
		bits_processados++; // vendo a quantidade de bits q tem no vetor
		i++; // contando quantas vezes entrou no loop
		cin >> bits[i]; // lendo para fazer a verificação novamente
	}
	
	//Calculando a quantidade de grupos que pode formar
	grupos = bits_processados / repeticoes; 
	
	i = 0; //zerando o contador

	while(i != repeticoes) //while para separar os grupos
	{
		recup[i][sequencia] = bits[m]; // armazenando os valores dos bits em grupos/espaços separados do vetor
		sequencia++; // contador para contar os grupos que foram armazenados no vetor
		m++; // atribuindo toda vez q entrar no loop

		if (sequencia == grupos) // Se a quantidade de grupos armazenados for igual a quantidade de grupos
		{
			i++; // contando quantas vezes entrou no loop
			sequencia = 0; // zerando o contador de grupos;
		}
	}

	//Formando o vetor final para apresentação do resultado
	for(sequencia = 0; sequencia < grupos; sequencia++)
	{
		for (i = 0; i < repeticoes; i++)
		{
			if(recup[i][sequencia] == 0) //se o bit armazernado no grupo for igual a zero 
			{
				bits_zero++; //soma +1 a quantidade de bits zeros
			}
			if(recup[i][sequencia] == 1) //se o bit armazernado no grupo for igual a igual
			{
				bits_um++; //soma +1 a quantidade de bits um
			}
		}

		if (bits_zero > bits_um) // se o bit zero aparece mais que o bit um
		{
			recuperado[sequencia] = 0; // bit de valor zero assume a posição
		}
		else // se o bit um aparece mais que o bit zero
		{
			recuperado[sequencia] = 1; // bit de valor um assume a posição
		}

		bits_zero = 0; // zerando valor para fazer a verificação do próximo grupo
		bits_um = 0; // zerando valor para fazer a verificação do próximo grupo
	}
	
	recuperado[0] = bits[0]; // O bit da primeira posição nunca é afetado, pois se se inicia antes do ruido
	
	//Apresentando o vetor recuperado como saída:
	for(sequencia = 0; sequencia < grupos; sequencia++) 
	{
		cout << recuperado[sequencia] << " ";
	}

	//Finalizando o código
	return 0;
}
