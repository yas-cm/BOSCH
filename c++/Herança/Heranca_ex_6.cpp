/* Um instrumento musical de cordas tocado com um arco.
  Um instrumento musical de teclas e cordas percutidas. */

#include <iostream>
#include <string>

using namespace std;

class Instrumento{
private:
string nome;
string tipo;
float tamanho;

public:
void setNome(string nome){
  this->nome = nome;
}
void setTipo(string tipo){
  this->tipo = tipo;
}
void setTamanho(float tamanho){
  this->tamanho = tamanho;
}
};

class Violino : public Instrumento{
private:
int numero_de_cordas;
float tamanho_do_arco;
string marca;

public:
void setCordas(int numero_de_cordas){
  this->numero_de_cordas = numero_de_cordas;
}
void setTamanho(float tamanho_do_arco){
  this->tamanho_do_arco = tamanho_do_arco;
}
void setMarca(string marca){
  this->marca = marca;
}
};

class Piano : public Instrumento{
private:
int numero_de_teclas;
string marca;

public:
void setTeclas(int numero_de_teclas){
  this->numero_de_teclas = numero_de_teclas;
}
void setMarca(string marca){
  this->marca = marca;
}

};