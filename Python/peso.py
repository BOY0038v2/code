peso = float(input("inserire peso... "))
misura = str(input("(K)g o (L)bs ?...  "))

if misura == "K" or misura == "k":
    print("peso in Kg: " + str(peso))
elif misura == "L" or misura == "l":
    print("peso in Lbs: " + str(peso))
else:
    print("UDM non valida")
#oppure metodo più particolare co .upper
"""
if misura.upper() == "K":
    print("peso in Kg: " + str(peso))
elif misura.upper() == "L":
    print("peso in Lbs: " + str(peso))
else:
    print("UDM non valida")
""" 
