#include <stdio.h>
#include <string.h>
int main(){
    char cadeia[256];
    int x,tam;
    printf("Digite um texto ");
    gets(cadeia);
    tam = strlen(cadeia);

    for (x = 0; x <= tam;x++)
    {
        
        printf("%c", cadeia[x]);
    }
    printf("\n");
    system("pause");
    return 0; 
}