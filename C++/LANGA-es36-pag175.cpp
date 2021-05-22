//problema: es 36 pag 175
//compilatore: Dev-C++ 5.7.1
//autore: Laerti Langa
//data creazione: 13/05/2021

#include <iostream>
using namespace std;

main()
{
float a,r;
cout<<"inserisci il prezzo da scontare... ";
cin>>a;
if (a>=0)
    if (a<100)
    {
    r=a-a*0.05;
    cout<<"il prezzo scontato e' di €"<<r;
    }
    if (a>=100 and a<300)
    {
    r=a-a*0.1;
    cout<<"il prezzo scontato e' di €"<<r;
    }
    if (a>=300)
    {
    r=a-a*0.2;
    cout<<"il prezzo scontato e' di €"<<r;
    }
else
    cout<<"prezzo non valido";
}