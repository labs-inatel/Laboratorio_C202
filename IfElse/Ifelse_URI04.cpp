#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	int dia, mes, ano;
	int ds, f, g, delta, n;
	double frac, intpart;
	
    cin >> dia >> mes >> ano;

    if( mes > 2)
	{
        g = ano;
        f = mes + 1;
    }
	else
	{
		if(mes <= 2)
		{
			g = ano - 1;
        	f = mes + 13;	
		} 
	} 

    n = int(365.25 * g) + int(30.6 * f) - 621049 + dia;

    if(n < 36523)
	{
        delta = 2;
    }
	else
	{
		if( 36523 <= n and n < 73048)
		{
			delta = 1;	
		}
		else
		{
			if(n >= 73048)
			{
        	delta = 0;
	  	    }	
		}
    }

    frac = modf((double)n / 7, & intpart);

    ds = round(frac * 7) + delta + 1;

    switch (ds){
        case 1:
            cout << "domingo" << endl;
            break;
        case 2:
            cout << "segunda-feira" << endl;
            break;
        case 3:
            cout << "terca-feira" << endl;
            break;
        case 4:
            cout << "quarta-feira"  << endl;    
            break;
        case 5:
            cout << "quinta-feira" << endl;
            break;
        case 6:
            cout << "sexta-feira" << endl;
            break;
        case 7:
            cout << "sabado" << endl;
            break;
    }
    
    return 0;
}