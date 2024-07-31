soma = 0


for k in range (1, 4):
    x = float(input('Digite o {}° valor inteiro: '.format(k)))
    soma = soma + x
    
media = soma/3

print("A media entre os numeros é: {:.2f}".format(media))