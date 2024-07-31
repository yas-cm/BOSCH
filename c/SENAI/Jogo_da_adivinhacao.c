

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int num, num2, i = 0, cont = 1;
  srand(time(NULL));
  num = rand() % 100 + 1;
  while(i == 0){
    printf("Digite um número: ");
    scanf("%d", &num2);

    if(num == num2){
      printf("\nVocê acertou!");
      i = 1;
      
    }
    else{
      printf("Você errou!\n");
      cont ++;
      if(num2 > num) printf("O numero secreto é menor\n");
      else printf("O numero secreto é maior\n");
    }
  }
  printf("\nNumero de tentativas: %d", cont);

  return 0;
}
