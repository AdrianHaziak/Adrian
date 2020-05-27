#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
	int a;
int main() 
{
	cout<<"Losowe liczby to: "<< endl;
	
	srand( time( NULL ));
	
		for(int i=1; i<50; i++)
	{
	a = rand ()%99+1;
	cout << a << endl;
	}	
			
		
	return 0;
}
