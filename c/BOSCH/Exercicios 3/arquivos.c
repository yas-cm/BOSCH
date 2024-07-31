#include <stdio.h>
#include <string.h>

int main(){
    
    FILE *arquivo;
    char nome[50], frases[100], *linha;

    arquivo = fopen("arquivo.txt", "w"); // w --> escreve no arquivo (substitui oq ta la)

    if(arquivo != NULL){
        
        printf("Digite um nome -->  ");
        fgets(nome, sizeof(nome), stdin);
        fputs(nome, arquivo);

    } else printf("NAO CRIOU VAI EXPLODIR!!");


    fclose(arquivo);
    return 0;
}