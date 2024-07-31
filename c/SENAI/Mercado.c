/*Desenvolva um pequeno programa para um mercado, onde terá
um menu de setores, e cada setor com seus respectivos itens para a compra.
Faça o calculo da quantidade de produtos selecionados e seus valores.
Verifique se o valor do pagamento é igual ou superior. Imprima a nota fiscal
em um arquivo de texto após a finalização da compra.*/

#include <stdio.h>


int main(void) {
  int setor, op, qnt, i = 0, j = 0, total = 0;
  printf("--- MERCADO ---\n");
  
  while(j == 0){ 
  printf("\n--- MENU ---\n");
  printf("1 - Frutas\n");
  printf("2 - Verduras\n");
  printf("3 - Carnes\n");
  printf("4 - Bebidas\n");
  printf("5 - Sair\n");
  printf("Digite o numero do setor: ");
  scanf("%d", &setor);
  switch(setor){
    case 1:
      printf("--- FRUTAS ---\n");
      printf("1 - Maçã - R$1,00\n");
      printf("2 - Laranja - R$2,00\n");
      printf("3 - Banana - R$3,00\n");
      printf("4 - Abacate - R$4,00\n");
      printf("5 - Melancia - R$5,00\n");
      printf("6 - Sair\n");
      if(op > 6 && op <= 0){
        printf("Opção inválida\n");
      }
      while(i == 0){
        printf("Selecione a sua opção:\n");
        scanf("%d", &op);
        
        if (op == 6){
          printf("Saindo...\n");
          i = 1;
          continue;
        }
        printf("Selecione a quantidade:\n");
        scanf("%d", &qnt);
        total = total + (op * qnt);
      }
      i = 0;
      break;
    case 2:
        printf("--- VERDURAS ---\n");
        printf("1 - Alface - R$1,00\n");
        printf("2 - Couve - R$2,00\n");
        printf("3 - Batata - R$3,00\n");
        printf("4 - Cenoura - R$4,00\n");
        printf("5 - Pepino - R$5,00\n");
        if(op > 6 && op <= 0){
          printf("Opção inválida\n");
        }
        printf("6 - Sair\n");
        while(i == 0){
          printf("Selecione a sua opção:\n");
          scanf("%d", &op);
          
          if (op == 6){
            printf("Saindo...\n");
            i = 1;
            continue;
          }
          printf("Selecione a quantidade:\n");
          scanf("%d", &qnt);
          total = total + (op * qnt);
        }
        i = 0;
        break;
    case 3:
        printf("--- CARNES ---\n");
        printf("1 - Presunto - R$20,00\n");
        printf("2 - Fraldinha - R$20,00\n");
        printf("3 - Alcatra - R$20,00\n");
        printf("4 - Picanha - R$20,00\n");
        printf("5 - Mortadela - R$20,00\n");
        printf("6 - Sair\n");
        if(op > 6 && op <= 0){
          printf("Opção inválida\n");
        }
        while(i == 0){
          printf("Selecione a sua opção:\n");
          scanf("%d", &op);
          if (op == 6){
            printf("Saindo...\n");
            i = 1;
            continue;
          }
          printf("Selecione a quantidade:\n");
          scanf("%d", &qnt);
          total = total + (20 * qnt);
        }
        i = 0;
        break;
    case 4:
      printf("--- BEBIDAS ---\n");
      printf("1 - Coca-Cola - R$5,00\n");
      printf("2 - Guaraná - R$5,00\n");
      printf("3 - Fanta - R$5,00\n");
      printf("4 - Sprite - R$5,00\n");
      printf("5 - Pepsi - R$5,00\n");
      printf("6 - Sair\n");
        if(op > 6 && op <= 0){
          printf("Opção inválida\n");
        }
      while(i == 0){
        printf("Selecione a sua opção:\n");
        scanf("%d", &op);
        
          if (op == 6){
            printf("Saindo...\n");
            i = 1;
            continue;
          }
        printf("Selecione a quantidade:\n");
        scanf("%d", &qnt);
        total = total + (5 * qnt);
        }
        i = 0;
        break;
    
    case 5:
      printf("Saindo...\n");
      j = 1;
      break;
      }
    
  }

  printf("Seu total deu: RS%d,00\n", total);
  printf("\nQual sera a forma de pagamento?\n");

  int pag, valor;
  printf("1 - Dinheiro\n");
  printf("2 - Cartão\n");
  printf("3 - Pix\n");
  printf("4 - Lavar louça\n");
  scanf("%d", &pag);
  switch(pag){
    case 1:
      printf("Qual o valor em dinheiro?  ");
      scanf("%d", &valor);
    if (valor < total){
      printf("Valor insuficiente\n");
    }
    else if(valor > total){
      printf("Seu troco eh de: RS%d,00\n", valor - total);
    }
    else{
      printf("Obrigado pela compra\n");
    }
    break;
    case 2:
      printf("Insira seu cartao:\n");
    break;
    case 3:
      printf("A chave pix eh 81936509283475\n");
    break;
    case 4:
    printf("Ta maluco cara q isso\n");
    break;
  }
  
  
  return 0;
}