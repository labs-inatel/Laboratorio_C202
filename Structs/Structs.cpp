#include <iostream>

using namespace std;

struct dados
{
	int idade;
	float peso;
	char nome[50];
};

int main()
{
	dados atleta; // armazena os dados de um atleta
	
	//atleta.idade = 18;
	//atleta.peso = 67.5;
	
	//Lendo idade e peso;
	cin >> atleta.idade;
	cin >> atleta.peso;
	cin.ignore();
	cin.getline(atleta.nome,50);
	
	cout << "Idade: " << atleta.idade << endl;
	cout << "Peso: " << atleta.peso << endl;
	cout << "Nome: " << atleta.nome << endl;
	
	return 0;
}
