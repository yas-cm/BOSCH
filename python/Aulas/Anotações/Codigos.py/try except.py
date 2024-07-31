
lista = [1,2,3]
while True:

    try:  # Vai testar oq pode dar erro
        indice = int(input("--> "))
        print(lista[indice])
        
    except ValueError:  # O que vai fazer se isso der errado
        print("Numero invalido")
        
    except IndexError:
        print("Indice invalido")
    
    else:  # Nao obrigatorio, continuaçao se n der errado
        break
    

    
    
