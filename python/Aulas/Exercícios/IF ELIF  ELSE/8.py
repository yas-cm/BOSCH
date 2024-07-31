num = int(input('Digite um número inteiro menor que 1000: '))

if (num > 1000):
    print('Eu falei abaixo de 1000!!!')

else:
    centenas = num//100
    dezenas = (num%100)//10
    unidades = ((num%100)%10)//1
    
    print('{} centenas {} dezenas e {} unidades'.format(centenas,dezenas,unidades))
