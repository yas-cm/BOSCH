/* Contar quantos dígitos tem um número inteiro positivo. */
#include <stdio.h>

int main(void) {
  long int num;
  int i, cont = 1;
  printf("--- EX 7 ---\n");
  printf("Digite um numero:  ");
  scanf("%ld",  &num);
  for (i = 0; i <= num; i++){
    if (num / 10 > 0){
      num = num / 10;
      cont++;
    }
  }
  printf("O numero tem %d digitos", cont);

  
  return 0;
}