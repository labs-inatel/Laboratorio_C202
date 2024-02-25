#include <iostream>

using namespace std;

int main()
{
	int n;
	int a;
	int b;
	char letra[50];

	cin >> n;
	
	cin.ignore();

	while (n--)
	{
		cin.getline(letra,50);
		a = letra[0] - 48;
		b = letra[2] - 48;

		if (a == b)
			cout << a * b << endl;

		else if (letra[1] > 96)
			cout << a + b << endl;

		else
			cout << b - a << endl;
	}
	return 0;
}
