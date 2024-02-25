#include <iostream>

using namespace std;

int main ()
{
	// declarando as variaveis 
	int n; 
	int fatorial;
	int i;
	int fib; 
	int primeiro;
	int segundo;
	
	// lendo o numero de entrada
	cin >> n;
	
	// atribuindo valores as variaveis para elas nao peguem lixo de memoria
	// contas que exigem multiplicaçao/divisao atribui com o numero 1, exemplo o fatorial
	fatorial = 1;
	primeiro = 0;
	segundo = 1;
	
	// se o numero de entrada for par, vai fazer o fatorial 	
	// o For começa com ( numero contado tera mesmo valor do numero de entrada)
	// (numero contado tem que ser maior ou igual a 1)
	// (+ identação, verificaçao dos outros numeros da contagem)
    if (n % 2 == 0)
	{
		for (i = n ; i >= 1 ; i--)
			fatorial = fatorial * i;

			cout << fatorial << endl;
	}
	
	// se o numero de entrada nao for par, vai fazer o fibonacci
	
	// o For começa com (primeiro  numero contado, numero contado tem que ser menor ou igual a numero de entrada, e a identação))
	
	// o Fibonacci vai pegar os dois primeiros termos (0,1) e somar (resultado =1 )
	
	// Logo em seguida, o resultado dessa soma vai virar o segundo termo (1, 1)
	
	// ai vai somar o primeiro termo com o novo segundo termo (resultado = 2)
	
	// Logo em seguida, o novo segundo termo passa ser passa primeiro termo 
	
	// E o resultado da soma (primeiro+novo segundo termo) passa a ser o segundo termo

    else 
	{
		for ( i = 1; i <= n; i++)
		{
                if (i == 1)
				{
					fib = primeiro;
				}
				 
			    else if ( i == 2)
				{
					fib = segundo;
				}
			    
			    else 
				{
					fib = primeiro + segundo;
				    primeiro = segundo;
				    segundo = fib;
				}
					
		}
			
			cout << fib << endl;
	}
	
	// no final só ler o resultado da soma do primeiro termo com o segundo e fechar o codigo

	return 0;
}