/* Escreva um programa que declare um inteiro, um real e um char, e
  ponteiros para inteiro, real e char.
  Associe as variáveis aos ponteiros (use
  &).
  Modifique os valores de cada variável usando os ponteiros. Imprima os
  valores das variáveis antes e após a modificação. */

#include <stdio.h>

int main(void) {
  printf("--- PONTEIROS ---\n");
  printf("-----------------\n");
  int i = 23, *pi;
  float r = 1.2, *pr;
  char c = 'Y', *pc;

  printf("\nI = %d\nR = %.2f\nC = %c",i,r,c);
  
  pi = &i;
  pr = &r;
  pc = &c;
  
  printf("\n-----------------\n");
  
  *pi = 32;
  *pr = 66.7;
  *pc = 'T';

  printf("\nI = %d\nR = %.2f\nC = %c",i,r,c);
  return 0;
}