#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	double A, B, C, delta;
	
	cin >> A >> B >> C;
	
	delta = (B * B) - 4 * A * C;
	
	if (delta < 0 || A == 0){
		cout << "R1 = " << (-B + sqrt (delta)) / (2.0 * A) << endl;
		cout << "R2 = " << (-B - sqrt (delta)) / (2.0 * A) << endl;
	}
	else {
		cout << "Impossivel calcular" << endl;
	}
		
    cout << fixed << " R1 = " << setprecision (5);
	cout << fixed << " R2 = " << setprecision (5);
 
    return 0;
}