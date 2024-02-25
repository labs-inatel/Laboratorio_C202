#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream arqout;
	ifstream arqin;
	char nomeArq[50];
	double valores;

	cin.getline(nomeArq, 50);
	cin >> valores;

	while(valores != 0)
	{
		arqout.open(nomeArq, ofstream::out);
		arqout << valores << " ";
		arqout.close();

		arqin.open(nomeArq, ifstream::in);
		arqin >> valores;
		cout << valores << " ";
		arqin.close();

		cin >> valores;
	}

	return 0;
}
