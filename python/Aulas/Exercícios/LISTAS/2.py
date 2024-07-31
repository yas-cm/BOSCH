numeros = []
pares = []
impares = []

for k in range (10):
    numeros.append(int(input("--> ")))

for i in range(len(numeros)):
    if numeros[i] % 2 == 0:
        pares.append(numeros[i])
    else:
        impares.append(numeros[i])
        
print('Numeros: ',numeros)
print('Pares: ',pares)
print('Impares: ',impares)