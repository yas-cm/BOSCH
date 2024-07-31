#Criando uma lista já com valores
lista = ["a", "b", "c"]

#Acessando com o indice
for i in range(3):
    print(i)
    
#Acessando sem o indice
for elemento in lista:
    print(elemento)
    
# -------------------------------------------------------------
    
#Criando uma lista vazia
nomes = []

#Adicionando elementos dentro da lista
for i in range(5):
    nomes.append(input("--> "))

#Mostrando os elementos
for j in range(5):
    print(nomes[j])
    
print("OK")

### CUIDADO PARA NÃO ACESSAR ÍNDICES SEM ITENS

# -------------------------------------------------------------

#Usando o len para percorrer uma lista, quando não sabemos o tamanho dela
nomes = []

while True:
    nome = input("--> ")
    if nome == "0":
        break
    nomes.append(nome)
    
#len(nomes) - tamanho da lista
for i in range(len(nomes)):
    print(nomes[i])
    
# -------------------------------------------------------------   
    
#Usando listas para testar condições

while True:
    teste = input("Digite s ou n: ").lower()
    
    #Usando comparações sem lista
    if teste != "s" and teste != "n":
        print("invalido")
        
    if teste == "s" or teste == "n":
        break
        
    #Usando comparações com lista
    if teste in ["s", "n"]:
        break
    
    if teste not in ["s", "n"]:
        print("invalido")
        
# -------------------------------------------------------------

#Trocando itens de lugar
        
lista = [10, 1, 2]

#Para não perder valores
memoria = lista[0]

lista[0] = lista[1]
lista[1] = memoria

# -------------------------------------------------------------

#Acessando listas dentro de listas

lista = [["Fer", "Gab"], [21, 22]]

"Fer" = lista[0][0]
"Gab" = lista[0][1]

21 = lista[1][0]
22 = lista[1][1]
