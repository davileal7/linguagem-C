#include <stdio.h>

void main(){
    int nota1,nota2,media;
    printf("Entre com a nota 1 e nota 2:");
    scanf("%d %d",&nota1,&nota2);
    media = (nota1 + nota2) / 2;
    printf("A media entre %d e %d = %d\n",nota1,nota2,media);

    int hora,min;
    scanf("%d %d",&hora,&min);
    printf("Agora e %d horas e %d minutos",hora,min);
}


