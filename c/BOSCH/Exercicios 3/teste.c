#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(){

    srand(time(NULL));
    int num, i;

    for(i = 0; i <10; i++){
        num = (rand() % 10);
        printf("%d\n", num);
    }

    return 0;
}