#include<iostream>

using namespace std;

int sinal(int n)
{
	int valor;

	valor = n;

	return valor;
}

int main()
{
	int n;
	int res1;

	cin >> n;

	res1 = sinal(n);

	if (res1 == 0)
		cout << "Zero" << endl;

	else if (res1 > 0)
		cout << "Positivo" << endl;

	else if(res1 < 0)
		cout << "Negativo" << endl;

	return 0;
}
