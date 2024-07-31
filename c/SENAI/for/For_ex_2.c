/* Faça um programa que some todos os números naturais até o valor inserido
  pelo usuário */

#include <stdio.h>

int main(void) {
  int num, soma, i;
  printf("--- EX 2 ---\n");
  printf("Digite um numero:  ");
  scanf("%d",&num);
  for(i = 0; i <= num; i++){
    soma += i;
  }
  printf("A soma dos numeros naturais ate %d eh = %d",num,soma);
  
  return 0;
}