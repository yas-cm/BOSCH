/* Faça um programa que exiba uma tabela com a tabuada de um valor inserido
  pelo usuário. */

#include <stdio.h>

int main(void) {
  int num, i;
  printf("--- EX 3 ---\n");
  printf("Digite um numero:  ");
  scanf("%d", &num);
  printf("A tabuada do %d eh:\n", num);
  for (i = 0; i <= 10; i++){
    printf("%d X %d = %d\n", num, i, num*i);
  }
  return 0;
}