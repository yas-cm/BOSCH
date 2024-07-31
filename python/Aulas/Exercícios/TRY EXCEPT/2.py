a = 5
b = '5'

try:
    c = a + b
    
except TypeError:
    print("Erro!")
    
else:
    print(c)