// Nao ta funcionando, nao deu tempo de terminar essa :(



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int cadastrar_nota(char alunos[10]){
    char nome[20], nota, notas[10][10];
    int i;
    printf("\nCADASTRAR NOTA --------------------------------");
    printf("\nDigite o nome do aluno\n-->  ");

    fgets(nome, 20, stdin);
    int tam = strlen(nome);
    if (nome[tam-1] == '\n') nome[tam-1] = '\0';

    for(i = 0; i < 10; i ++){
        if(strcmp(alunos[i], nome) == 0){
            printf("\nDigite a nota: ");
            scanf('%d', &nota);
            for(int k = 0; k < 10; k ++){
                if(notas[i][k] == NULL){
                    notas[i][k] = nota;
                }
            }
            
        } else {
            for(int j = 0; j < 10; j++){
                if(alunos[j] == NULL) {
                    alunos[j] = nome;
                    printf("Aluno cadastrado em %d", j);  // nao deu certo
                    i = 0;
                    break;
                }
                
            }
        }
    }
    return notas;
}

void media_notas(char alunos[10], int *p){
    char nome[20];
    float media, soma = 0;
    int cont = 0;
    printf("\nVER MEDIA --------------------------------");
    printf("\nDigite o nome do aluno\n-->  ");
    fgets(nome, 20, stdin);

    int tam = strlen(nome);
    if (nome[tam-1] == '\n') nome[tam-1] = '\0';


    for(int i = 0; i < 10; i++){
        if(strcmp(alunos[i], nome) == 0){
            for(int j = 0; j < 10; j ++){
                soma = soma + p[i][j];
                if(p[i][j] != NULL) cont++;
            }
        }
    }
    media = soma / cont;
    printf("\nA media do aluno %s eh --> %.1f", nome, media);

}




int main(){
    printf("\n--- EXERCICIO 4 ---\n\n");

    int op, i = 0;
    char alunos[10], notas[10][10], *p;
    p = notas;

    printf("--- MENU ---");
    printf("\n[1] Cadastrar nota");
    printf("\n[2] Verificar media");
    printf("\n[3] Sair\n-->  ");

    while(i == 0){
        scanf("%d", &op);
        fflush(stdin);
        switch(op){
            case 1:
                p = cadastrar_nota(alunos);
                break;
            case 2:
                media_notas(alunos,p);
                break;
            case 3:
                i = 1;
                break;

            default:
                printf("Opcao invalida!");
                break;
        }
    }
    
    printf("\n\n--- FIM ---");
    
    return 0;
}