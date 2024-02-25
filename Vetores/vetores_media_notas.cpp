#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int notas [100];
	int i;
	int n;
	int aprovados, reprovados;
	float soma;
	float media;
	
	soma = 0;
	aprovados = 0;
	reprovados = 0;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		if (n <= 100)
			cin >> notas[i];
		soma = soma + notas[i];
	}

	media = soma / n;

	for (i = 0; i < n; i++){
	
	if (notas [i] > media)
	{
		aprovados++;
	}
	if (notas[i] < media)
	{
		reprovados++;
	}}
	

	cout << fixed << setprecision (2);
	cout << "Media da turma: " << media << endl;
	cout << "Alunos com nota acima da media: " << aprovados << endl;
	cout << "Alunos com nota abaixo da media: " << reprovados << endl;
	

	return 0;;

}
