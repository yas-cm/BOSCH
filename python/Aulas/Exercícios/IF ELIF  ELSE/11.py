
# letra = input('Digite uma letra: ')
# letra2 = ord(letra) + 10


# print(chr(letra2))


letra = input('Digite uma letra [maiuscula ou minuscula]: ')

if (97 <= ord(letra)) and  (ord(letra) <= 122):
    letra2 = ord(letra) - 32
    
elif (65 <= ord(letra)) and (ord(letra) <= 90):
    letra2 = ord(letra) + 32
    
print()
print(chr(letra2))