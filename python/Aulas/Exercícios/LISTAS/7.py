# import random

lista1 = [1,2,3,4,5,5,6,8,1,10]
lista2 = [1,2,5,10,20,25,27,0,1,2]
lista3 = []


# for i in range (10):
#     lista1.append(random.randint(0, 100))
    
# for j in range (10):
#     lista2.append(random.randint(0, 100))
    
print('LISTA 1: ',lista1)
print('LISTA 2: ',lista2)

for i in lista1:
    if i in lista2 and i not in lista3:
        lista3.append(i)
        
print('Numeros que se repetem: ',lista3)
    