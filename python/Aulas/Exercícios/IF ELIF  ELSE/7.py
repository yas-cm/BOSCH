n1 = int(input('Digite o primeiro número: '))
n2 = int(input('Digite o segundo número: '))
n3 = int(input('Digite o terceiro número: '))

if (n1 < n2) and (n1 < n3):
    print('O [',n1,'] é o menor')
    
elif (n2 < n1) and (n2 < n3):
    print('O [',n2,'] é o menor')
    
elif (n3 < n1) and (n3 < n2):
    print('O [',n3,'] é o menor')


if (n1 > n2) and (n1 > n3):
    print('O [',n1,'] é o maior')
    
elif (n2 > n1) and (n2 > n3):
    print('O [',n2,'] é o maior')
    
elif (n3 > n1) and (n3 > n2):
    print('O [',n3,'] é o maior')
    
else:
    print('Os tres numeros são iguais')