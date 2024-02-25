#include<iostream>

using namespace std;

void fatorial(int &x)
{
	int i;
	int fat = 1;
	
	if (x == 0)
	{
		cout << 1 << endl;
	}
	else 
	{
		for (i=1; i<=x;i++)
		{
			fat = fat * i;
		}
		cout << fat << endl;
	}
}
int main()
{
	int x;

	cin >> x;
	
	fatorial(x);

	return 0;
}
