//problema: dato in ingresso un numero intero non nullo, dire se è positivo o negativo.
//compilatore: Dev-C++ 5.7.1
//autore: Antonella Bianchi
//data creazione: 23/04/2021

#include <iostream>
using namespace std;

main()
{
int n;
cout<<"inserisci il numero...";
cin>>n;
if (n>0)
	{  //quando c'è una sola istruzione, le parentesi graffe r.15 e 17 sono superflue
	cout<<"il numero inserito  e' positivo ";
	}

else
	{  // come sopre, le r. 20 e 22 sono superflue
	cout<<"il numero inserito  e' negativo ";
	}
}


