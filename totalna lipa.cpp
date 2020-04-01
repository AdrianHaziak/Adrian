#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string nr_buta, gra;
int wzrost;

int main()
{
    cout<< "Podaj nr buta: ";         cin>>nr_buta;
    cout<< "Podaj grê: ";        cin>>gra;
    cout<< "Podaj wzrost: ";           cin>>wzrost;

    fstream plik;
    plik.open("lol.txt", ios: :in);

    if(plik.good()==false)
    {
        cout<<"Plik nie istnieje ";
        exit(0);
    }

    string gru;
    int nr_gru=1;
    while(getline(plik, gru))
    {
        switch(nr_gru)
        {
            case 1: nr_buta = gru; break;
            case 2: gra = gru ; break;
            case 3: nr_tel=atoi (gru.cstr());
        }



        nr_gru++;

    }
        plik<< nr_buta <<endl;
    plik<< gra <<endl;
    plik<< wzrost <<endl;

    plik.close();

        cout<< nr_buta <<endl;
    cout<< gra <<endl;
    cout<< wzrost <<endl;

    return 0;
}
