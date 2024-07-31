import random
num = random.randrange(1, 101)
cont = 0

while True:
    adv = int(input('Adivinhe o numero entre 1 e 100: '))
    while adv != num:
        if adv > num:
            print(f'{adv} esta acima')
        elif adv < num:
            print(f'{adv} esta abaixo')
        adv = int(input('Novo palpite: '))
        cont = cont + 1
    break
print(f'\nACERTOU!!! Apenas {cont} tentativas!!')