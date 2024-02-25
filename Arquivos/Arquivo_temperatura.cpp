#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
	ifstream arq;
	float temperatura[100];
	float media, soma = 0;
	int i, n;

	arq.open("temperaturas.txt", ifstream::in);

	i = 0;

	while(!arq.eof())
	{
		arq >> temperatura[i];
		i++;
	}

	n = i;

	for(i = 0; i < n; i++)
	{
		soma = soma + temperatura[i];
		media = soma / n;
	}
	
	cout << fixed << setprecision(1);
	cout << "Temperatura media: " << media << " graus" << endl;

	arq.close();

	return 0;
}
