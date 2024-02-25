#include<iostream>

using namespace std;

// retorna a+b
int soma (int a, int b)
{
	int s;

	s = a + b;

	return s;
}
int main()
{
	/*int long, long --> para numeros maiores*/
	
	int x, y; // operandos
	int res; // x+y

	cin >> x >> y; // entrada

	res = soma(x, y);

	cout << res << endl;

	return 0;
}
