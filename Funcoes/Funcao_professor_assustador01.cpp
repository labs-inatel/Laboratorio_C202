#include<iostream>
#include<iomanip>

using namespace std;

float media(int notas[], int nAlunos)
{
	int i;
	float soma = 0;
	float med;

	for(i=0;i<nAlunos;i++)
		soma = soma + notas[i];
	
	med = soma / nAlunos;

return med;

}
int main()
{
	int notas[10]; 
	int nAlunos; 
	int i; 
	float media_turma; 

	cin >> nAlunos;

	for(i = 0; i < nAlunos; i++)
		cin >> notas[i];

	media_turma = media(notas, nAlunos);
	
	cout << fixed << setprecision(2);
	cout << "Media da turma = " << media_turma << endl;

	return 0;
}
