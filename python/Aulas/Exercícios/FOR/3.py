n = int(input('Digite o numero fatorial: '))
fat = 1

for i in range (n):
    fat = fat * (n-i)

print(f'O resultado de {n}! eh: {fat}')