#include <stdio.h>


/*Função*/

void main(){
   
    int n1,n2,resultado;
    scanf("%d ",&n1);
    scanf("%d ",&n2);
    resultado = multiplica(n1,n2);
    printf("Resultado: %d",resultado);

}

 int multiplica(int n1,int n2){
    int resultado;
    resultado = n1 + n2;
    return resultado;
    }