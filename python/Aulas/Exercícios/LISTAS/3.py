lista = []

for i in range (10):
    lista.append(int(input('--> ')))
    
maior = lista [0]
menor = lista [1]

for elemento in lista:
    if elemento > maior:
        maior = elemento
    elif elemento < menor:
        menor = elemento

print('Numeros: ', lista)
print('O maior numero eh: ',maior)
print('O menor numero eh: ',menor)
