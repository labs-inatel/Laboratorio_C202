#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char nome1 [50];
	char nome2 [50];
	char nome3 [50];
	
	cin.getline(nome1, 50);
	cin.getline(nome2, 50);
	cin.getline(nome3, 50);
	
	if (strcmp(nome1, nome2) < 0)
	{
		if (strcmp(nome2, nome3) < 0)
		{
			cout << nome1 << " " << nome2 << " " << nome3 << endl;
		}
		else if (strcmp(nome1, nome3) < 0)
		{
			cout << nome1 << " " << nome3 << " " << nome2 << endl;
		}
		else
		{
			cout << nome3 << " " << nome1 << " " << nome2 << endl;
		}
	}
	else if (strcmp(nome1, nome2) > 0)
	{
		if (strcmp(nome1, nome3) < 0)
		{
			cout << nome2 << " " << nome1 << " " << nome3 << endl;
		}
		else if (strcmp(nome2, nome3) < 0)
		{
			cout << nome2 << " " << nome3 << " " << nome1 << endl;
		}
		else
		{
			cout << nome3 << " " << nome2 << " " << nome1 << endl;
		}
	}
	
	return 0;
}