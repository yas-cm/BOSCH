/* Escreva um programa que contenha uma função que receba dois valores
  inteiros. Leia esses valores do teclado. Em seguida, compare seus
  endereços e exiba o conteúdo do maior endereço. */

#include <stdio.h>

void comparation(int *a, int *b){
  // int *va, *vb, i;
  // va = &a;
  // vb = &b;
  if(a > b){
    printf("Endereço de A maior que endereço de B, sendo o endereço %x %x", a, b);
  }
  else{
    printf("Endereço de B maior que endereço de A sendo o endereço %x", b);
  }
  
}


int main(void) {
  int a, b;
  printf("--- PONTEIROS ---\n");
  printf("-----------------\n");
  printf("\nA -->  ");
  scanf("%d",&a);
  printf("\nB -->  ");
  scanf("%d",&b);

  comparation(&a,&b);
  
  return 0;
}