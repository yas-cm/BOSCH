/*Faça um programa para adivinhar um número entre 1 e 1000. ou randomizado utilizando uma função rand.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int num, num2, i = 0;
  srand(time(NULL));
  num = rand() % 100 + 1;
  while(i == 0){
    printf("Digite um número: ");
    scanf("%d", &num2);

    if(num == num2){
      printf("Você acertou!");
      i = 1;
    }
    else
      printf("Você errou!\n");
  }
  
  return 0;
}

