#include<stdio.h>

/*Fibonaci*/
void main(){
   int i, result, ant = 0, prox = 1;
   for(i=0; i<10; i++){
    result = ant + prox;
    ant = prox;
    prox = result;
    printf("Iteração %d: %d \n", i, result);
   }
}