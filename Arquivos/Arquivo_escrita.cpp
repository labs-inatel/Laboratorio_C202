#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	ifstream arqin;
	ofstream arqout;
	double valores[10];
	double val;
	char nomeArq[50];
	int i = 0;

	cin.getline(nomeArq, 50);
	cin >> val;

	arqout.open(nomeArq, ofstream::out);

	while(val != 0)
	{
		arqout << val << endl;
		cin >> val;
	}

	arqout.close();

	arqin.open(nomeArq, ifstream::in);

	while(!arqin.eof())
	{
		arqin >> valores[i];
		i++;
	}

	val = i - 1;

	for(i = 0; i < val; i++)
	{
		cout << valores[i] << " ";
	}

	arqin.close();

	return 0;
}
