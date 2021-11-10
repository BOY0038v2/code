//Problema: Scheda1-iterazione post_condizionale | Problema3
//Compilatore: Microsoft Visual Studio Code 1.61.2
//Autore: Laerti Langa
//Data di creazione: 09/11/2021
#include <math.h>
#include <iostream>
using namespace std;

main()
{
    float i,c1,c2,l;
    cout<<"Inserire la lunghezza dell'ipotenusa: ";
    cin>>i;
    cout<<"Inserire la lunghezza del cateto: ";
    cin>>c1;
    cout<<"Inserire la lunghezza del lato: ";
    cin>>l;
    c2=sqrt(i*i-c1*c1); // lunghezza del secondo cateto (teorema di pitagora)
    if (c1*c2/2==l*l)   // c1*c2/2=area triangolo, l*l=area quadrato  
        cout<<"Le due figure sono equivalenti";
    else
        cout<<"Le due figure non sono equivalenti";
    
}