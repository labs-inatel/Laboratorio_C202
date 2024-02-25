#include <iostream>

using namespace std;

int main ()
{
	// declarando as variaveis
	int n; 
	int fib; 
	int i;
	int primeiro;
	int segundo;
	
	// lendo o numero de entrada
	cin >> n;
	
	// atribuindo os termos fixos,ou seja eles nao vao mudar
	primeiro = 0; 
	segundo = 1;
	
	
	// o For começa com (primeiro  numero contado, numero contado tem que ser menor ou igual a numero de entrada, e a identação))
	
	// o Fibonacci vai pegar os dois primeiros termos (0,1) e somar (resultado =1 )
	
	// Logo em seguida, o resultado dessa soma vai virar o segundo termo (1, 1)
	
	// ai vai somar o primeiro termo com o novo segundo termo (resultado = 2)
	
	// Logo em seguida, o novo segundo termo passa ser passa primeiro termo 
	
	// E o resultado da soma (primeiro+novo segundo termo) passa a ser o segundo termo
	
	// Lendo a soma do primeiro com o segundo termo e colocando espaço " "
		
	    	for ( i = 1; i <= n; i++)
			{
				if (i == 1)
				{
					fib = primeiro;
				    cout << fib << " ";
				}
				 
			    else if ( i == 2)
				{
                    fib = segundo;
			        cout << fib << " ";
				}
			    
			    else 
				{
					fib = primeiro + segundo;
				    primeiro = segundo;
				    segundo = fib;
				    cout << fib << " ";
				}
			}
			
			cout << endl;

	//  pulando uma linha e fechando o codigo

	return 0;
}