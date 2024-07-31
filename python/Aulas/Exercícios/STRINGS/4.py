l=0
while True:
    cpf = input('Digite seu cpf: ')
    if len(cpf) == 11 and cpf.isnumeric():
        
        
        
        # printa o cpf digitado (deve ter jeito mais facil)
        print('CPF digitado: ', end = '')
        for k in range (2):
            for i in range (l, l+3):
                print(cpf[i], end = '')
                
            print('.', end = '')
            l = l + 3
        l = 0

        for j in range (6,9):
            print(cpf[j], end = '')

        print(f'-{cpf[9]}{cpf[10]}')
        #fim do print do cpf
        
        # print(f"{cpf[:3]}.{cpf[3:6]}.{cpf[6:9]}-{cpf[9:]}")     # --> jeito mais facil
        
        op = input('O CPF digitado esta correto? [s/n] -->  ').lower()
        
        while op != 's' and op != 'n':
            print('Valor invalido. ')
            op = input('O CPF digitado esta correto? [s/n] -->  ').lower()
            
        
        if op == 's':
            print('Obrigado! ')
        else:
            continue
            
            
        break
    else:
        print('Digite seu CPF corretamente e digite apenas números')

# 000.000.000-00



