#include <stdio.h>
#include <string.h>
// Solicite ao usuário uma lista de 3 nomes, todos esses nomes devem ser armazenados em uma matriz

int main(){
    char nome[3][50];
    int i, j;

    for(i = 0; i < 3; i ++){
        printf("Nome %d -->  ", i+1);
        fgets(nome[i], 50, stdin);
    }

    for(i = 0; i < 3; i ++){
        printf("Nome %d -->  %s\n", i+1, nome[i]);
    }

    return 0;
}