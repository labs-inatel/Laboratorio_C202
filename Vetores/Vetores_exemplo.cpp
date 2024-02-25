#include <iostream>

using namespace std;

int main () 
{
	int idade [5]; // armazena as idades
	int i; // contador
	
	/*//Atribuindo idades
	idade[0]= 12;
	idade[1]= 7;
	idade[2]= 3;
	idade[3]= 9;
	idade[4]= 8;
	*/
	
	//Lendo as idades e armazenando no vetor
	for (i=0;i<5;i++)
		cin >> idade[i];
	
	//Mostrando o vetor
	for(i=0;i<5;i++)
		cout << idade[i] << endl;
	
	return 0;
}