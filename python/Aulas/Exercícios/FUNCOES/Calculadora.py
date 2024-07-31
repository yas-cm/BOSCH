
def num_int():
    while True:
        try:
            num = int(input("Escreva um numero INTEIRO: --> "))
        except ValueError:
            print("Numero invalido! Digite novamente")
        else:
            break        
    return num

def num_real():
    while True:
        try:
            num = float(input("Escreva um numero REAL: --> "))
        except ValueError:
            print("Numero invalido! Digite novamente")
        else:
            break
    return num   

def soma(x,y):
    soma = x + y
    print(f"{x} + {y} = {soma}")
    return soma
    
def subtracao(x,y):
    sub = x - y
    print(f"{x} - {y} = {sub}")
    return sub

def divisao(x,y):
    while True:
        if y == 0:
            print("INDETERMINAÇÃO")
        else:
            div = x / y
            break
    print(f"{x}/{y} = {div}")
    return div

def inverso(x):
    inv = 1 / x
    print(f"Inverso de {x} = {inv}")
    return(inv)

def potencia(x,y):
    pot = x ** y
    print(f"{x}^{y} = {pot}")
    return pot

def fatorial(x):
    res = 1
    for i in range (x , 1 , -1):
        res = i * res
    return res
    
def numEuler(x):
    euler = 1
    for i in range (x, 0, -1):
        euler = euler + (1/fatorial(i))
    return euler
    
def pi(x):
    pi = 1
    for i in range (x, 0, -1):
        pi = pi + (-1)**i/(2*i + 1)
    return pi*4


def menu():
    print("--- CALCULADORA ---")
    while True:
        while True:
            try:
                op = int(input("Escolha uma opção:\n[1] SOMA\n[2] SUBTRAÇÃO\n[3] DIVISÃO\n[4] INVERSO\n[5] POTÊNCIA\n[6] FATORIAL\n[7] NUMERO DE EULER\n[8] NUMERO DE PI\n--> "))
            except ValueError:
                print("Numero invalido! Digite novamente")
            else:
                break
            
        if op == 1:
            num1 = num_real()
            num2 = num_real()
            return soma(num1,num2)
        
        if op == 2:
            num1 = num_real()
            num2 = num_real()
            return subtracao(num1,num2)
        
        if op == 3:
            num1 = num_real()
            num2 = num_real()
            return divisao(num1,num2)
        
        if op == 4:
            num = num_real()
            return inverso(num)
        
        if op == 5:
            print("Base: ",end='')
            base = num_int()
            print("Expoente: ",end='')
            exp = num_int()
            return potencia(base,exp)
        
        if op == 6:
            num = num_int()
            if num < 0:
                print("Numero invalido! ")
                menu()
            return fatorial(num)
        
        if op == 7:
            num = num_int()
            if num < 1:
                print("Numero invalido! ")
                menu()
            return numEuler(num);
            
        if op == 8:
            num = num_int()
            if num < 1:
                print("Numero invalido! ")
                menu()
            return pi(num);
        
        else:
            op = int(input("Digite uma opção valida!   "))

def eng(resultado):
    if resultado >= 1000 and resultado < 1000000:
        res = resultado / 1000
        print('{:.2f}K'.format(res))
        
    elif resultado >= 1000000 and resultado < 1000000000:
        res = resultado / 1000000
        print('{:.2f}M'.format(res))
        
    elif resultado >= 1000000000 and resultado < 1000000000000:
        res = resultado / 1000000000
        print('{:.2f}G'.format(res))
        
    elif resultado <= 0.001 and resultado > 0.000001:
        res = resultado / 0.001
        print('{:.2f}m'.format(res))
        
    elif resultado <= 0.000001 and resultado > 0.000000001:
        res = resultado / 0.000001
        print('{:.2f}u'.format(res))
        
    elif resultado <= 0.000000001 and resultado > 0.000000000001:
        res = resultado / 0.000000001
        print('{:.2f}n'.format(res))
        
    else:
        print('{:.2f}'.format(resultado))
    

resultado = menu()
print("Seu resultado em notação de engenharia: ",end='')
eng(resultado)