
//Problema: porto-turistico
//Compilatore: Microsoft Visual Studio Code 1.61.0
//Autore: Laerti Langa
//Data di creazione: 19/10/2021

#include <iostream>
using namespace std;
/*

    1) Il flow-chart è corretto soltanto per i numeri positivi
    
    2) La selezione è di tipo binaria e nidificata.
    
    Risposta alla domanda: Ogni via contiene una istruzione.

*/
main()
{
int giorni,l,p,paga;
cout<<"Numero di giorni: ";
cin>>giorni;
cout<<"Lunghezza della barca: ";
cin>>l;
if (l<5 && l>0)
    p=15;
else
{
    if (l<12)
        p=22;
    else
    {
        if (l<15)
            p=30;
        else
            p=45;
    }
}
paga=p*giorni;
cout<<"Il costo totale dell'ormeggio e' di "<<paga<<" Euro.";
}
