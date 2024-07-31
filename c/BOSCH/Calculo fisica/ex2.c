#include <stdio.h>
#include <string.h>

// Crie um programa que receberá uma letra do alfabeto, e devera mostrar ao usuário uma lista com todas as letras ate 
// o final, a partir da que o usuário inseriu.

int main(){
    char letra;
    int i;

    printf("Digite uma letra -->  ");
    scanf("%c", &letra);
    printf("\n");

    if(letra >= 65 && letra <= 90){
        for(i = letra+1; i <= 90; i++){
            printf("%c  ", i);
        }
    } else if(letra >= 97 && letra <= 122){
        for(i = letra+1; i <= 122; i++){
            printf("%c  ", i);
        }
    }

// imprimir na tela todas as letras menos a que foi digitada
printf("\n\n");

    if(letra >= 65 && letra <= 90){
        for(i = 65; i <= 90; i++){
            if(i == letra) printf("    ");
            else printf("%c  ", i);
        }
    } else if(letra >= 97 && letra <= 122){
        for(i = 97; i <= 122; i++){
            if(i == letra) printf("    ");
            else printf("%c  ", i);
        }
    }




    return 0;
}