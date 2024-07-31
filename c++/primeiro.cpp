#include <iostream>
#include <string>

using namespace std; 

class Veiculo {
private: //so a classe veiculo pode operar esses atributos
  string marca;
  string modelo;
  int ano;
  double preco;
public:
  Veiculo(){  //metodo construtor - inicializa a classe
  // funcao que excecuta automaticamente
    marca = "";
    modelo = "";
    ano = 0;
    preco = 0.0;
  }

  Veiculo(string m, string mod){
    marca = m;
    modelo = mod;
    ano = 2020;
    preco = 45000;
  }

  Veiculo(string m, string mod, int a, double p){
    marca = m;
    modelo = mod;
    ano = a;
    preco = p;
  }

  void setMarca(string m){
    marca = m;
  }

  string getMarca() const{
    return marca;
  }

  void setModelo(string mod) {
    modelo = mod;
  }

  string getModelo() const{
    return modelo;
  }

  void setAno(int a){
    ano = a;
  }

  int getAno() const{
   return ano;
  }

  void setPreco(double p){
    preco = p;
  }

  int getPreco() const{
   return preco;
  }

  void imprimirInformacoes() const{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << ano << endl;
    cout << "Preco: R$ " << preco << endl;
  }
  
};

int main(){
  
  Veiculo carro1("Toyota","Corolla",2020,80000.0);
  carro1.imprimirInformacoes();

  cout << endl;

  Veiculo carro2; // Atribuir os parametros via funcao
  carro2.setMarca("Nissan");
  carro2.setModelo("Kicks");
  carro2.setAno(2020);
  carro2.setPreco(100000.0); 
  carro2.imprimirInformacoes();

  cout << endl;

  Veiculo carro3("Ford","Fiesta");
  carro3.imprimirInformacoes();

  return 0;
}