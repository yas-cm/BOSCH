import random

lista1 = []
lista2 = []
k = 0
cont = 0
for i in range (10):
    lista1.append(random.randint(0, 100))
    
for j in range (10):
    lista2.append(random.randint(0, 100))
    
print('LISTA 1: ',lista1)
print('LISTA 2: ',lista2)

for i in range (len(lista1)):
    for j in range (len(lista2)):
        if lista1[i] == lista2[j]:
            print(f'O numero {lista1[i]} esta nas duas listas')
            cont = cont + 1
        
   

if cont == 0:
    print('Nao existem numeros iguais nas listas')