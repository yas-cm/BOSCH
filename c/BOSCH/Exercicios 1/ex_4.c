#include <stdio.h>
#include <string.h>

int main(){
    char v[5][10], resp[10];
    int i, j, resul[5], cont = 0;
    printf("\n----- EX 4 ------\n");
    printf("Digite as respostas\n");
    for(i = 0; i < 5; i++){
        printf("Aluno %d\n", i+1);
        for(j = 0; j < 10; j++){
            printf("Questao %d:  ",j+1);
            scanf("%c", &v[i][j]);
            fflush(stdin);
        }
    }

    printf("\nDigite o gabarito\n");
    for(i = 0; i < 10; i++){
        scanf("%c", &resp[i]);
        fflush(stdin);
    }
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            if(v[i][j] == resp [j]){
                cont ++;
            }
        }
        resul[i] = cont;
        cont = 0;
    }

    for(i = 0; i < 5; i++) printf("Aluno %d - Nota %d\n", i+1, resul[i]);


    return 0;
}