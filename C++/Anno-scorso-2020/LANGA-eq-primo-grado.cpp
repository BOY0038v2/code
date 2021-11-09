
//Problema: equazione di primo grado
//Compilatore: Microsoft Visual Studio Code 1.56.2
//Autore: Laerti Langa
//Data di creazione: 14/05/2021

#include <iostream>
using namespace std;

main()
{
float a,b,x;
cout<<"inserisci il valore di a... ";
cin>>a;
cout<<"inserisci il valore di b... ";
cin>>b;
if (a==0)
{
    if (b==0)
    {
        cout<<"l'equazione e' indeterminata";
    }
    else
        {
        cout<<"l'equazione e' impossibile";
        }
}
else
    {
    cout<<"l'equazione e' determinata"<<endl;
    x=-b/a;
    cout<<"x="<<x;
    }
}
