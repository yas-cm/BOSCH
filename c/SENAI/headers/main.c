/* Faça um programa para um banco que permita fazer as operações
  bancárias, como depósito, saque, extrato, empréstimo. Desenvolva as
  funções dentro de uma header chamada “Banco.h” */
#include <stdio.h>
#include "banco.h"

int menu(){
  int op;
  
  printf("\nSelecione uma opcao:\n[1] Deposito\n[2] Saque\n[3] Extrato(sair)\n[4] Emprestimo\n");
  scanf("%d",&op);
  return op;
}

int main(void) {
  int op, money, din, dep = 0, saq = 0, emp = 0, i = 0;
  printf("--- EX 1 ---\n");
  printf("Quantos moneys vc tem? --->  ");
  scanf("%d",&money);
  while(i == 0){
  op = menu();
  switch(op){
    case 1:
      dep = deposito();
      din = money + dep;
      break;
    case 2:
      saq = saque(money);
      din = money - saq;
      break;
    case 3:
      printf("Valor antes: %d\nValor que entrou: %d\nValor que saiu: %d\nValor total: %d",money, dep+emp, saq, din);
    i = 1;
    break;
    case 4:
      emp = emprestimo(money);
      din = money + emp;
      break;
    default:
      printf("\nOpcao invalida");
      break;
  }
  }
  return 0;
}