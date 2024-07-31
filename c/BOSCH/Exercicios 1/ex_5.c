#include <stdio.h>


void simplifica(int *x, int *y){
    int i;

    for(i = 2; i <= *x && i <= *y; i ++){

        while(*x % i == 0 && *y % i == 0){
            *x = *x / i;
            *y = *y / i;
            
        }
        
    }
    
    
}


int main(){
    int num, den;
 
    printf("\n----- EX 5 ------\n");
    printf("Digite o numerador --> ");
    scanf("%d", &num);
 
    printf("\nDigite o denominador --> ");
    scanf("%d", &den);

    simplifica(&num, &den);
    printf("\n Fracao simplificada -->  %d/%d", num, den);
    
    return 0;
}