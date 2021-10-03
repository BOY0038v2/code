//Problema: es 36 pag 175
//Compilatore: Dev-C++ 5.11
//Autore: Laerti Langa
//Data Creazione: 29/09/2021

#include <iostream>
using namespace std;

main(

)
{
float a,s;
cout<<"Inserire il prezzo: ";
cin>>a;
if (a<100)
    {
        s=a*5/100;
    }
else
    {
        if (a>=300)
            {
                s=a*20/100;
            }
            else
            {
                s=a*10/100;
            }
    }
a=a-s;
cout<<"Il prezzo scontato e' di "<<a<<" Euro";
}
