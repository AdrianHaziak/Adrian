#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

struct gra1 {
    string tytul;
    string rodzaj;
    int ocena;
};

struct gra2 {
	string tytul;
	string rodzaj;
	int ocena;
};


int main()
{
    gra1 Fortnite; 

    Fortnite.tytul= "Fortnite";
    Fortnite.rodzaj= "Battle Royale";
    Fortnite.ocena= 4;

    cout << "Tytul: " <<  Fortnite.tytul   << endl;
	cout << "Rodzaj:  " << Fortnite.rodzaj << endl;
	cout << "Ocena:  " << Fortnite.ocena << endl;
    
cout<< "" << endl;

	gra2 theForest;
	
	theForest.tytul= "The Forest";
	theForest.rodzaj= "Survival";
	theForest.ocena= 5;
	
	cout << "Tytul: " << theForest.tytul << endl;
	cout << "Rodzaj: " << theForest.rodzaj << endl;
	cout << "Ocena: " << theForest.ocena << endl;
	return 0;
};	
	
	


