#include <iostream>

using namespace std;

int main (){
	
	int x,y,z;
	
	cin >> x >> y >> z;
	
	cout << endl;
	
	
	if (x<y && x<z){
    if (y<z){
        cout << x << endl;
		cout << y << endl;
		cout << z << endl;
		}
    else 
		cout << x << endl;
        cout << z << endl;
		cout << y << endl;
    }
    if (y<x && y<z){
	if (x<z){
		cout << y << endl;
		cout << x << endl;
		cout << z << endl;
	}
	else 
		cout << y << z << x;
    }
if (z<x && z<y){
	if (x<y){
        cout << z << endl;
		cout << x << endl;
		cout << y << endl;
	}
	else 
		cout << z << y << x;
       
}

    cout << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
    
}



		
		
