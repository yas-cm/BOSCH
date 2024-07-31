#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


  typedef struct Alunos{
    char nome[20];
    int matricula;
    char curso[20];;
  } Alunos;


  int main(){
    Alunos aluninhos[17];
    int i;
    for(i = 0; i < 5; i++){
      printf("\nDigite o nome do aluno %d ->  ", i+1);
      fgets(aluninhos[i].nome, 20, stdin);
      aluninhos[i].nome[strcspn(aluninhos[i].nome, "\n")] = 0;
      
      printf("\nDigite a matricula do aluno %d ->  ", i+1);
      scanf("%d", &aluninhos[i].matricula);
      while (getchar() != '\n');
      
      printf("\nDigite o curso do aluno %d ->  ", i+1);
      fgets(aluninhos[i].curso, 20, stdin);
      aluninhos[i].nome[strcspn(aluninhos[i].nome, "\n")] = 0;
      
    }
    for(i = 0; i < 5; i++){
      
      printf("\nAluno %d\n", i+1);
      printf("\nNome: %s", aluninhos[i].nome);
      
      printf("\nMatricula: %d", aluninhos[i].matricula); 
      
      printf("\nCurso: %s", aluninhos[i].curso);
    }

    
    return 0;
  }


