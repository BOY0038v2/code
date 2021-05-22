//problema: Dati in input 3 numeri interi, comunicare la media aritmetica.
//compilatore: Dev-C++ 5.7.1
//autore: Antonella Bianchi
//data creazione: 23/04/2021

#include <iostream>
using namespace std;

main()
{
//dichiarazione delle var. di I/O	
int a,b,c;  // var. di tipo intero
float m;  //var. di tipo reale
//inserimento dei valori
cout<<"dammi il primo valore...";
cin>>a;
cout<<"dammi il secondo valore...";
cin>>b;
cout<<"dammi il terzo valore...";
cin>>c;
//elaborazione
m=float(a+b+c)/3;
//comunicazione del risultato
cout<<"la media e'..."<<m;
}


