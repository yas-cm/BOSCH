/* Um tipo de produto que utiliza eletricidade para funcionar.
  Um tipo de produto consumível para alimentação humana ou animal.*/

#include <iostream>
#include <string>

using namespace std;

class Produto{
string nome;
float preco;

public:
void setNome(string nome){
  this-> nome = nome;
}
void setPreco(float preco){
  this-> preco = preco;
}
};

class Eletrico : public Produto{
private:
string tipo;
float tamanho;
float potencia;
float tensao;

public:
void setTipo(string tipo){
  this -> tipo = tipo;
}
void setTamanho(float tamanho){
  this -> tamanho = tamanho;
}
void setPotencia(float potencia){
  this -> potencia = potencia;
}
void setTensao(float tensao){
  this -> tensao = tensao;
}
};

class Comida : public Produto{
private:
string tipo;
float quantidade;
float nivel_de_perecibilidade;

public:
void setTipo(string tipo){
  this -> tipo = tipo;
}
void setQuantidade(float quantidade){
  this -> quantidade = quantidade;
}
void setPerecivel(float nivel_de_perecibilidade){
  this -> nivel_de_perecibilidade = nivel_de_perecibilidade;
}
};