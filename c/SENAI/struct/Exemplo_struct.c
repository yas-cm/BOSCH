#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>


  typedef struct Alunos{
    char nome[20];
    char RA[8];
  } Alunos;


  int main(){
    Alunos teste;
    printf("Digite seu nome ->  ");
    fgets(teste.nome, 20, stdin);
    printf("%s", teste.nome);
    return 0;

  }


