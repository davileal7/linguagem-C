#include <stdio.h>
int main()
{
    int x, vet[8], num, achei=0;
    for (x = 0; x < 8; x++)
    {
        printf("\n[%d] Digite um numero: ",x);
        scanf("%d", &vet[x]);
    }
    printf("\n\n");
    printf("Digite um valor a ser pesquisado: ");
    scanf("%d",&num);
    for(x=0; x<8; x++)
    if (vet[x] ==num)
    {
        printf("\n O numero %d esta na posicao %d: ", x, num);
        achei=1;
    }
    if (achei !=1)
    printf("\n Este numero nao existe");
    printf("\n\n");
    system("pause");
    return(0);
}