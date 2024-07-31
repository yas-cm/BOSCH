
while True:
    nome = input('Escreva seu nome: ').split()
    if len(nome) <= 100:
        break
    else:
        print('Quantidade maxima de caracteres excedida.')


for k in range (len(nome)):
    nome[k] = nome[k].capitalize()
    
print(nome[-1], end = ' ') # --> ultimo sobrenome no inicio

for k in range (len(nome)-1):
    if len(nome[k]) != 2:
        print(f'{nome[k][0]}.', end = ' ')

    
