nome = input('Escreva seu nome: ').upper()

nome = nome.split()

for k in range (len(nome)):
    
    if len(nome[k]) != 2:
        print(f'{nome[k][0]}.', end = ' ')
    else:
        print(nome[k].lower(), end = ' ')
    