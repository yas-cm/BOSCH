n = int(input('Escreva o valor de hellos world (menos q 5 fznd favor): '))


for k in range (n):
    if n < 5:
        print('Hello world')
    elif 5 <= n < 10:
        print('Mtos hellos world, po para com isso')
        break
    elif n >= 10:
        print('Cansei de voce')
        print('Goodbye world')
        break
