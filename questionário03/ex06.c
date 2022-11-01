# include <stdio.h>
void main () {
 int ano, resto;
 printf( "Digite o ano: ");
 scanf("%d", &ano);
 if(ano% 100 == 0){
    if (ano% 400 == 0){
       printf("O Ano %d eh bissexto \n \n", ano);
    }else{
       printf(" O Ano %d nao eh bissexto \n \n", ano);
    }
 }else{
    if (ano%4 == 0){
       printf("O Ano %d eh bissexto \n \n", ano);
    }else{
       printf(" O Ano %d nao eh bissexto \n", ano);
    }
 }  
}