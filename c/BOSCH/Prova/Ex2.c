#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    float res = 0;
    printf("\n--- EXERCICIO 2 ---\n\n");
    
    srand(time(NULL));
    
    num1 = (rand() % 49) + 51;
    num2 = (rand() % 9) + 21;

    res = (float)num1 / (float)num2;

    printf("Divisao de %d por %d = %.2f", num1, num2, res);
    
    printf("\n\n--- FIM ---");

    return 0;
}