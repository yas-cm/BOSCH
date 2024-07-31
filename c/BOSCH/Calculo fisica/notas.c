#include <stdio.h>

int main(){
    float ra1, ra2, av, pbl, parcial1, parcial2, tde;
    int i, cont = 0;

    for(i = 0; i < 2; i++){
    printf("\nAvaliacao teorica %d\n", i+1);
    printf("RA1: ");
    scanf("%f", &ra1);
    printf("RA2: ");
    scanf("%f", &ra2);
    av = (0.6 * ra1) + (0.4 * ra2);

    printf("\nPBL %d\n", i + 1);
    printf("RA1: ");
    scanf("%f", &ra1);
    printf("RA2: ");
    scanf("%f", &ra2);
    pbl = (0.6 * ra1) + (0.4 * ra2);

    printf("\nTDE %d\n", i + 1);
    printf("RA1: ");
    scanf("%f", &ra1);
    printf("RA2: ");
    scanf("%f", &ra2);
    tde = (0.6 * ra1) + (0.4 * ra2);

    if (cont == 0){
    parcial1 = (0.7*av) + (0.15*pbl) + (0.15*tde);
    printf("Parcial 1 = %.2f", parcial1);
    } else{
        parcial2 = (0.7*av) + (0.15*pbl) + (0.15*tde);
        printf("Parcial 2 = %.2f", parcial2);
    }
    cont++;

    }
    printf("\n\nNota final = %.1f", (parcial1*0.5) + (parcial2*0.5));
    if (((parcial1*0.5) + (parcial2*0.5))< 7) printf("\nNao passou :(");
    else printf("\nPassou!!");

    return 0;
}