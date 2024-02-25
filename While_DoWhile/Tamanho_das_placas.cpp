#include <iostream>

using namespace std;

int main()
{
	int X, Y, M;
	int i = 0;
	int Xi, Yi;

	cin >> X >> Y;
	cin >> M;

	while (i < M)
	{

		cin >> Xi >> Yi;
		i++;


		if (Xi <= X && Yi <= Y)
			cout << "Sim" << endl;

		else if (Xi <= Y && Yi <= X)
			cout << "Sim" << endl;

		else
			cout << "Nao" << endl;

	}

	return 0;
}
