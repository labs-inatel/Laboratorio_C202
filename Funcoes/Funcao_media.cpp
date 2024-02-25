#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void media (int x, int y, float &m)
{
	m = sqrt(x * y);
};
int main()
{
	int x;
	int y;
	float media_total = 0;

	cin >> x >> y;

	if (x >= 0 && y >= 0)
	{
		media(x, y, media_total);
	}

	cout << fixed << setprecision(2);
	cout << "Media: " << media_total << endl;

	return 0;
}