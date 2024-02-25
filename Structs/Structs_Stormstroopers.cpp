#include <iostream>
#include <iomanip>

using namespace std;

struct dados
{
	int numero;
	float IM;
	float FA;
	float GA;
};

int main()
{
	dados atleta[300];
	int i = 0;
	int apto = 0;
	float maior = 0;

	cin >> atleta[i].numero;

	while (atleta[i].numero != 0)
	{
		cin >> atleta[i].IM >> atleta[i].FA;

		if((atleta[i].IM > 0 && atleta[i].IM <= 1) && (atleta[i].FA > 0 && atleta[i].FA <= 1))
			atleta[i].GA = (atleta[i].FA + atleta[i].IM) / 2;

		if (atleta[i].GA > maior)
		{
			maior = atleta[i].GA;
			apto = atleta[i].numero;
		}
		i++;
		cin >> atleta[i].numero;
	}

	cout << "Stormtrooper escolhido: " << apto << endl;
	cout << fixed << setprecision(2);
	cout << "GA = " << maior << endl;

	return 0;

}
