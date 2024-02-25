#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char senha[50];
	
	cin.getline(senha,50);
	
	if(strcmp(senha,"1234")== 0)
		cout << "Pode passar" << endl;
	else
	{
		cout << "senha errada" << endl;
	}
	
	return 0;
}