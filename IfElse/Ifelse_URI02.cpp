#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double nota1, nota2; 
    int nota = 1;
    
	do {
		do {
			cin >> nota1;
			if (nota1 < 0 || nota1 > 10)
				cout << "nota invalida" << endl;
		}while (nota1 < 0 || nota1 > 10);
		
		do {
			cin >> nota2;
			if (nota2 < 0 || nota2 > 10)
				cout << "nota invalida" << endl;
		}while (nota1 < 0 || nota2 > 10);
		
		cout << "media = " << (nota1+nota2)/2.0 << endl;
		
		do {
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> nota;
		}while (nota != 1 && nota != 2);
		
	}while ( nota != 2);    
	
	return 0;
}