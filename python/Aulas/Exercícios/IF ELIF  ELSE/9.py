# kwh = int(input('Digite a quantidade de kwh consumida: '))
# tipo = input('Digite o tipo de instalação[R , I ou C]: ') #da pra colocar .lower() dps pra transformar em minusculo
# preco = 0

# if (tipo == 'R') or (tipo == 'r'):
#     if (kwh <= 500):
#         preco = 0.40 * kwh
#     else:
#         preco = 0.65 * kwh
#     print('Valor a pagar: R$',preco)

# if (tipo == 'I') or (tipo == 'i'):
#     if (kwh <= 1000):
#         preco = 0.55 * kwh
#     else:
#         preco = 0.60 * kwh
#     print('Valor a pagar: R$',preco)

# if (tipo == 'C') or (tipo == 'c'):
#     if (kwh <= 5000):
#         preco = 0.55 * kwh
#     else:
#         preco = 0.60 * kwh
#     print('Valor a pagar: R$',preco)

# else:
#     print()
#     print('Erro! Tipo de instalação desconhecido.')


kwh = int(input('Digite a quantidade de kwh consumida: '))
preco = 0
while True:
    tipo = input('Digite o tipo de instalação[R , I ou C]: ').lower()
    if tipo == 'r' or tipo == 'i' or tipo == 'c':
        break
    print('ERRO!! DIGITE NOVAMENTE\n')

if tipo == 'r':
    if (kwh <= 500):
        preco = 0.40 * kwh
    else:
        preco = 0.65 * kwh
    print('Valor a pagar: R${:.2f}'.format(preco))

if tipo == 'i':
    if (kwh <= 1000):
        preco = 0.55 * kwh
    else:
        preco = 0.60 * kwh
    print('Valor a pagar: R${:.2f}'.format(preco))

if tipo == 'c':
    if (kwh <= 5000):
        preco = 0.55 * kwh
    else:
        preco = 0.60 * kwh
    print('Valor a pagar: R${:.2f}'.format(preco))
    


