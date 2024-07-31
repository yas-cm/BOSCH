/* Faça um programa que bloqueie a entrada de números e apenas permita a
  passagem se a senha for igual a do sistema.*/

#include <stdio.h>
#include <string.h>


int main(void) {
  int i = 0, cont = 1;
  char senha[] = "termo";
  char senha_digitada[50];
  printf("--- SENHA ---\n");
  printf("Digite a senha: ");
  scanf("%s", senha_digitada);
  while (i == 0){
    if (strcmp(senha, senha_digitada) == 0){
      printf("\nAcesso permitido!\n");
      printf("Parabens!\n");
      i = 1;
      continue;
    } else printf("Acesso negado!\n\nINTRUSO\n\n");
    
    printf("Digite a senha: (tentativa %d)\n", cont);
    scanf("%s", senha_digitada);
    if (cont == 3){
      printf("3 tentativas. BLOQUEADO!!\n");
      i = 1;
    }
    cont++;
  }
  
  
  return 0;
}