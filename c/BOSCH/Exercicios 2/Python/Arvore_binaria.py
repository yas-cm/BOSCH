class Arvore:
    def __init__(self, valor):
        self.valor = valor
        self.esquerda = None
        self.direita = None
    def adicionarNo(self, valor):
        if valor > self.valor:
            if self.direita == None:
                self.direita = Arvore(valor)
                print(f"Valor {valor} adicionado a direita de {self.valor}")
            else:
                self.direita.adicionarNo(valor)
        elif valor < self.valor:
            if self.esquerda == None:
                self.esquerda = Arvore(valor)
                print(f"Valor {valor} adicionado a esquerda de {self.valor}")
            else:
                self.esquerda.adicionarNo(valor)
        else:
            print(f"Valor {valor} ja esta na arvre, seu bobinho")
    
    
    def ordCres(self):
        if self.esquerda != None:
            self.esquerda.ordCres()
        
        print(self.valor)
        
        if self.direita != None:
            self.direita.ordCres()
    
    

print("Bem vindo a arvre!\nDigite STOP para parar\n-------------------------\n")

mae = int(input("Valor mae --> "))
mae = Arvore(mae)

while True:
    try:
        novono = int(input("Digite um novo no ->  "))
        
    except ValueError:
        mae.ordCres()
        print("\n--- CABO ---\n")
        break;
    
    else:
        mae.adicionarNo(novono)
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
# class Arvore:
#     def __init__(self, valor):
#         self.valor = valor
#         self.esquerda = None
#         self.direita = None
#     def adicionarNo(self, valor):
#         if valor > self.valor:
#             if self.direita == None:
#                 self.direita = Arvore(valor)
#                 print(f"Valor {valor} adicionado a direita de {self.valor}")
#             else:
#                 self.direita.adicionarNo(valor)
#         elif valor < self.valor:
#             if self.esquerda == None:
#                 self.esquerda = Arvore(valor)
#                 print(f"Valor {valor} adicionado a esquerda de {self.valor}")
#             else:
#                 self.esquerda.adicionarNo(valor)
#         else:
#             print(f"Valor {valor} ja esta na arvre, seu bobinho")
        
        
# print("Bem vindo a arvre!\nDigite STOP para parar\n-------------------------\n")

# mae = int(input("Valor mae --> "))
# mae = Arvore(mae)

# while True:
#     try:
#         novono = int(input("Digite um novo no ->  "))
        
#     except ValueError:
#         print("\n--- CABO ---\n")
#         break;
    
#     else:
#         mae.adicionarNo(novono)