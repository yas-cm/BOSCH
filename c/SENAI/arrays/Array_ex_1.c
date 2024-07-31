// soma de todos os valores em um array
#include <stdio.h>

int main(void) {
  int array[10], i, soma = 0;
  
  printf("\n--- EX 1 ---\n\n");
  printf("Numeros do aray:\n");
  for(i = 0; i < 10; i++){
    printf("%d  ",i+1);
    scanf("%d", &array[i]);
    soma = soma + array[i];
  }
  printf("Soma = %d",soma);
  return 0;
}