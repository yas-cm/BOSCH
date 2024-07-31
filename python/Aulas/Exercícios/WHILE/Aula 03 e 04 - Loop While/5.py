
soma = 0
media = 0
cont = 0

while True:
    num = int(input('Digite um numero inteiro: '))
    
    if num == 0:
        break
    
    cont = cont + 1
    soma = soma + num
    media = soma / cont
        
    

print('\n\nQuantidade de numeros digitados: ', cont)
print('Soma: ',soma)
print('Media: ',media)