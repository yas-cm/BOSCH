

class Casa:  # Tipo um "molde"
    def __init__(self, atributo1, atributo2): # Método construtor (sempre existe dentro da classe)
        self.cor = atributo1 # Atributos (características) 
        self.preco = atributo2
        
    def pintarCasa(self, novacor):
        self.cor = novacor


casa_yas = Casa('azul',10000) # casa_yas = objeto / Casa() = instanciar
casa_dom = Casa('Branco', 50000)

print("Casa yas -> ",casa_yas.cor)
casa_yas.pintarCasa('Rosa');
print("Casa yas -> ",casa_yas.cor)