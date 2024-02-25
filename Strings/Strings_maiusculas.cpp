#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

int main()
{
	char texto[50];
	int tamanho;
	int x;
	int maiusculas = 0;
	int i;

	cin >> x;
	cin.ignore();
	cin.getline(texto, 50);

	tamanho = strlen(texto);

	for(i = 0; i < tamanho; i++)
	{
		if(isupper(texto[i]))
		{
			maiusculas++;
		}
	}
	
	cout << maiusculas << endl;

	return 0;
}
