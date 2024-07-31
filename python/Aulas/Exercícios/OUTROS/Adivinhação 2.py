num_secreto = 79


for k in range (1, 6):
    print('--- JOGO DA ADIVINHAÇÃO ---')
    x = int(input('Digite o {}° palpite: '.format(k)))

    
    if x < num_secreto:
        print('Voce errou :(')
        print('O palpite foi menor')
        print()

            
    elif x > num_secreto:
        print('Voce errou :(')
        print('O palpite foi maior')
        print()
        
    
    
    if x == num_secreto:
        print('PARABENS VOCE ACERTOU!!!')
        break
    
    print()

    
print()
print('--- FIM DO JOGO ---')