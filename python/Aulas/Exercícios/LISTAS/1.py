num = []
cont = 0
print("Digite 10 numeros: ")

for i in range (10):
    num.append(int(input('--> ')))
    
dig = int(input("Numero: "))

for k in range (len(num)):
    if num[k]<dig:
        cont = cont + 1
        
print('Dentre os numeros digitados, ',cont,' sao menores que ',dig)