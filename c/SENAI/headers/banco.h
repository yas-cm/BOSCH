/* Faça um programa para um banco que permita fazer as operações
bancárias, como depósito, saque, extrato, empréstimo. Desenvolva as
funções dentro de uma header chamada “Banco.h” */
#include <stdio.h>
#ifndef BANCO_H
#define BANCO_H

int deposito(){
  int valor;
  printf("Quanto gostaria de depositar?\n--> ");
  scanf("%d",&valor);
  return valor;
}

int saque(int din){
  int valor = 0;
  printf("Quanto gostaria de sacar?\n--> ");
  scanf("%d",&valor);
  if(valor > din){
    printf("Valor do deposito maior que o saldo!\n");
    return 0;
  }
  else return valor;
}

int emprestimo(int din){
  int valor;
  printf("Quanto gostaria de emprestar?\n--> ");
  scanf("%d",&valor);
  return valor;
}

#endif