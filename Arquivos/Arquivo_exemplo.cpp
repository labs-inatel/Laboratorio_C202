#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream arq;
	int processo[5], tempo[5], priorid[5];
	int n, i = 0;

	arq.open("prioridade.txt", ifstream::in);

	while(!arq.eof())
	{
		arq >> processo[i] >> tempo[i] >> priorid[i];
		i++;
	}
	n = i;
	
	for (i = 0; i < 5; i++)
		


	for(i = 0; i < n; i++)
		cout << "X = " << x[i] << endl;

	arq.close();

	return 0;
}
