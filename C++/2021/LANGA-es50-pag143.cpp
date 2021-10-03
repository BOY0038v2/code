//Problema: es 50 pag 143
//Compilatore: Dev-C++ 5.11
//Autore: Laerti Langa
//Data Creazione: 29/09/2021

#include <iostream>
using namespace std;

main(
    
)
{
float a;
int b;
cout<<"Inserisci l'ammontare della multa: ";
cin>>a;
cout<<"Inserisci il numero di giorni trascorsi: ";
cin>>b;
if (b>14)
    {
      a=a+(a*30)/100;
    }
else
    {
      if (b>7)
          {
            a=a+(a*10)/100;
          }
    }
cout<<"Il costo finale della multa e' di "<<a<<" Euro";
}
