#include<iostream>

using namespace std;

int func(int mat[][10], int dim)
{
	int traco = 0;
	int l, c;
	
	for(l = 0; l < dim; l++)
	{
		for(c = 0; c < dim; c++)
			if( l == c )
				traco = traco + mat[l][c];
	}

	return traco;
};
int main()
{
	int traco;
	int l, c, dim;
	int mat[10][10];

	cin >> dim;

	for(l = 0; l < dim; l++)
	{
		for(c = 0; c < dim; c++)
			cin >> mat[l][c];
	}

	traco = func(mat, dim);

	cout << "traco = " << traco << endl;

	return 0;
}
