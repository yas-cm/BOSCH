/* Um animal doméstico conhecido por sua lealdade.
Um animal selvagem conhecido por sua independência. */

#include <iostream>
#include <string>

using namespace std;

class Animal{
private:
string nome;
string personalidade;
float altura;

public:
void setNome(string nome){
  this -> nome = nome;
}
void setPersonalidade(string personalidade){
  this -> personalidade = personalidade;
}
void setAltura(float altura){
  this -> altura = altura;
}

};

class Domestico : public Animal{
private:
string racao;
int quantidade_de_sonecas;
int quantidade_de_carinho;

public:
void setRacao(string racao){
  this->racao = racao;
}
void setSoneca(int quantidade_de_sonecas){
  this->quantidade_de_sonecas = quantidade_de_sonecas;
}
void setCarinho(int quantidade_de_carinho){
  this->quantidade_de_carinho = quantidade_de_carinho;
}
};

class Selvagem : public Animal{
private:
string alimentacao;
int capacidade_de_matar;
int intimidacao;

public:
void setComida(string alimentacao){
  this->alimentacao = alimentacao;
}
void setMatar(int capacidade_de_matar){
  this->capacidade_de_matar = capacidade_de_matar;
}
void setInimidacao(int intimidacao){
  this->intimidacao = intimidacao;
}

};