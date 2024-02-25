#include<iostream>

using namespace std;
//Retorna a maior idade do vetor idades
int encontra_maior(int idades[], int N)
{
	int i;
	int maior = -1;

	for(i=0;i<N;i++)
		if(idades[i]>maior)
			maior = idades[i];

return maior;
}
int main()
{
	int idades[10]; // idades das pessoas
	int N; // numero de pessoas;
	int i; // contador
	int idadeV; // maior idade do grupo

	//Ler o numero de pessoas
	cin >> N;

	//Ler a idade de várias pessoas
	for(i = 0; i < N; i++)
		cin >> idades[i];

	//Encontrar a maior idade do grupo
	idadeV = encontra_maior(idades, N);

	//Mostrar maior idade do grupo
	cout << "Maior idade: " << idadeV << endl;

	return 0;
}
