#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char frase [50];
	char *pch;
	
	cin.getline(frase,50);
	
	pch = strtok (frase, " , .");
	while (pch != NULL)
	{
		cout << pch << endl;
		pch = strtok (NULL, " ");
	}

	return 0;
}