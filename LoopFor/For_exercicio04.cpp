#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int N=6;
	double numeros;
	int positivos;
	int i;
	
	numeros = 0;
	positivos = 0;
	for (i= 0; i<N; i++)
	{
		cin >> numeros;
		if (numeros > 0.0)
		{
			positivos++;
		}	
	
	}

    cout << positivos << " valores positivos" << endl;
	
	return 0;
}