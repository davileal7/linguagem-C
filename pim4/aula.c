#include <stdio.h>
#include <string.h>
#include <locale.h> //acentuação

#define N 50



int main(){
    setlocale(LC_ALL,"Portuguese");

    int idade;
    char resposta1[N] = {"S"};
    char resposta2[N];
   
    int ok;
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Possui alguma coformidade? digite (S) ou (N): ");
    gets(resposta2);
    ok = strcmp(resposta1,resposta2); //compara as duas

    if (ok == 0){
        printf("Qual ? ");
        
    } else
    printf("encerrado \n"); 
 
  
}