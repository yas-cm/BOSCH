import random
num = random.randrange(1, 6)

print('--------- BEM VINDO(A) AO JOGO ---------')


while True:
    valor = input('pedra, papel, tesoura, lagarto ou spock??    ').lower()
    if valor == 'pedra' or valor == 'papel' or valor == "tesoura" or valor == "lagarto" or valor == "spock":
        break 
    print('VALOR INVALIDO!!!')

print()

if num == 1:
    if valor == 'tesoura' or valor == 'lagarto':
        print('preda')
        print('PERDEU HIHIHIHA!!!!')
    elif valor == 'pedra':
        print('empate')
    else:
        print('preda')
        print('perdi grrrr')
        
elif num == 2:
    if valor == 'pedra' or valor == 'spock':
        print('paper')
        print('PERDEU HIHIHIHA!!!!')
    elif valor == 'papel':
        print('empate')
    else:
        print('paper')
        print('perdi grrrr')
    
elif num == 3:
    if valor == 'papel' or valor == 'lagarto':
        print('tisora')
        print('PERDEU HIHIHIHA!!!!')
    elif valor == 'tesoura':
        print('empate')
    else:
        print('tisora')
        print('perdi grrrr')

elif num == 4:
    if valor == 'spock' or valor == 'papel':
        print('largato')
        print('PERDEU HIHIHIHA!!!!')
    elif valor == 'lagarto':
        print('empate')
    else:
        print('largato')
        print('perdi grrrr')

else:
    if valor == 'tesoura' or valor == 'pedra':
        print('spock')
        print('PERDEU HIHIHIHA!!!!')
    elif valor == 'spock':
        print('empate')
    else:
        print('spock')
        print('perdi grrrr')

    
    