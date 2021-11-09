//Problema: Scheda1-iterazione post_condizionale | Problema1
//Compilatore: Microsoft Visual Studio Code 1.61.2
//Autore: Laerti Langa
//Data di creazione: 09/11/2021

#include <iostream>
using namespace std;

main()
{
    float b,h;
    cout<<"Inserire la base: ";
    cin>>b;
    cout<<"Inserire l'altezza: ";
    cin>>h;
    if (b>0 && h>0)
            cout<<"L'area e' di "<<b*h/2;
    else
        cout<<"Valori di input errati";
}
