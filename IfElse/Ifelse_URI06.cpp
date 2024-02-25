#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	double A, B, C, delta;
	
	cin >> A >> B >> C;
	
	delta = (pow (B,2)) - 4 * A * C;
	
	if (delta < 0 || A == 0){
		cout << "Impossivel calcular" << endl;
	}
	else {
		cout << "R1 = " << (-B + sqrt (delta)) / (2.0 * A) << endl;
		cout << "R2 = " << (-B - sqrt (delta)) / (2.0 * A) << endl;
	}
		
    cout << fixed << setprecision (5);
 
    return 0;
}