while True:
    num = int(input('Digite a tabuada que deseja ver: '))
    
    if num >= 0 and num <= 10:
        i = 0
        while i <= 10:
            mult = num * i
            print(f'{num} x {i} = {mult}')
            i = i + 1
        break
    print('ERRO!')