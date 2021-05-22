print(1 + 1)

print(9 - 5)

print(2 * 3)
print(2 ** 5) #potenza

print(9 / 4)
print(9 // 4)
print(9 % 4) #resto

print(3 <= 4)
print("-------------------------op logici--------------------------------------")
prezzo = int(30)
print(prezzo > 10 and prezzo < 40 ) #falso
print(prezzo > 10 or prezzo < 40 )
print(not prezzo < 10 and  not prezzo < 40 ) #il not inverte la risposta
print("-------------------------if else--------------------------------------")

gradi = float(input("quanti gradi ci sono? "))
if gradi > 30:
    #qui tutti i comandi se l'if è confermato
    print("fa caldooo")
                                                        #se scrivo il codice qui senza il tab allora non fa parte dell'if!!
elif gradi > 16 and gradi < 25:                         #l'elif è tipo l'else però puoi  mette n altra condizione invece de di subito altrimenti.
    print("abbastanza caldo")
elif gradi > 8 and gradi < 16:
    print("non caldo")
else:
    print("fa freddo")