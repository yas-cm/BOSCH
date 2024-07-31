#include <stdio.h>

float reajuste(float s){
    if (s > 0 && s <= 500) return 0.25;
    else if (s <= 1000) return 0.2;
    else if (s <= 1500) return 0.15;
    else if (s <= 2000) return 0.1;
    else return 0;
}

float bonus(float a){
    if (a < 1) return 0;
    else if (a <= 3) return 100;
    else if (a <= 6) return 200;
    else if (a <= 10) return 300;
    else return 500;
}


int main(){
    float sal, reaj, anos, bon;


    printf("\n----- EX 1 ------\n");
    printf("\nQual o seu salario?\n-->  ");
    scanf("%f", &sal);
    reaj = reajuste(sal);

    printf("\nAnos trabalhados na empresa:\n-->  ");
    scanf("%f", &anos);
    bon = bonus(anos);

    if ( reaj == 0 && bon == 0) printf("\nVoce nao tem direito a nenhum aumento!");
    else printf("Seu novo salario --> %.2f", sal + (sal*reaj) + bon);

    return 0;
}