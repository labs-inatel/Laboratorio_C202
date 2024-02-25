#include<iostream>

using namespace std;

int main()
{
	int mat1[10][10];
	int mat2[10][10];
	int mat3[10][10];
	int l, c, nLinhas, nColunas;

	cin >> nLinhas >> nColunas;

	for(l = 0; l < nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
		{
			cin >> mat1[l][c];
		}
	}

	for(l = 0; l < nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
		{
			cin >> mat2[l][c];
		}
	}

	for(l = 0; l < nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
		{
			mat3[l][c] = mat1[l][c] + mat2[l][c];
			cout << mat3[l][c] << " ";
		}
		cout << endl;
	}

	return 0;
}
