/* Uma pessoa matriculada em uma instituição educacional.
   Uma pessoa responsável por ensinar em uma instituição educacional. */

#include <iostream>
#include <string>

using namespace std;

class Pessoa{
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

class Aluno : public Pessoa{
private:
  int matricula;
  int ano;
  string sala;
  string aniversario;

public:
void setMatricula(int matricula){
  this->matricula = matricula;
}
void setAno(int ano){
  this->ano = ano;
}
void setSala(string sala){
  this->sala = sala;
}
void setAniversario(string aniversario){
  this->aniversario = aniversario;
}
};

class Professor : public Pessoa{
private:
  int numero_cadastro;
  int ano_entrada;
  float salario;
  string materia;

public:
  void setNumero_cadastro(int numero_cadastro){
    this->numero_cadastro = numero_cadastro;
  }
  void setAno_entrada(int ano_entrada){
    this->ano_entrada = ano_entrada;
  }
  void setSalario(float salario){
    this->salario = salario;
  }
  void setMateria(string materia){
    this->materia = materia;
  }

};