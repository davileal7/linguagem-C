#include <stdio.h>
/* 
getchar() ler caracter
putchar() imprime um caracter
gets() lê uma string
puts() imprime a string na tela
*/

void main(){
    char faculdade [5];
    faculdade [0] = 'U';
    faculdade [1] = 'n';
    faculdade [2] = 'i';
    faculdade [3] = 'p';
    faculdade [4] = '\0';

    printf("%s \n", faculdade);

    char c = 'abcdefj';
    printf(" oi %d letra: %c \n",c,c);

    char nome1[1],nome2[2];
    printf("Escreva o primeiro nome: ");
    gets(nome1);
    printf("Ola, voce se chama: ");
    puts(nome1);
    printf("Escreva o segundo nome: ");
    gets(nome2);
    puts(nome2);
    
    char teste;
    printf("digite algo: ");
    teste=getchar();
    printf("letra digitada: %c",teste);
    
    char cadeia1[100], cadeia2[50];
    puts("Digite string1: ");
    gets(cadeia1);
    puts("Digite string2: ");
    gets(cadeia2);
    strcat(cadeia1,cadeia2);
    puts(cadeia1);
}

