#include <stdio.h>

void main()
{
    int x, y;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);
    if(x > y){
        printf("O numero = %d \n", x);
    }else{
        printf("O numero = %d \n", y);
   }
}