//Problema:  es32 pag 142 (scheda di classroom)
//Compilatore: Dev-C++ 5.11
//Autore: Laerti Langa
//Data di creazione: 29/09/2021

#include <iostream>
using namespace std;

main()
{
int a,b;
float c;
cout<<"Inserire il numero di giorni ---> ";
cin>>a;
if (a>15)
	{
		b=a-15;
		c=b*0.8;
		cout<<"Il costo della multa e' di "<<c<<" Euro";
	}
else
	{
		cout<<"Nessuna multa";
	}














}
