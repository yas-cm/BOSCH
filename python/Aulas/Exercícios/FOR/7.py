import random

#exercicio 1
'''
lista = []

for i in range(10):
    lista.append(input("--> "))

cont = 0
n1 = input("Numero : ")

for i in range(9):
    m =int(lista[i])
    if(n1 >  lista[i]):
        cont = cont + 1


print("Dentre os numero digitados, {} sao menores que {}".format(cont,n1))
'''
#exercicio 2
'''
lista = []
par = []
impar = []

for i in range(10):
    n1 = int(input("--> "))

    lista.append(n1)
    if(lista[i] % 2 ==0 ):
        par.append(n1)
    else:
        impar.append(n1)


print("Numeros: ", lista )
print("Par: ", par )
print("Impar: ", impar )

'''

#exercicio 3
'''
lista = []


for i in range(10):
    n1 = int(input("--> "))
    lista.append(n1)

    
Maior = lista[0]
Menor = lista[0]

for i in range(10):

    if(lista[i] > Maior):
        Maior = lista[i]
    elif(lista[i] < Menor ):
        Menor  = lista[i]



print("Numeros: ", lista )
print("Maior: ", Maior)
print("Menor: ", Menor )

'''

#exercicio 4

'''
lista = []






for i in range(10):

    n1 = int(input("--> "))
    lista.append(n1)
   
print("Lista antes de organizar: ", lista)

for i in range (10):
    for j in range(10):
        if(lista[i] <  lista[j]):
            memoria = lista[i]
            lista[i]  = lista[j]
            lista[j]  = memoria


print("Lista depois de organizar: ", lista)

'''
#exerciico 5
'''

lista = []

for i in range(10):

    n1 = int(input("--> "))
    lista.append(n1)
   
print("Lista antes de organizar: ", lista)

for i in range (10):
    for j in range(10):
        if(lista[i] >  lista[j]):
            memoria = lista[i]
            lista[i]  = lista[j]
            lista[j]  = memoria


print("Lista depois de organizar: ", lista)
'''


lista = []

for i in range (10):
    lista.append((random.randint(0,100)))

print(lista)







