num = int(input('Digite o numero fatorial: '))
fat = num
i = 1
while True:
    if num != 0:
        while i < num:
            
            fat = fat * (num-i)
            i = i + 1
        print(f'O resultado de {num}! eh: {fat}')
    break