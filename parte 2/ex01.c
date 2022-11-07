#include <stdio.h>

void main(){
    int numero = 2;

    printf("Entre com um numero");
    scanf("%d",&numero);
    if (numero<0)
    {
        printf("\nO numero negativo\n");
    }
    else{
        printf("\nO numero positivo");
    }
    
}