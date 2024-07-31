/* Faça um programa que exiba uma barra de carregamento para processar uma
compra de um determinado produto. */


#include <stdio.h>
#include <unistd.h> // Para a função sleep()

int main(void) {
  int i = 0;
  int j;
  printf("-- BARRA DE CARREGAMENTO ---\n");
  while (i <= 100) {
    printf("#");
    fflush(stdout); // Exibe o caractere "#" imediatamente
    usleep(50000); // Aguarda 50 milissegundos (ajuste conforme necessário)
    if (i % 10 == 0) { // Limpa a linha a cada 10%
      printf("\r");
      for (j = 0; j < i; j++) {
        printf(" ");
      }
    }
    i++;
  }
  printf("\nCompra finalizada!\n"); 
  return 0;
}