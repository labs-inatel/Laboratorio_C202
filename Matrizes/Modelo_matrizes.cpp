#include<iostream>

using namespace std;

int main()
{
	int mat [2][3]; // matriz de dados
	int nLinhas = 2; // numero de linhas
	int nColunas = 3; // numero de colunas
	int l, c; // contadores
	int soma=0; // soma dos elementos da matriz
	
	//Preenchendo a matriz
	mat[0][0] = 12;
	mat[0][1] = 24;
	mat[0][2] = 37;
	mat[1][0] = 23;
	mat[1][1] = -2;
	mat[1][2] = 15;

	//Mostrando a primeira linha
	cout << "Primeira linha: " << endl;
	l = 0;
	for(c = 0; c < nColunas; c++)
		cout << mat[l][c] << " ";
	cout << endl;

	
	//Mostrando a segunda linha
	cout << "Segunda linha:" << endl;
	l = 1;
	for(c = 0; c < nColunas; c++)
		cout << mat[l][c] << " ";
	cout << endl;

	
	//Mostrando a matriz inteira por linhas
	cout << "Matriz: " << endl;
	for(l = 0; l < nLinhas; l++)
	{
		for(c = 0; c < nColunas; c++)
			cout << mat[l][c] << " ";
		cout << endl;
	}
	
	
	//Mostrando a matriz inteira por colunas
	cout << "Matriz: " << endl;
	for(c = 0; c < nColunas; c++)
	{
		for(l = 0; l < nLinhas; l++)
			cout << mat[l][c] << " ";
		cout << endl;
	}
	
	//Soma dos elementos da matriz
	for(l = 0; l < nLinhas; l++)
		for(c = 0; c < nColunas; c++)
			soma = soma + mat[l][c];
			
	cout << "soma = " << soma << endl;

	return 0;
}
