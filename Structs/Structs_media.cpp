#include <iostream>
#include <iomanip>

using namespace std;

struct dados
{
	int matricula;
	float p1,p2;
};

int main()
{
	dados atleta;
	float media;
	
	cin >> atleta.matricula;
	cin >> atleta.p1;
	cin >> atleta.p2;
	
	media = ((atleta.p1*2)+(atleta.p2*3))/(3+2);
	
	cout << "Matricula do aluno: " << atleta.matricula << endl;
	cout << fixed << setprecision(2);
	cout << "Nota da primeira prova: " << atleta.p1 << endl;
	cout << "Nota da segunda prova: " << atleta.p2 << endl;
	cout << "Media: " << media << endl;
	
	return 0;
}