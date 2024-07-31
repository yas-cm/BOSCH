/* Escreva um código onde será identificado os números primos até o valor
  inserido pelo usuário. */

#include <stdio.h>

int main(void) {
  int num, i, j, cont = 0;
  printf("--- EX 4 ---\n");
  printf("Digite um numero: \n");
  scanf("%d", &num);

  for (i = 2; i < num; i++){
    cont = 0;
    for ( j = 1; j <= i; j++){
      if (i % j == 0) cont ++;
    }
    if (cont == 2) printf("%d eh PRIMO\n",i);
  }
  
  return 0;
}