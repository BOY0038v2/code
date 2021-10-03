//problema: es 19 pag 142
//compilatore: Dev-C++ 5.7.1
//autore: Laerti Langa
//data creazione: 26/05/2021

#include <iostream>
using namespace std;

main(
    
)
{
float a,b,m;
cout<<"dammi il primo valore...";
cin>>a;
cout<<"dammi il secondo valore...";
cin>>b;
if (a!=b)
    {
        if (a>b)
            {
            m=a-b;
            cout<<"la differenza tra i due numeri e' "<<m;
            }
        else
            {
            m=a+b;
            cout<<"la somma tra i due numeri e' "<<m;
            }
    }
else

cout<<"i due numeri sono uguali";

}
