#include<iostream>
#include<iomanip>

using namespace std;

float media(int notas[], int nAlunos)
{
	int i;
	double soma = 0;
	double media;

	for(i = 0; i < nAlunos; i++)
		soma = soma + notas[i];

	media = soma / nAlunos;

	return media;

}
int nAbaixo(int notas[], int nAlunos, float media)
{
	int i;
	int reprov = 0;

	for(i = 0; i < nAlunos; i++)
	{
		if (notas[i] < media)

			reprov++;
	}

	return reprov;
}
int nAcima(int notas[], int nAlunos, float media)
{
	int i;
	int aprov = 0;

	for(i = 0; i < nAlunos; i++)
	{
		if (notas[i] >= media)

			aprov++;
	}

	return aprov;

}
int main()
{
	int notas[10];
	int aprovados, reprovados;
	int nAlunos;
	int i;
	double media_turma;

	cin >> nAlunos;

	for(i = 0; i < nAlunos; i++)
		cin >> notas[i];

	media_turma = media(notas, nAlunos);
	aprovados = nAcima(notas, nAlunos, media_turma);
	reprovados = nAbaixo(notas, nAlunos, media_turma);

	cout << fixed << setprecision(2);
	cout << "Media da turma = " << media_turma << endl;
	cout << "Alunos com nota abaixo da media: " << reprovados << endl;
	cout << "Alunos com nota acima da media: " << aprovados << endl;

	return 0;
}
