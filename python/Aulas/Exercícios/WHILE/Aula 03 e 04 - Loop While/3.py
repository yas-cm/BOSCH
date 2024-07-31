while True:
    num = int(input('Digite a tabuada que deseja ver: '))
    inicio = int(input('\nDigite o inicio: '))
    final = int(input('\nDigite o final: '))
    
    if num >= 0 and num <= 10:
        i = inicio
        while i <= final:
            mult = num * i
            print(f'{num} x {i} = {mult}')
            i = i + 1
        break
    print('ERRO!')