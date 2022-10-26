#include <stdio.h>

int main(){
    int i;
    float notas[5] = {7,8,9.5,9.9,5.2};

    printf("Exibindo os valores do Vetor \n");

    for (i = 0; i <= 4; i++)
    {
        printf("notas[%d] = %.1f\n",i, notas[i]);
    }

    return 0;
    
}