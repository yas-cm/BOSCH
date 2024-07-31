#include <iostream>
#include <string>

using namespace std; 

// Pessoa
class Pessoa {
private:
  string nome;
  string cor_do_cabelo;
  double altura;
  int idade;
  double nivel_de_inteligencia;

public:
  Pessoa(){
    nome = "";
    cor_do_cabelo = "";
    altura = 0.0;
    idade = 0;
    nivel_de_inteligencia = 0.0;
}
  Pessoa(string n, string cab, double alt, int id, double nint){
    nome = n;
    cor_do_cabelo = cab;
    altura = alt;
    idade = id;
    nivel_de_inteligencia = nint;
  }

void printP() const{
  cout << "Nome: " << nome << endl;
  cout << "Cor do cabelo: " << cor_do_cabelo << endl;
  cout << "Altura: " << altura << endl;
  cout << "Idade: " << idade << endl;
  cout << "Nivel de inteligencia(0 a 10): " << nivel_de_inteligencia << endl;
}

void andar() {  cout << "Andando... " << endl;  }
void correr()  {  cout << "Correndo... " << endl;  }
void cair()  {  cout << "ops! Caiu :( " << endl;  }
void ter_opinioes()  {  cout << "Parabens nao eh um vegetal uhul"  << endl; }
void morrer()  {  cout << "Morreu :( " << endl;  }

  
};

// Carro
class Carro{
private:
  string marca;
  string cor;
  int ano;
  string placa;

public:
  Carro(){
    marca = "";
    cor = "";
    ano = 0;
    placa = "";
  }
  Carro(string marc, string c, int an, string plac){
    marca = marc;
    cor = c;
    ano = an;
    placa = plac;
  }

  void printC() const{
    cout << "Carro: " << marca << endl;
    cout << "Cor: " << cor << endl;
    cout << "Ano: " << ano << endl;
    cout << "Placa: " << placa << endl;
  }

  void acerelar() {  cout << "Vruum"  << endl;  }
  void freiar() {  cout << "IIIIHH"  << endl;  }
  void capotar() { cout << "Capotou :( " << endl;  }
  void ligar() {  cout << "Ligado! " << endl;  }
  void desligar() { cout << "Desligado!" << endl; }
  void trancar()  {  cout << "Trancado com sucesso!" << endl;  }

};

// Animal
class Animal{
private:
  string animal;
  double chance_de_encontrar_no_parque_barigui;
  double tamanho;
  double possibilidade_de_te_matar;
  string classe;
  int quantidade_de_patas;

public:
  Animal(){
    animal = "";
    chance_de_encontrar_no_parque_barigui = 0.0;
    tamanho = 0.0;
    possibilidade_de_te_matar = 0.0;
    classe = "";
    quantidade_de_patas = 0;
  }

  Animal(string a, double barigui, double tam, double matar, string clas, int quant){
    animal = a;
    chance_de_encontrar_no_parque_barigui = barigui;
    tamanho = tam;
    possibilidade_de_te_matar = matar;
    classe = clas;
    quantidade_de_patas = quant;
  }

  void printA() const{
    cout << "Animal: " << animal << endl;
    cout << "Chance de encontrar no parque barigui(0 - 10): " << chance_de_encontrar_no_parque_barigui << endl;
    cout << "Tamanho: " << tamanho << endl;
    cout << "Possibilidade de te matar(0 - 10): " << possibilidade_de_te_matar << endl;
    cout << "Classe: " << classe << endl;
    cout << "Quantidade de patas: " << quantidade_de_patas << endl;
  }

  void comer() { cout <<  "nhec nhec" << endl;  }
  void morrer() { cout << "morreu :(" << endl;  }
  void matar() {  cout << "K.O." << endl;}
  void beber_agua() { cout << "glub glub" << endl; }

};

// Produto
class Produto{
private:
  string nome;
  string tipo;
  double gosto_bom;
  double preco;
  double tamanho;

public:
  Produto(){
    nome = "";
    tipo = "";
    gosto_bom = 0.0;
    preco = 0.0;
    tamanho = 0.0;
  }
  Produto(string nom, string tip, double gosto_bo, double prec, double tamanh){
    nome = nom;
    tipo = tip;
    gosto_bom = gosto_bo;
    preco = prec;
    tamanho = tamanh;
  }
  void printProd() const{
    cout << "Nome: " << nome << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Nota para o gosto(0 - 10): " << gosto_bom << endl;
    cout << "Preco medio: " << preco << endl;
    cout << "Tamanho(cm): " << tamanho << endl;
  }

  void cair() { cout << "caiu ali em" << endl; }
  void acabar() { cout << "acabou :(" << endl; }
  

};


int main(){
  Pessoa Neymar("Neymar", "Depende do dia", 1.75, 32, 5);
  cout << "--- Pessoa ---" << endl << endl;
  Neymar.printP();
  
  cout << endl;

  Pessoa TonyStark("Tony Stark", "Preto", 1.85, 53, 11);
  TonyStark.printP();

  cout << endl;

  Pessoa Cebolinha("Cebolinha", "Preto", 0.0, 6, 8);
  Cebolinha.printP();
  
  cout << endl;

  cout << "--- Carro ---" << endl << endl;
  Carro Ferrari("Ferrari", "Vermelho", 2020, "ABC3333");
  Ferrari.printC();

  cout << endl;

  Carro Mustang("Mustang", "Amarelo", 2015, "TOP8118");
  Mustang.printC();

  cout << endl;

  Carro Fiesta("Fiesta", "Preto", 2018, "HIH1000");
  Fiesta.printC();

  cout << endl;

  cout << "--- Animal ---" << endl << endl;
  Animal Leao("Leao", 0.1, 1.2, 8, "Mamifero", 4);
  Leao.printA();

  cout << endl;

  Animal Humano("Humano", 9, 1.7, 9, "Mamifero", 2);
  Humano.printA();

  cout << endl;

  Animal Quero_quero("Quero-quero", 7, 0.37, 10, "Aves", 2);
  Quero_quero.printA();

  cout << endl;

  Animal Capivara("Capivara", 10, 0.5, 3, "Mamifero", 4);
  Capivara.printA();

  cout << endl;

  cout << "--- Produto ---" << endl << endl;
  Produto Chocolate("Chocolate", "Doce", 9.9, 7, 15);
  Chocolate.printProd();

  cout << endl;

  Produto Amaciante("Amaciante", "Limpeza", 3, 20, 50);
  Amaciante.printProd();

  cout << endl;

  Produto BomBril("Bom Bril", "Limpeza", -1, 3, 10);
  BomBril.printProd();

  cout << endl;

  Produto Shampoo("Shampoo", "Higiene", 2, 25, 25);
  Shampoo.printProd();

  cout << endl << endl << "--- FIM ---";
}