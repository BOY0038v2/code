//Problema: es 27 pag 142
//Compilatore: Dev-C++ 5.11
//Autore: Laerti Langa
//Data Creazione: 29/09/2021

#include <iostream>
using namespace std;

main(
    
)
{
string a,b;
int c,d;
cout<<"Nome della prima squadra: ";
cin>>a;
cout<<"Nome della seconda squadra: ";
cin>>b;
cout<<"Numero di gol della squadra \""<<a<<"\" ";
cin>>c;
cout<<"Numero di gol della squadra \""<<b<<"\" ";
cin>>d;
if (c==d)
    {
      cout<<"pareggio";
    }
else
    {
	if (c>d)
	{
	    cout<<"Vince la squadra \""<<a<<"\"";	
	}
	else
	{
	    cout<<"Vince la squadra \""<<b<<"\"";	
	}    
    }
}
