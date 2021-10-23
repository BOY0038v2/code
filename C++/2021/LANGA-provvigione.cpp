//Problema: “provvigione” (premio)
//Compilatore: Microsoft Visual Studio Code 1.61.2
//Autore: Laerti Langa
//Data di creazione: 20/10/2021

#include <iostream>
using namespace std;
/*
1) Il primo errore si trova nella via del vero della prima selezione, dove la variabile caf viene moltiplicata per 0.12 invece di 0.1;
   Il secondo errore si trova nella via del vero della seconda selezione, dove il the viene moltiplicato per 0.15 invece di 0.16
   Il secondo errore si trova nella via del vero della seconda selezione, dove le variabili the e caf vengono sommate a 0.12 invece di essere moltiplicate per 0.12
2) La selezione e' di tipo binaria ed a cascata
*/
main()
{
float caf,the,pc,pt,premio;
cout<<"Quanti euro di caffe' sono stati venduti? ";
cin>>caf;
cout<<"Quanti euro di the sono stati venduti? ";
cin>>the;
if (caf>5000)
		pc=caf*0.1;
else 
	pc=caf*0.05;
if (the>10000)
		pt=the*0.16;
else 
	pt=the*0.04;
if (the+caf>20000)
		premio=(the+caf)*0.12;
else
	premio=0;
cout<<"Il totale della provvigione e' di "<<pt+pc+premio<<" Euro.";
}

