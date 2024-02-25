#include <iostream> 
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	
	double n1, n2;
	double resultado;
	double maior, menor;
	double i;
	
	cin >> n1 >> n2;
	
	maior = n1;
	menor = n2;
	
	for (i = n1; i <= n2; i = i + 0.1)
	{
		resultado = sin(i)* cos(i);
		if (resultado > 0)
		{
			if (i < menor)
				menor = i;
			else if (i >= maior)
				maior = i;
		}
	}
	
	cout << fixed << setprecision (1);
	cout << menor << " a " << maior << endl;
	
	return 0;
}