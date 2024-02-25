#include<iostream>

using namespace std;

int main()
{
	char mat[3][5];
	int l, c, nLinhas, nColunas;

	cin >> nLinhas >> nColunas;

	for(l = 0; l <  nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
		{
			cin >> mat[l][c];
		}
	}
	
	for(c = 0; c < nColunas; c++)
	{
		for(l = 0; l < nLinhas; c++)
		{
			cout << mat[l][c];
		}
	}


	return 0;
}
