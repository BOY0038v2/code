//Problema: es 41 pag 143
//Compilatore: Dev-C++ 5.11
//Autore: Laerti Langa
//Data Creazione: 29/09/2021

#include <iostream>
using namespace std;

main(
    
)
{
float a,b,s;
cout<<"Prezzo intero del gioco in euro---> ";
cin>>a;
cout<<"Percentuale di sconto---> ";
cin>>b;
if (b==20 || b==50)
    {
      s=(a*b)/100;
      a=a-s;
      cout<<"Il prezzo scontato e' di "<<a<<" Euro";
    }
else
    {
      cout<<"La percentuale di sconto ricevuta e' errata";
    }
}
