#include<iostream>

using namespace std;

int main()
{
	int mat[3][3];
	int l, c;

	for(l = 0; l < 3; l++)
	{
		for(c = 0; c < 3; c++)
			cin >> mat[l][c];
	}

	if(mat[0][0] == 1 && mat[0][1] == 0 && mat[0][2] == 0)
		cout << "FEMININO" << endl;
	else
		cout << "MASCULINO" << endl;

	return 0;
}
