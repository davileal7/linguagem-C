#include <stdio.h>

int main(){
    int i;
    float notas[5] = {7,8,9.5,9.9,5.2};

    printf("Preenchendo os valores do Vetor \n\n");

    for (i = 0; i <= 4; i++)
    {
        printf("notas[%d] = ",i);
        scanf("%f", &notas[i]);
        printf("\n \n ");
    }

    printf("Exibindo os valores do vetor \n");
    for (i = 0; i <= 4; i++)
    {
        printf("notas[%d] = %.1f",i,notas[i]);
    }

    return 0;
    
}