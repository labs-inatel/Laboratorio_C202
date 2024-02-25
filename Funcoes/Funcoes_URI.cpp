#include <iostream>
#include <cmath>

using namespace std;

int calc_a(int x)
{
	int a;

	a = (2*pow(x,2)) + 3*x - 1;

	return a;
}

int calc_b(int x)
{
	int b;

	b = pow(x,3);

	return b;
}

int calc_c(int y)
{
	int c;

	c = pow(y,3);

	return c;
}
int main ()
{
	int x,y;
	int res1, res2, res3;
	
	cin >> x >> y;
	
	res1 = calc_a(x);
	res2 = calc_b(x);
	res3 = calc_c(y);
	
	cout << "a = " << res1 << endl;
	cout << "b = " << res2 << endl;
	cout << "c = " << res3 << endl;
	
	return 0;
	
}

