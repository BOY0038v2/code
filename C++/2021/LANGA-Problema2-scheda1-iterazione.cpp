//Problema: Scheda1-iterazione post_condizionale | Problema2
//Compilatore: Microsoft Visual Studio Code 1.61.2
//Autore: Laerti Langa
//Data di creazione: 09/11/2021

#include <iostream>
using namespace std;

main()
{
    float bmin,bmag,h;
    cout<<"Inserire la base maggiore: ";
    cin>>bmag;
    cout<<"Inserire la base minore: ";
    cin>>bmin;
    cout<<"Inserire l'altezza: ";
    cin>>h;
    if (bmin>0 && bmag>0 && h>0)
        {
            cout<<"L'area e' di "<<(bmin+bmag)*h/2;
        }
    else
        cout<<"Valori di input errati";
}