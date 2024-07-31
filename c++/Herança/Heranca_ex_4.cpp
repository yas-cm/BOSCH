/* Um funcionário com responsabilidades de gestão.
  Um funcionário em início de carreira, geralmente aprendendo com outros. */

#include <iostream>
#include <string>

using namespace std;

class Funcionario{
private:
string nome;
int idade;
float altura;
float nivel_inteligencia;

public:
void setNome(string nome){
  this->nome = nome;
}
void setIdade(int idade){
  this->idade = idade;
}
void setAltura(float altura){
  this->altura = altura;
}
void setNivelInt(float nivel_inteligencia){
  this->nivel_inteligencia = nivel_inteligencia;
}
};

class Antigo : public Funcionario{
private:
int anos_de_empresa;
int qnt_metas_alcancadas;
float capacidade_de_lideranca;
float nivel_de_desempenho;

public:
void setAnos(int anos_de_empresa){
  this->anos_de_empresa = anos_de_empresa;
}
void setMetas(int qnt_metas_alcancadas){
  this->qnt_metas_alcancadas = qnt_metas_alcancadas;
}
void seLideranca(float capacidade_de_lideranca){
  this->capacidade_de_lideranca = capacidade_de_lideranca;
}
void seDesempenho(float nivel_de_desempenho){
  this->nivel_de_desempenho = nivel_de_desempenho;
}
};

class Novo : public Funcionario{
private:
int anos_de_empresa;
int qnt_metas_alcancadas;
string area_de_apredizado;
string tutor;

public:
void setAnos(int anos_de_empresa){
  this->anos_de_empresa = anos_de_empresa;
}
void setMetas(int qnt_metas_alcancadas){
  this->qnt_metas_alcancadas = qnt_metas_alcancadas;
}
void setArea(string area_de_apredizado){
  this->area_de_apredizado = area_de_apredizado;
}
void setTutor(string tutor){
  this->tutor = tutor;
}
};