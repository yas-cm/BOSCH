Dominios = ["@gmail.com", "@hotmail.com", "@outlook.com", "@live.com", "@yahoo.com", "@ymail.com", "@icloud.com", "@terra.com.br", "@uol.com.br"]

email = input('Digite seu email: ').lower()

while True:
    if '@' in email:
        resto = email.find('@')
        if '.' in email[resto:]:
            
            if email[resto:] not in Dominios:
                print('Esse dominio não esta na lista de dominios. Voce deseja: ')
                print('[1] Continuar mesmo assim\n[2] Digitar outro email\n[3] Cancelar')
                op = int(input('--> '))
                
                if op == 1:
                    print('Obrigado. Seu email é: ', email)
                    break
                elif op == 2:
                    email = input('Digite seu email: ').lower()
                    
                    continue
                elif op == 3:
                    print('Fim do programa.')
                    break
            else:
                print('Obrigado.')
                break
        
        
        else:
            print('Email invalido! ')
            email = input('Digite seu email: ').lower()

        