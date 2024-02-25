#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char nome[50];
	int idade;
	
	cin >> idade;
	cin.ignore();
	cin.getline(nome,50);
	
	cout << nome << " " << idade << endl;

	return 0;
}