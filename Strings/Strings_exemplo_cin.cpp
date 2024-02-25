#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char nome[50];
	
	//Lendo o nome
	cin.getline(nome,50);
	
	//Mostrando o nome
	cout << nome << endl;
	
	return 0;
}