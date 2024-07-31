/* Faça um programa que leia três valores. Enquanto a soma desses três valores
  não resultarem em 45 o sistema repetirá seu processo. */

#include <stdio.h>

int main(void) {
  int a, b, c, soma, i=0;
  printf("--- SOMA 45 ---\n");
  while (i == 0){
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);
    soma = a + b + c;
    soma == 45 ? i = 1 : printf("A soma dos valores não é 45!\n\n");
  }
  printf("A soma eh 45");
  return 0;
}