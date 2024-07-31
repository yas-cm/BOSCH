lista = [1,2,3,4,5,5,6,8,1,10]
lista2 = [1,2,5,10,20,25,27,0,1,2]

repetidos = []


for i in range(len(lista)):
    for j in range (len(lista2)):
        if lista[i] == lista2[j] and lista[i] not in repetidos:
            print(f'O numero {lista[i]} esta nas duas listas')
            repetidos.append(lista[i])
        
print(repetidos)

if repetidos == 0:
    print('Nao ha numeros repetidos :/')