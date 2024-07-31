num = int(input('Digite a quantidade de fatores da serie de fibonacci: '))


ant = 1
atual = 1


print('Série: \n')
print(atual)

for k in range (1,num):
    print(atual)
    prox = ant + atual
    ant = atual
    atual = prox
    
    
