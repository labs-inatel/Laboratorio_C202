#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream arq;
	double x[10];
	char nomeArq[50];
	int n;

	cin.getline(nomeArq, 50);

	arq.open(nomeArq, ifstream::in);

	int i = 0;

	while(!arq.eof())
	{
		arq >> x[i];
		i++;
	}

	n = i;

	for(i = 0; i < n; i++)
	{
		if(x[i] != 0)
		{
			cout << x[i] << " ";
		}
	}

	arq.close();

	return 0;
}
