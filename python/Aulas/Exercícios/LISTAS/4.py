import random

lista = []
j = 0
for i in range (10):
    lista.append(random.randint(0, 100))

print('Lista antes de organizar:\n',lista)


        
for j in range (10):
    for i in range (len(lista)-1):
        if lista[i] > lista[i+1]:
            aux = lista[i+1]
            lista[i+1] = lista[i]
            lista[i] = aux
    



print('Lista organizada: ',lista)