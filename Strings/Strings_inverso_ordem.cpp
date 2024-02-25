#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char texto[50];
	int tamanho;
	int i;

	cin.getline(texto,50);
	
	tamanho = strlen(texto);

	for(i= tamanho-1; i>=0; i--)
	{
		cout << texto[i];
	}

	return 0;
}