#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void cifra_de_cesar(char *frase, int x){
    int i;
    int tam = strlen(frase);

    for(i = 0; i < tam; i++){
        if(!isspace(frase[i])){
            frase[i] = (int)frase[i] + x;
        } 
    }

}


int main(){
    char frase[100];
    int x;
    
    printf("\n--- EXERCICIO 3 ---\n\n");
    printf("Digite a quantidade de casas para a criptografia\n-->  ");
    scanf("%d", &x);
    fflush(stdin);
    printf("\nDigite a frase a ser criptografada\n-->  ");
    fgets(frase, 100, stdin);
    int tam = strlen(frase);
    if (frase[tam-1] == '\n') frase[tam-1] = '\0';

    cifra_de_cesar(frase, x);
    printf("Frase criptografada\n-->  %s", frase);
    printf("\n\n--- FIM ---");
    
    return 0;
}