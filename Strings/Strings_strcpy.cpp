#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char nome[50];
	char copia [50];
	/*
	nome[0] = 'L';
	nome[1] = 'a';
	nome[2] = 'r';
	nome[3] = 'a';
	nome[4] = '\0'; //final da string
	*/
	
	strcpy(nome,"-");
	strcpy(copia,nome);
	
	cout << copia << endl;
	
	return 0;
}