#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int T;
	char jogador1[20];
	char jogador2[50];
	int i;

	cin >> T;

	cin.ignore();

	for(i = 0; i < T; i++)
	{
		cin.getline (jogador1, 20);
		cin.getline (jogador2, 20);

		if(strcmp(jogador1, jogador2) == 0)
			cout << "Empate" << endl;

		if(strcmp(jogador1, jogador2) != 0)
		{
			if (strcmp(jogador1, "pedra")==0 && strcmp(jogador2, "tesoura")==0)
				cout << "Jogador A" << endl;

			else if (strcmp(jogador1, "tesoura")==0 && strcmp(jogador2, "pedra")==0)
				cout << "Jogador B" << endl;

			else if (strcmp(jogador1, "papel")==0 && strcmp(jogador2, "tesoura")==0)
				cout << "Jogador B" << endl;

			else if (strcmp(jogador1, "tesoura")==0 && strcmp(jogador2, "papel")==0)
				cout << "Jogador A" << endl;

			else if (strcmp(jogador1, "pedra")==0 && strcmp(jogador2, "papel")==0)
				cout << "Jogador B" << endl;

			else if (strcmp(jogador1, "papel")==0 && strcmp(jogador2, "pedra")==0)
				cout << "Jogador A" << endl;
		}

	}

	return 0;

}
