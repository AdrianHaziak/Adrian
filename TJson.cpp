#include <iostream>
#include <fstream>

using namespace std;

int main()
{
		ifstream wej;
		ofstream wyj("wyj.json");
		
		wej.open("we.txt");
		wyj.open("wyj.json");
		
		if(wej.good())
			while(!wej.eof())
		{
			wej>>wyj;
		}
		
	wej.close();
	wyj.close();
	return 0;
}
