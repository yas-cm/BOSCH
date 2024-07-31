/* Crie as funções de conversão de temperatura(Kelvin, Fahrenheit, Celsius)
  Todas as conversões. Faça um menu que para selecionar qual o tipo de
  conversão. */

#include <stdio.h>

float cf(){
  float c,f;
  printf("\nDigite o numero em Celsius:  ");
  scanf("%f",&c);
  f = (c * 9/5) + 32;
  return f;
}

float ck(){
  float c,k;
  printf("\nDigite o numero em Celsius:  ");
  scanf("%f",&c);
  k = c + 273.15;
  return k;
}

float fc(){
  float c,f;
  printf("\nDigite o numero em Fahrenheit:  ");
  scanf("%f",&f);
  c = (f - 32) * 5/9;
  return c;
}

float fk(){
  float k,f;
  printf("\nDigite o numero em Fahrenheit:  ");
  scanf("%f",&f);
  k = (f - 32) * 5/9 + 273.15;
  return k;
}

float kc(){
  float k,c;
  printf("\nDigite o numero em Kelvin:  ");
  scanf("%f",&k);
  c = k - 273.15;
  return c;
}

float kf(){
  float k,f;
  printf("\nDigite o numero em Kelvin:  ");
  scanf("%f",&k);
  f = (k - 273.15) * 9/5 + 32;
  return f;
}




int main(void) {
  int op;
  float res;
  printf("--- CONVERSOES ---\n\n");
  printf("------ MENU ------\n");
  printf("[1] C --> F\n");
  printf("[2] C --> K\n");
  printf("[3] F --> C\n");
  printf("[4] F --> K\n");
  printf("[5] K --> C\n");
  printf("[6] K --> F\n");
  printf("------------------\n\n");

  printf("Digite sua opcao:  ");
  scanf("%d", &op);
  
  switch (op){
    case 1:
      res = cf();
      printf("\nC --> F: %.2f", res);
      break;
    case 2:
      res = ck();
      printf("\nC --> K: %.2f", res);
      break;
    case 3:
      res = fc();
      printf("\nF --> C: %.2f", res);
      break;
    case 4:
      res = fk();
      printf("\nF --> K: %.2f", res);
      break;
    case 5:
      res = kc();
      printf("\nK --> C: %.2f", res);
      break;
    case 6:
      res = kf();
      printf("\nK --> F: %.2f", res);
      break;
  }
  
  return 0;
}