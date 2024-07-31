/* Faça um programa onde o usuário possa inserir dados em uma matriz 3x3.
  Você deve realizar a soma dos valores em cada uma das linhas. Deverão ser
  exibidos três resultados */

#include <stdio.h>

int main(void) {
  printf("--- EX 2 ---\n\n");
  
  int matriz[3][3], i, j, soma = 0;

  
  printf("Digite os valores da matriz:\n");
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }
  printf("\nSua matriz: \n");
  for(i = 0; i < 3; i ++){
    for(j = 0; j < 3; j ++){
      printf("%d  ", matriz[i][j]);
    }
    printf("\n");
  }

  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++) {
      soma = soma + matriz[i][j];
    }
    printf("A soma dos valores da %d° linha eh: %d\n", i+1, soma);
    soma = 0;
  }
  
  return 0;
}