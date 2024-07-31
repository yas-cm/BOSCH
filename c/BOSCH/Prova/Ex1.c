#include <stdio.h>
#include <string.h>

int main(){
    FILE *arq;
    char frases[100], *linha, matriz[10][50], nomeArq[10];
    int i = 0;

    printf("\n--- EXERCICIO 1 ---\n\n");
    printf("Digite o nome do arquivo(.txt): ");
    scanf("%s", nomeArq);
    
    arq = fopen(nomeArq, "r");

    if(arq){

        while (!feof(arq)) {
            
            linha = fgets(frases, sizeof(frases), arq);
            strcpy(matriz[i], linha);
            

            i++;
        }
        
    } else {
        printf("Nao foi possivel ler o arquivo!");
    }

    

    fclose(arq);

    for(i = 0; i < 10; i++){
        
        printf("-->  %s", matriz[i]);
        
    }


    printf("\n\n--- FIM ---");
    

    return 0;
}