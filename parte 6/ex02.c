#include <stdio.h>

void troca(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void main(){
    int a=7, b=5;
    troca (a,b);
    printf("a = %d \nb = %d \n",a,b);
}