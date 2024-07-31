/* Crie um programa que armazene informações de alunos de uma escola.
Serão lidos 3 alunos, contendo três notas e seus nomes. */
#include <stdio.h>
#include <string.h>

int main(void) {
  printf("--- EX 1 ---\n\n");
  char nome[4][50];
  int nota[4][4], i, j;

  for(i = 0; i < 3; i++){
    printf("Nome %d -->  ", i+1);
    fgets(nome[i], 50, stdin);
    fflush(stdin);
  }
  for(i = 0; i < 3; i++){
    printf("Notas do aluno %s", nome[i]);
    for(j = 0; j < 3; j++){
      
      scanf("%d", &nota[i][j]);
      fflush(stdin);
      
    }
  }
  
  for(i = 0; i < 3; i++){
    printf("\nAluno %s  ", nome[i]);
    for(j = 0; j < 3; j++){

      printf("%d  ", nota[i][j]);

    }
  }
  return 0;
}