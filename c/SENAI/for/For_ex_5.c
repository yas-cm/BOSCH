/* Exiba para o usuário os múltiplos de um número inserido por ele até 100. */
#include <stdio.h>

int main(void) {
  int num, i;
  printf("--- EX 5 ---\n");
  printf("Digite um numero: \n");
  scanf("%d", &num);
  printf("\n");
  for (i = 1; i <= 100; i++){
    if (i % num == 0) printf("%d\n",i);
  }
  return 0;
}