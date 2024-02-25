#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Declarando variaveis
	int numero; 
	int soma; 
	double media;
	int i;
	
	//Atribuindo valores para as variaveis nao pegar lixo de memoria
	i=0;
	soma = 0;
	
	//Lendo os numeros
	cin >> numero;
	
	//Se o numero for diferente de zero, calculara a soma, incrementara 1 no i
	//Se o numero for igual a zero, saira do loop
	while (numero != 0)
	{
		soma = soma + numero;
		i++;
		cin >> numero;
	}
	
	//Calculando a media 
	media = 1.0 * soma / i;
	
	//Mostrando o resultado com 2 casas decimais
	cout << fixed << setprecision (2);
	cout << "Media = " << media << endl;
	
	return 0;
}
