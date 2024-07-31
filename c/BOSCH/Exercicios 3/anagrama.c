#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int escolhePalavra(){
    srand(time(NULL));
    int num;
    num = (rand() % 3) + 1;
    return num;
}

void embaralha(char *palavra){
    
    srand(time(NULL));
    int num, aux;
    int i, tam = strlen(palavra);
    
    for(i = 0; i < tam; i++){
        num = (rand() % tam); 
        
        aux = palavra[i];
        palavra[i] = palavra[num];
        palavra[num] = aux;
        
    }
    printf("\nteste -- %s\n", palavra);
    
}


int main(){
    int pontos = 100, dif, pont, num, cont = 0;
    char palavras[100], *facil, *medio, *dificil, vetor[3][50], *token, palavra[50], tentativa[50];
    FILE *arq;

    

    printf("---------------------------------------------------------------------------\n");
    printf("Bem vindo ao joguinho de anagrama!!\n");
    printf("---------------------------------------------------------------------------\n");
    printf("Qual a dificuldade que voce gostaria de jogar[1 , 2 , 3]\n-->  ");
    scanf("%d", &dif);
    fflush(stdin);

    while(1){
        printf("Quantos pontos voce gostaria de perder? (20 a 100)\n-->  ");
        scanf("%d", &pont);
        fflush(stdin);
        if(pont > 100 || pont < 20) printf("\nEscolha um valor maior que 20 e menor que 100\n");
        else break;
    }

    printf("---------------------------------------------------------------------------\n");

    
    arq = fopen("anagrama.txt", "r"); //read

    if(arq){



    facil = fgets(palavras, sizeof(palavras), arq);
    palavras[strcspn(palavras, "\n")] = '\0';
    strcpy(vetor[0], facil);
    //printf("facil -> %s", facil);
    medio = fgets(palavras, sizeof(palavras), arq);
    palavras[strcspn(palavras, "\n")] = '\0';
    strcpy(vetor[1], medio);
    //printf("medio -> %s", medio);
    dificil = fgets(palavras, sizeof(palavras), arq);
    palavras[strcspn(palavras, "\n")] = '\0';
    strcpy(vetor[2], dificil);
    //printf("dificil -> %s", dificil);


    } else printf("Nao abriu :(");

    num = escolhePalavra();


    token = strtok(vetor[dif-1], " ");
     while (token != NULL) {
        cont++;
        if(cont == num){
            //printf("%s\n", token);
            strcpy(palavra, token);
            //palavra = *token;
            embaralha(token);
            break;
        }
        
        token = strtok(NULL, " ");
     }
    
    

    printf("Pontos (100)\n");
    
    while(pontos > 0){
        printf("\nPalavra -->  %s", token);
        printf("\nSua tentativa -->  ");
        scanf("%s", tentativa);
        
        if(strcmp(tentativa, palavra) == 0) {
            printf("---------------------------------------------------------------------------\n");
            printf("\nParabens! Voce acertou!\n");
            pontos = 0;
        }

        else {
            pontos = pontos - pont;
            if(pontos <= 0){
                printf("---------------------------------------------------------------------------\n");
                printf("\n\nVOCE PERDEU!\n\n");
                printf("A palavra era: %s (mto facil)\n", palavra);

            } else printf("Incorreto! Pontos (%d)\n", pontos);
        }
    }
    printf("---------------------------------------------------------------------------\n");
    printf("\n\nFIM");
    fclose(arq);
    return 0;
}