#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 7;
    int b = 17;
    int x = a+b;

    int n1;
    int n2;

    printf("Mostra o valor da variaveis a e b : %d e %d\n",a,b);
    printf("a soma dos valores. %d + %d = %d\n",a,b,x);
    
    printf("Agora digite um numero: "); scanf("%d",&n1);
    printf("Agora digite outro numero: "); scanf("%d",&n2);
    printf("foram digitados os numeros %d e %d",n1,n2);
}