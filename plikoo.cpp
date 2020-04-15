#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   		 ifstream numerki;
   		 ofstream tablicaa;

    int tab[1000];
    int x=0;

  		  numerki.open ( "numerki.txt" );

    if ( numerki.good() )
        while ( !numerki.eof() ){
                numerki>>tab[x];
                x++;
        }

   		 numerki.close ();

   		 tablicaa.open ( "dwa.txt" );

    for ( int i=x; i=0; i-- )
       	 tablicaa<<tab[i]<< " " ;

  		  tablicaa.close();

}
