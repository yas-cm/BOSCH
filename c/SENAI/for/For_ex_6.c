/* Faça um programa que faça um padrão de asteriscos, como um triângulo ou
  um retângulo até um valor máximo de 20. Se passar disso deve bloquear a
  execução. */

#include <stdio.h>

int main(void) {
  int base, altura, i,j, lado, op, tbase;
  printf("--- EX 6 ---\n");
  printf("Escolha a forma que deseja: \n[1] Retangulo\n[2] Quadrado\n[3] Triangulo\n");
  scanf("%d", &op);
  switch(op){
    case 1:
      printf("Digite o valor da base: \n");
      scanf("%d", &base);
      printf("\n");
      printf("Digite o valor da altura: \n");
      scanf("%d", &altura);
      printf("\n");
      if (base >= 20 || altura >= 20) {
        printf("\nValor invalido!!!\n");
        
      } else if (base == altura){
          printf("Seu malandro acha q isso eh um retanguo??");
          break;
        
        } else {
      for ( i = 0; i < altura; i++){
        for (j = 0; j < base; j++){
          
          printf(" *");
          
        }
        printf("\n");
      }
    
      }
    break;
  case 2:
      printf("Digite o valor do lado: \n");
      scanf("%d", &lado);
      printf("\n");
      if (lado >= 20) {
        printf("\nValor invalido!!!\n");
  
      } else {
      for ( i = 0; i < lado; i++){
        for (j = 0; j < lado; j++){
          printf("* ");
        }
        printf("\n");
      }
      }
    break;
    
  
  case 3:
    printf("Digite o valor da base: \n");
    scanf("%d", &tbase);
    printf("\n");
    if (tbase >= 20) {
      printf("\nValor invalido!!!\n");
    } else {
      for (i = 1; i <= tbase; i++){
        for (j = 0; j < tbase - i; j ++) printf("* ");
        printf("\n");
          }
    }
    break;

  default:
    printf("\nValor invalido!!\n");
    break;
  }
  return 0;
}