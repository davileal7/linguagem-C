#include <stdio.h>

/* 
(&) acesso ao endereço
(*) acesso ao conteúdo
*/

int main(void){
    int * ptr;
    int valor = 10;

    ptr = &valor;
    printf("Endereço = %x ",&valor);
    printf("Endereço = %x ",&ptr);
    printf("Valor = %d ",&ptr);

}