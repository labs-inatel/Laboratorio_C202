#include<iostream>
#include<iomanip>

using namespace std;

double ideal(double h, char sexo)
{
	double pesoideal;

	if(sexo == 'M')
		pesoideal = (72.7 * h) - 58;

	if(sexo == 'F')
		pesoideal = 62.1 * h - 44.7;

	return pesoideal;
}

int main()
{
	double h;
	char sexo;
	double res1;

	cin >> h;
	cin >> sexo;
	
	res1 = ideal(h, sexo);
	cout << fixed << setprecision(2);
	cout << "Peso ideal: " << res1 << " kg" << endl;

	return 0;
}
