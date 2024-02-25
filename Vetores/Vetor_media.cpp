#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	int vetor[100];
	float soma = 0;
	float media;
	int i;

	cin >> n;

	for(i = 0; i < n; i++)
	{
		cin >> vetor[i];
		soma = soma + vetor[i];
	}

	media = soma / i;

	cout << fixed << setprecision(2);
	cout << "Media: " << media << endl;
	cout << "Maiores que a media: ";

	for(i = 0; i < n; i++)
	{
		if (vetor[i] > media)
			cout << vetor[i] << " ";
	}

	return 0;
}
