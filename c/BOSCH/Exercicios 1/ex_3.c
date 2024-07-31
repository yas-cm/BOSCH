#include <stdio.h>

int main(){
    int v[10], i, j;
    printf("\n----- EX 3 ------\n");

    for(i = 0; i < 10; i++){
        printf("\nDigite um numero --> ");
        scanf("%d", &v[i]);
        if(i > 0){
        for(j = 0; j < i; j++){
            if (v[i] == v[j]){
                printf("\nDigite um numero diferente! -->  ");
                scanf("%d", &v[i]);
                j = 0;
            }

        }
        }
    }

    printf("\n\nVetor digitado:  ");
    for(i = 0; i < 10; i++) printf("%d  ", v[i]);

    return 0;
}