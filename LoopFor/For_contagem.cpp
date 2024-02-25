#include <iostream>

using namespace std;

int main()
{
	int n = 10;//numero de repetiçoes
	int i;  // contador
	
	// contagem começa com i, se i for menor ou igual a 10, vai somar +1 no i
	// e realizar o cout embaixo
	// o for só vai parar quando o i passar a ser maior que 1
	// ai NAO ira realizar o cout de baixo
	for (i=1; i <= n; i++ ) 
		cout << "i = " << i << endl;
	
	return 0;
	
}