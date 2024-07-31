/* Implementar uma função que receba dois valores e utilize ponteiros para
  trocar o valor das variáveis. Defina um valor inicial e exiba o valor inicial e
  o valor após a alteração.*/

#include <stdio.h>
void troca(int a, int b){
  int *va, *vb, aux;
  va = &a;
  vb = &b;
  
  aux = *va;
  *va = *vb;
  *vb = aux;
  printf("\na = %d, b = %d",*va, *vb);
}

int main(void) {
  int a, b;
  printf("--- PONTEIROS ---\n");
  printf("-----------------\n");
  printf("\nDigite o primeiro valor -->  ");
  scanf("%d",&a);
  printf("\nDigite o segundo valor -->  ");
  scanf("%d",&b);
  
  troca(a,b);

  
  return 0;
}

