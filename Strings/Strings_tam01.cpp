#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char nome[50];
	int idade;
	int tam;

	cin >> idade;
	cin.ignore();
	cin.getline(nome, 50);
	tam = strlen(nome);

	cout << nome << " " << idade << endl;
	cout << "tam = " << tam << endl;
	return 0;
}
