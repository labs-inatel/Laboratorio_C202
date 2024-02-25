#include<iostream>

using namespace std;

int main()
{
	int mat[10][10];
	int l, c, nLinhas, nColunas;

	cin >> nLinhas >> nColunas;

	for(l = 0; l < nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
		{
			cin >> mat[l][c];
		}
	}

	for(l = 0; l < nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
		{
			cout << mat[l][c] << " ";
		}
		cout << endl;
	}

	return 0;
}
