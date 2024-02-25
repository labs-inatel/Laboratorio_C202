#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
	double N,x;
	int i;
	double total;

	cin >> N >> x;

	for (i = 0; i < N; i++)
	{
		total =(((N-i)*pow(x,i+1.0))/i+1.0) - (((N-i)*pow(x,i+1.0))/i+1.0) + (((N-i)*pow(x,i+1.0))/i+1.0);
	}
	
	cout << fixed << setprecision(4);
	cout << total << endl;
	
	return 0;
}

