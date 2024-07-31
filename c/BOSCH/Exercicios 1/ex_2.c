#include <stdio.h>

float pegar_valor(){
    float v;
    printf("Valor -->  ");     
    scanf("%f", &v);
    return v;
}

int main(){
    int op, i = 0;
    float v, res;
    printf("\n----- EX 2 ------\n");

    while (i == 0){
        printf("\nSelecione uma opcao:\n");
        printf("[1] km/h --> m/s\n");
        printf("[2] m/s  --> km/h\n");
        printf("[3] Finalizar\n");
        scanf("%d", &op);

        switch(op){
            case 1:
                v = pegar_valor();
                printf("\nConversao de %.2f km/h para m/s\n",v);
                res = v * 0.27778;
                printf(" --> %.2f m/s\n", res);
                break;

            case 2:
                v = pegar_valor();
                printf("\nConversao de %.2f m/s para hm/h\n",v);
                res = v * 3.6;
                printf(" --> %.2f km/h\n", res);
                break;

            case 3:
                printf("\nPrograma finalizado!");
                i = 1;
                break;

            default:
                printf("Valor Invalido!");
                break;
        }
    
    }
    return 0;
}