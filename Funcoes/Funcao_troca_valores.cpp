#include <iostream>

using namespace std;

void troca(int &x, int &y)
{	
	int res;
	
	res = x;
	x = y;
	y = res;		
}
int main()
{
	int x;
	int y;
	
	cin >> x >> y;
	
	troca(x,y);
	
	cout << x << " " << y << endl;
	
	return 0;
}
