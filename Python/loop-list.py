var = 1
while var <= 5: #stampare numeri da 1 a 5
    print(var)
    var = var + 1
print("---------------------------LISTS----------------------")
nomi = ["luca", "gianni", "giacomo", "mario"]
print(nomi[-2])            # 0=luca, 1=gianni e cosi via
print(nomi[0:3])

numeri = [1, 2, 3, 4, 5, 6,]
numeri.insert(98, -3)
print(numeri)
print(5 in numeri) #per vede se ce sta sulla lista