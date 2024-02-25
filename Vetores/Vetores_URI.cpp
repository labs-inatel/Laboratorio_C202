#include <iostream>

using namespace std;

int main ()
{
	int notas [100];
	int n;
	float soma;
	float media;
	int i;

	cin >> n;

	for (i = 0; i <= n; i++)
		cin >> notas[i];

	soma = 0;

	for (i = 0; i <= n; i++)
		soma = soma + notas[i];

	media = soma / n;

	cout << "Media da turma: " << media << endl;

	return 0;

}
