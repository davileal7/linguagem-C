#include <stdio.h>
#include <stdlib.h>

/*tipos permitidos em SWICTH: int, byte, short, char, Strings*/
/*CASES pode ter inúmeros, é seguido por um valor comparado*/
/*BREAK - fim*/
/*DEFAULT - é o que sobra*/

void main(){

    char grade = 'D';
    switch (grade){
    case 'A':
        printf('Excelente');
        break;
    case 'B':
    case 'C':
        printf("Bem feito");
        break;
    case 'D':
        printf("Voce passou!");
        case 'E':
        printf("Melhor tentar novamente");
        break;
    default:
    printf("Conceito invalido");        
    
    }
}