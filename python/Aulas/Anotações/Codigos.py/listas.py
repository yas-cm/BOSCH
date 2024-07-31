lista = [1, 2890, 'hihihiha']


print('\nAcessando com o indice:')
for i in range (len(lista)):
    print(lista[i])
    
    
print('\nAcessando sem o indice:')
for elemento in lista:
    print(elemento)
    
    
#------------------------------------------------------------------------------


nomes = []
for i in range (5):
    nomes.append(input("--> "))
    while True:
        if(len(nomes[i])>15):
            print("Nome muito grande.\n Escreva novamente: ")
            nomes[i] = input("--> ")
        else:
            break
print(nomes)


#------------------------------------------------------------------------------


while True:
    teste = input('Digite s ou n: ').lower()
    
    if teste in ['s','n']:
        continue
        
        
    if teste not in ['s','n']:
        print("INVALIDO!!!!!!!")
        break
    
    
#------------------------------------------------------------------------------


print('\n\n')
l = [1, 2, 3]
aux = l[0]
l[0] = l[2]
l[2] = l[1]
l[1] = aux
print(l)


#------------------------------------------------------------------------------

lili = [['fer','gab'],[21,22]]
print(lili)
















