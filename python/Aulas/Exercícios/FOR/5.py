base = int(input('Digite a base: '))
exp = int(input('Digite o expoente: '))
r = 1
for i in range (exp):
    r = r * base
    
print(f'\n{base} elevado a {exp} eh: {r}')

