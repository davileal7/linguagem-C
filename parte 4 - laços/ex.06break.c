#include <stdio.h>

void main(){
    int i = 0, soma = 0,x;

    while (i<10)
    {
        printf("Digite o item %d",i);
        scanf("%d", &x);
        if (x < 0)
        {
            printf("Numero invalido!");
            break;
        }
        soma = soma + x;
        i = i + 1;
    }
    printf("TOTAL: %d",soma);
    
}