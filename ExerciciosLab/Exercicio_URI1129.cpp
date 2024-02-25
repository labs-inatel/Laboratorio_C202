#include <iostream>

using namespace std;

int main()
{

	int n;
	int questoes [5];
	int i;
	int j;
	int m;
	char respostas;

	while (cin >> n)
	{
		if (n != 0)
		{
			for (i = 0; i < n; i++)
			{
				m = 0;

				for (j = 0; j < 5; j++)
				{
					cin >> questoes[j];

					if (questoes[j] <= 127)
					{

						switch (j)
						{
						case 0:
							respostas = 'A';
							break;
						case 1:
							respostas = 'B';
							break;
						case 2:
							respostas = 'C';
							break;
						case 3:
							respostas = 'D';
							break;
						default:
							respostas = 'E';
							break;
						}
						m++;
					}
				}

				if (m != 1)
					respostas = '*';

				cout << respostas << endl;
			}
		}
	}

	return 0;
}
