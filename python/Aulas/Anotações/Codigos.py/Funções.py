def recebe_num():
    while True:
        try:
            num1 = float(input("--> "))
        except ValueError:
            print("Valor invalido!")
        else:
            break
    return num1

num = recebe_num()
print("Numero: ",num)

def funcao():
    variavel = input("\n--> ")
    if variavel == 'a':
        return 0
    else:
        return 1

teste = funcao()


