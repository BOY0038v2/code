//Problema: Scheda1-iterazione post_condizionale | Problema1_bis
//Compilatore: Microsoft Visual Studio Code 1.61.2
//Autore: Laerti Langa
//Data di creazione: 09/11/2021

#include <iostream>
using namespace std;

main()
{
    float b,h;
    do {
    cout<<"Inserire la base: ";
    cin>>b;
    cout<<"Inserire l'altezza: ";
    cin>>h;
    } while (b<=0 || h<=0);
    cout<<"L'area e' di "<<b*h/2;
}