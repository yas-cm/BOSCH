

class Carro:
    def __init__(self, cor, portas):
        self.cor = cor
        self.portas = portas
        self.velocidade = 0
        self.ligado = False
        
    def acelerar(self):
        if self.ligado == True:
            self.velocidade += 20
            
            print("\nAcelerando")
        else:
            print('Carro nao ligado!')
        
    def freiar(self):
        if self.acelerar:
            self.velocidade = 0
            print("\nFreiando")
        else:
            print("Carro nao esta andando!")
        
    def ligar(self):
        if self.ligado == False:
            self.ligado = True
            print("\nCarro ligando")
        else:
            print("Carro ja esta ligado")
        
    def desligar(self):
        if self.ligado == True:
            self.ligado = False
            print("\nCarro desligando")
        else:
            print("Carro ja esta desligado")
    
print("--- --- --- --- ---\n")
a = input('Cor do carro ->  ')
b = int(input('Quantidade de portas ->  '))


carrinho = Carro(a,b)
while True:
    print('--- --- --- --- ---')
    print('[1] Acelerar')
    print('[2] Freiar')
    print('[3] Ligar')
    print('[4] Deligar')
    print('[5] Sair')
    op = int(input('Escolha uma opcao ->  '))
    if op == 1:
        carrinho.acelerar()
        
    elif op == 2:
        carrinho.freiar()
        
    elif op == 3:
        carrinho.ligar()
        
    elif op == 4:
        carrinho.desligar()

    elif op == 5:
        break
    else:
        print("Opcao invalida")