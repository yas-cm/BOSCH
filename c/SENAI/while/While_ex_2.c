/* Desenvolver um   programa que faça a verificação de valores bancários e
permita o saque ou o depósito.
O saque só pode ser feito se o valor total da conta for maior que 60
reais. */

#include <stdio.h>

int main(void) {
  int conta, op, deposito, saque;
  printf("--- BANCO ---\n");
  printf("Escolha a operacao: \n");
  printf("[1] Saque\n");
  printf("[2] Deposito\n");
  scanf("%d", &op);
  if (op == 1) {
    printf("Digite o valor total da conta:  ");
    scanf("%d", &conta);
    if (conta > 60){
      printf("Digite o valor a ser sacado:  ");
      scanf("%d", &saque);
      printf("Saque realizado com sucesso!\n");
      conta = conta - saque;
      printf("Saldo total: %d", conta);
    } else printf("Saldo insuficiente!\n");
    
  } else if (op == 2){
    printf("Digite o valor total da conta:  ");
    scanf("%d", &conta);
    printf("Digite o valor do deposito:  ");
    scanf("%d", &deposito);
    conta = conta + deposito;
    printf("Deposito realizado com sucesso!\n");
    printf("Saldo total: %d", conta);
  } else{
    printf("Operacao invalida!\n");
  }
  

  
  return 0;
}