
while True:
    cpf = input('Digite seu cpf: ')
    
    if len(cpf) == 14 and cpf[3] == '.' and cpf[7] == '.' and cpf[11] == '-':
        if cpf[:3].isnumeric() and cpf[4:7].isnumeric() and cpf[8:11].isnumeric() and cpf[12:].isnumeric():
            print('------------------------')
            print(f'Cpf digitado: {cpf}')
            
            teste = input('O cpf digitado esta correto? [s/n]  -->  ').lower()
            
            while teste != 's' and teste != 'n':
                print('Valor invalido!')
                teste = input('O cpf digitado esta correto? [s/n]  -->  ').lower()
                
            if teste == 's':
                print('Obrigado!')
                break
            
            else:
                continue
    else:
        print('Formato invalido!')
        
    
        
# 0 0 0 . 0 0 0 . 0 0  0 -  0  0
# 0 1 2 3 4 5 6 7 8 9 10 11 12 13