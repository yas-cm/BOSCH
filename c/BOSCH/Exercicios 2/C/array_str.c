#include <stdio.h>
#include <string.h>


int main(){
    
    char nome_strcpy[50], nome_scanf[50], nome_gets[50], nome_fgets[50];

    strcpy(nome_strcpy, "Yasmin");
    printf("%s\n", nome_strcpy);

    scanf("%s", &nome_scanf); // Nao vai pegar espaço
    printf("%s\n", nome_scanf);

    gets(nome_gets); // Pega espaço / estourar buffer
    printf("%s\n", &nome_gets);

    fgets(nome_fgets, 50, stdin); // Jeito mais recomendado
    printf("%s\n", nome_fgets);

    return 0;
}

// #include <conio> --> ele n fecha direto
// getch() --> espera apertar enter qnd terminar o programa