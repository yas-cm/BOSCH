def teste(n):
    
    if n != num_secreto:        
        
        if n < num_secreto:
            print('Voce errou :(')
            print('Foi menor')
            return errou(n)
    
        elif n > num_secreto:
            print('Voce errou :(')
            print('Foi maior')
            return errou(n)
        
    print()
        
    
    print()

    return print('PARABENS VOCE ACERTOU!!!')
    


def errou(num):
        
    print()
    print('--- JOGO DA ADIVINHAÇÃO ---')
    num = int(input('Digite seu palpite: '))
    return teste(num)


    
    
print('--- JOGO DA ADIVINHAÇÃO ---')

num_secreto = 19

x = int(input('Digite seu palpite: '))
    

teste(x)

#dps fzr isso mas com um limite de 5 tentativas