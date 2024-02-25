#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char nome1[50];
	char nome2[50];
	
	strcpy(nome1,"Ana");
	strcpy(nome2,"Aline");
	
	cout << strcmp (nome1,nome2) << endl; //negativo
	cout << strcmp (nome2,nome1) << endl; //positivo
	
	return 0;
}