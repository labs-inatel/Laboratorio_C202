#include <iostream>

using namespace std;

void mult()
{
	int n;
	
	cin >> n;

	for (int i = 1; i <= 10; i++)
	{
		cout << n << " x " << i << " = " << n*i << endl;
	}
}
int main()
{
	mult();

	return 0;
}
