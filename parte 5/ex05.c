#include <stdio.h>
#include <stdlib.h>

void main(){

    int tam;
    char str[100];
    printf("Digite string ");

    gets(str);
    tam=strlen(str);
    printf("Tamanho da string eh: %d\n",tam);

    char str1[100], str2[100], str3[100];
    puts("Digite string: ");
    gets(str1);
    strcpy(str2,str1);
    strcpy(str3, "Voce digitou string:");
    printf("%s %s\n",str3,str2);
}

