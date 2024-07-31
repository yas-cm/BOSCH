n1 = float(input('Digite o primeiro numero: '))
n2 = float(input('Digite o segundo numero: '))

op = input('Digite a operação desejada: [ + , - , * , / ]: ')


if (op == '+'):
    print(n1 + n2)
    
elif (op == '-'):
    print(n1 - n2)
    
elif (op == '*'):
    print(n1 * n2)
    
elif (op == '/'):
    if (n2 == 0):
        print('INDETERMINAÇÃO')
    else:
        print(n1 / n2)

else:
    print('Operação desconhecida')