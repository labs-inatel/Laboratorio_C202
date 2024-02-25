#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream arqout;
	ifstream arqin; 
	
	int x=2;

	arqout.open("dados.txt", ofstream::out);

	arqout << x << endl;

	arqout.close();

	arqin.open("dados.txt",ifstream::in);
	
	arqin >> x;
	
	cout << "x= " << x << endl;
	
	arqin.close();
	
	return 0;
}