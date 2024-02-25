#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int X,Y,C;
    double P,T,D;
    
    cin >> X >> Y >> C >> P;
    
    D = X * Y;
    P = C * P;
    T = P - D;
    
    cout << fixed << setprecision (2);
    cout << "R$ " << T << endl;
    
    return 0;
}
