// maior valor em um array
#include <stdio.h>

int main(void) {
  int array[10], i, j, maior = 0;
  printf("\n--- EX 2 ---\n\n");
  printf("Digite o array: \n");
  
  for(i = 0; i < 10; i++){
    printf("%d -->  ",i+1);
    scanf("%d", &array[i]);
    
  }

  for(i = 0; i < 10; i++){
    for(j = 1; j < 10; j++){
      if(array[i] > maior) maior = array[i];
    }
  }

  printf("O maior numero do array eh: %d",maior);
  return 0;
}