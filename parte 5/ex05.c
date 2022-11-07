#include <stdio.h>
#include <stdlib.h>

void main(){

    int tamanho;
    char item[1];
    printf("Digite string: ");
    gets(item);
    tamanho=strlen(item); //quantas letras tem na var(str)
    printf("Tamanho da string eh: %d\n",tamanho);

    char str1[100], str2[100], str3[100];
    puts("Digite string: ");
    gets(str1);
    strcpy(str2,str1);
    strcpy(str3, "Voce digitou string:");
    printf("%s %s\n",str3,str2);
}

