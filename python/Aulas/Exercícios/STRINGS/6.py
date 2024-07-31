
cont = 0
rep = []
c = []
frase = input('Digite uma frase: ').upper()


for k in range (len(frase)):
    for j in range (len(frase)):
        if frase[k] == frase[j]:
            if frase[k] not in rep:
                rep.append(frase[k])
                
rep.sort()  # pra listas

for i in range (len(rep)):
    for h in range (len(frase)):
        if rep[i] == frase[h]:
            cont = cont + 1
    c.append(cont)
    cont = 0
    

for l in range (len(rep)):
    print(f"'{rep[l]}' = {c[l]}", end = ', ')