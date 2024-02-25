#include<iostream>

using namespace std;

int main()
{
	int mat[100][100];
	int nLinhas, nColunas;
	int dimensao, total;
	int pixels=0;
	int l, c;

	cin >> nLinhas >> nColunas >> dimensao;

	for(l = 0; l < nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
		{
			cin >> mat[l][c];

			if (mat[l][c] == 1)
			{
				pixels++;
			}
		}
	}
	
	total = dimensao * dimensao * pixels;
	
	cout << "AREA = " << total << " mm^2" << endl;
	return 0;
}
