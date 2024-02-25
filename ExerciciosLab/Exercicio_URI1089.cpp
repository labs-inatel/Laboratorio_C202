#include <iostream>

using namespace std;

int main()
{
	int k;
	int n;
	int m;
	int x;
	int y;
	
	while (cin >> k)
	{
		if (k != 0)
		{
			cin >> n >> m;

			while (k--)
			{
				cin >> x >> y;

				if (x == n || y == m)
					cout << "divisa" << endl;

				else if (x < n && y > m)
					cout << "NO" << endl;

				else if (x > n && y > m)
					cout << "NE" << endl;

				else if (x > n && y < m)
					cout << "SE" << endl;

				else if (x < n && y < m)
					cout << "SO" << endl;
			}
		}
	}

	return 0;
}