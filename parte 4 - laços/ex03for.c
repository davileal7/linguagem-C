#include <stdio.h>

void main(){

    int x, i, soma = 0;
    int y = 10;
    for (i = 0; i < y; i++)
    {
        printf("Digite o item %d", i);
        scanf("%d", &x);
        soma = soma + x;
        y = y -1; 
    }

    printf("TOTAL: %d", soma);
    
}