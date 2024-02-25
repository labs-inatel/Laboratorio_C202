#include<iostream>

using namespace std;

void soma (int &a, int b, int &s)
{
	s = a + b;
	a = 10;
}

int main()
{
	int x = 2;
	int y = 3;
	int res = 0;

	soma(x, y, res);

	cout << "soma = " << res << endl;
	cout << "x = " << x << endl;
	
	return 0;
}
