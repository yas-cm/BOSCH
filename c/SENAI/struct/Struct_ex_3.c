/* 3.Crie uma estrutura representando os alunos de um determinado curso. A
  estrutura deve conter a matrícula do aluno, nome, nota da primeira prova,
  nota da segunda prova e nota da terceira prova.
  (a) Permita ao usuario entrar com os dados de 5 alunos.
  (b) Encontre o aluno com maior nota da primeira prova.
  (c) Encontre o aluno com maior media geral.
  (d) Encontre o aluno com menor media geral
  (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o
  valor 6 para aprovacao. */


#include <stdio.h>
#include <string.h>

typedef struct Alunos{
  int matricula;
  char nome[50];
  float notas[3];
  float medias[5];

} Alunos;



int main(void) {
  printf("--- EXERCICIO 3 ---\n");
  Alunos aluninhos[5];
  int i, j, k = 0, l = 0, m = 0;
  float maior_nota = 0, soma = 0, maior_media = 0, menor_media = 11;
  
  for(i = 0; i < 5; i++){
    printf("\nAluno %d\n\n", i+1);
    printf("NOME  -->  ");
    fgets(aluninhos[i].nome, 50, stdin);
    aluninhos[i].nome[strcspn(aluninhos[i].nome, "\n")] = 0;

    printf("MATRICULA  -->  ");
    scanf("%d", &aluninhos[i].matricula);
    while (getchar() != '\n');
    
    for(j = 0; j < 3; j++){
      printf("NOTA %d  -->  ", j+1);
      scanf("%f", &aluninhos[i].notas[j]);
      while (getchar() != '\n');
      soma = soma + aluninhos[i].notas[j];
    }
    aluninhos[i].medias[i] = soma/3;
    soma = 0;
    if(aluninhos[i].notas[0] > maior_nota){
      maior_nota = aluninhos[i].notas[0];
      k = i;
    }    
    if(aluninhos[i].medias[i] > maior_media) {
      maior_media = aluninhos[i].medias[i];
      l = i;
    }
    
    if(aluninhos[i].medias[i] < menor_media) {
      menor_media = aluninhos[i].medias[i];
      m = i;
    } 
    
    
  }
  printf("\n\n--- RESULTADOS ---\n");
  printf("\nMaior nota da primeira prova:  %.2f   -   Aluno %s", maior_nota, aluninhos[k].nome);
  printf("\nMaior media -> %.2f   -   Aluno %s", maior_media, aluninhos[l].nome);
  printf("\nMenor media -> %.2f   -   Aluno %s\n", menor_media, aluninhos[m].nome);

  for(i = 0; i < 5; i++){
    if(aluninhos[i].medias[i] < 6) printf("Aluno %s reprovado - media %.2f\n", aluninhos[i].nome, aluninhos[i].medias[i]);
    else printf("Aluno %s aprovado - media %.2f\n", aluninhos[i].nome, aluninhos[i].medias[i]);
  }
  
  return 0;
}