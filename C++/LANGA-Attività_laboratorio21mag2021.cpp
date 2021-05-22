
//Problema: data l'equazione ax^2+bx+c=O con a,b,c appartenenti a R
//comuicare il tipo di equazione (primo o secondo grado) e le rispettive soluzioni
//Compilatore: Microsoft Visual Studio Code 1.56.2
//Autore: Laerti Langa
//Data di creazione: 21/05/2021

#include <iostream>
#include <math.h>
using namespace std;

main()
{
float a,b,c,x,x1,x2,d;
cout<<"inserisci il valore di a... ";
cin>>a;
cout<<"inserisci il valore di b... ";
cin>>b;
cout<<"inserisci il valore di c... ";
cin>>c;
if (a==0)
{
    cout<<"l'eqazione data e' di primo grado"<<endl;
    if (b==0)
    {
        if (c==0)
        {
            cout<<"l'eqazione e' indeterminata";
        }
        else
        {
            cout<<"l'eqazione e' impossibile";
        }  
    }
    else
    {
        cout<<"l'equazione e' determinata";
        x=-c/b;
        cout<<"x="<<x;
    }
}
else
{
    cout<<"l'eqazione data e' di secondo grado"<<endl;
    d=b*b - 4*a*c;
    if (d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }
    else
    {
        if (d==0)
        {
            x=-b/2*a;
            cout<<"x="<<x;
        }
        else
        {
            cout<<"non esistono soluzioni reali";
        }
        
    }
}
}