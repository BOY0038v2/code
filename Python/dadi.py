d = "vuoi giocare? (S)i / (N)o "
z = 1
for z in range(10000000):
    y = input(d)
    d = "vuoi rigiocare (S)i / (N)o "
    if y.upper() == "S" or y.upper() == "SI":
        import random
        print("lancio i dadi...")
        x = random.randint(0,6)
        print("è uscito " + str(x))
    else:
        print("adios")
        exit()

