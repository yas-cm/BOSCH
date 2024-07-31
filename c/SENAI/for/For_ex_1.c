/* Faça um programa que imprima todos os números pares até o valor que foi
inserido pelo usuário. */

#include <stdio.h>

int main(void) {
  int num, i;
  printf("--- EX 1 ---\n");
  printf("Digite um numero: ");
  scanf("%d", &num);
  for(i = 1; i <= num; i++){
    if(i % 2 == 0) printf("%d  ", i);
  }
  
  return 0;
}