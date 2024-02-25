#include<iostream>

using namespace std;

int main()
{
	int mat[2][2];
	int l, c, det, det2, total;

	for(l = 0; l < 2; l++)
	{
		for(c = 0; c < 2; c++)
		{
			cin >> mat[l][c];
		}
	}

	cout << "M:" << endl;
	for(l = 0; l < 2; l++)
	{
		for(c = 0; c < 2; c++)
		{
			cout << mat[l][c] << " ";
		}

		cout << endl;
	}

	cout << "M transposta:" << endl;
    for(c = 0; c < 2; c++)
	{
		for(l = 0; l < 2; l++)
		{
			cout << mat[l][c] << " ";
		}

		cout << endl;
	}
	
	det = mat[0][0]* mat[1][1];
	det2 = mat[1][0]*mat[0][1];
	total = det - det2;
	
	cout << "Determinante: " << total << endl;
	
	return 0;
}
