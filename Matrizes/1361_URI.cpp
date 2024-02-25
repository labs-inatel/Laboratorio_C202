#include<iostream>

using namespace std;

int func(int mat[3][4])
{
	int soma = 0;
	int c, l;

	for(l = 0; l < 3; l++)
	{
		for(c = 0; c < 4; c++)
		soma = soma + mat[l][c];
	}
	
	return soma;
};
int main()
{
	int soma;
	int l, c;
	int mat[3][4];

	for(l = 0; l < 3; l++)
	{
		for(c = 0; c < 4; c++)
			cin >> mat[l][c];
	}
	
	soma = func(mat);

	cout << "soma = " << soma << endl;

	return 0;
}
