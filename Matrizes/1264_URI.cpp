#include<iostream>

using namespace std;

int main()
{
	int mat[5][3];
	int l, c, codigo;

	do
	{
		for(l = 0; l < 5; l++)
		{
			for(c = 0; c < 3; c++)
			{
				cin >> mat[l][c];
			}
		}

		if(mat[3][1] != 0)
		{

			for(l = 0; l < 5; l++)
			{
				for(c = 0; c < 3; c++)
				{
					if(mat[0][0] == 0 && mat[0][1] == 0 && mat[0][2] == 0) // 0,2,3,5,6,7
					{
						if(mat[1][0] == 0 && mat[1][1] == 1 && mat[1][2] == 0) //0,8,9
						{
							if(mat[2][0] == 0 && mat[2][1] == 1 && mat[2][2] == 0) //0*
							{
								codigo = 1;
							}
							else if(mat[2][0] == 0 && mat[2][1] == 0 && mat[2][2] == 0) //8,9
							{
								if(mat[3][0] == 0 && mat[3][1] == 1 && mat[3][2] == 0)//8*
								{
									codigo = 9;
								}
								else if(mat[3][0] == 1 && mat[3][1] == 1 && mat[3][2] == 0)//9*
								{
									codigo = 10;
								}
								else
									break;
							}

						}
						else if(mat[1][0] == 1 && mat[1][1] == 1 && mat[1][2] == 0)//2,3,7
						{
							if(mat[2][0] == 0 && mat[2][1] == 0 && mat[2][2] == 0) //2,3
							{
								if(mat[3][0] == 0 && mat[3][1] == 1 && mat[3][2] == 1)//2*
								{
									codigo = 3;
								}
								else if(mat[3][0] == 1 && mat[3][1] == 1 && mat[3][2] == 0)//3*
								{
									codigo = 4;
								}
								else
									break;
							}
							else if(mat[2][0] == 1 && mat[2][1] == 1 && mat[2][2] == 0) //7*
							{
								codigo = 8;
							}
							else
								break;

						}

						else if(mat[1][0] == 0 && mat[1][1] == 1 && mat[1][2] == 1) //5,6*
						{
							if(mat[2][0] == 0 && mat[2][1] == 0 && mat[2][2] == 0)
							{
								if(mat[3][0] == 1 && mat[3][1] == 1 && mat[3][2] == 0)//5*
								{
									codigo = 6;
								}
								else if(mat[3][0] == 0 && mat[3][1] == 1 && mat[3][2] == 0)//6*
								{
									codigo = 7;
								}
								else
									break;
							}
							else
								break;
						}

					}
					else if(mat[0][0] == 1 && mat[0][1] == 1 && mat[0][2] == 0) //1*
					{
						codigo = 2;
					}
					else if(mat[0][0] == 0 && mat[0][1] == 1 && mat[0][2] == 0) //4*
					{
						codigo = 5;
					}
					else
						break;
				}
			}

			switch(codigo)
			{
			case 1:
				cout << "ZERO" << endl;
				break;
			case 2:
				cout << "UM" << endl;
				break;
			case 3:
				cout << "DOIS" << endl;
				break;
			case 4:
				cout << "TRES" << endl;
				break;
			case 5:
				cout << "QUATRO" << endl;
				break;
			case 6:
				cout << "CINCO" << endl;
				break;
			case 7:
				cout << "SEIS" << endl;
				break;
			case 8:
				cout << "SETE" << endl;
				break;
			case 9:
				cout << "OITO" << endl;
				break;
			case 10:
				cout << "NOVE" << endl;
				break;
			default:
				break;
			}
		}

	}
	while(mat[3][1]!= 0);

	return 0;
}
