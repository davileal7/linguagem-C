#include <stdio.h>

void main(){
    char faculdade [5];
    faculdade [0] = 'U';
    faculdade [1] = 'n';
    faculdade [2] = 'i';
    faculdade [3] = 'p';
    faculdade [4] = '\0';

    printf("%s \n", faculdade);

    char c = 97;
    printf("%d %c \n",c,c);

    /*
    char cadeia[256];
    printf("Escreva o seu nome:");
    gets("cadeia");
    puts("cadeia");
    */

    char cadeia1[100], cadeia2[50];
    puts("Digite string1: ");
    gets(cadeia1);
    puts("Digite string2: ");
    gets(cadeia2);
    strcat(cadeia1,cadeia2);
    puts(cadeia1);
}

/* 
getchar() ler caracter
putchar() imprime um caracter
gets() lê uma string
puts() imprime a string na tela
*/