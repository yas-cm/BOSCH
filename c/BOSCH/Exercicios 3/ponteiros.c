/* Executar as seguintes funcoes em uma string:
- Converter tudo pra maiusculo
- Inverter a string
- Contar o numero de vogais da string
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void maiusculo(char *c){    
    int i;
    int tam = strlen(c);
    for(i = 0; i < tam; i++){
            c[i] = toupper(c[i]);
        }
}

void inverter(char *c){
    char aux;
    int i=0;
    int tam = strlen(c);
    
    for(i = 0; i < tam / 2; i++){
        aux = c[i];
        c[i] = c[tam-i-1];
        c[tam-i-1] = aux;
    }
}

void vogais(char *c){
    int i;
    int tam = strlen(c);
    for(i = 0; i < tam; i++){
        if(c[i] == 'a' || c[i] == 'e' ||  c[i] == 'i' || c[i] == 'o' || c[i] == 'u' || c[i] == 'A' || c[i] == 'E' ||  c[i] == 'I' || c[i] == 'O' || c[i] == 'U' ){
            printf("VOGAL");
        }
    }
}

int main(){
    char string[50];
    int op;

    printf("\nDigite a sua string  -->   ");
    gets(string);
    

    printf("\n--- MENU ---\n");
    printf("[1] Converter tudo para maiusculo\n[2] Inverter\n[3] Contar o numero de vogais\n[4] Sair\nSelecione uma opcao -->  ");
    scanf("%d", &op);
    switch(op){
        case 1:
            maiusculo(&string);
            printf("\nMaiusculo -> %s", string);
            break;
        case 2:
            inverter(&string);
            printf("\nInvertida -> %s", string);
            break;
        case 3:
            
            break;
        case 4:

            break;
        default:
            printf("\nOpção invalida!\n");
            break;
    }

    return 0;
}