#include <stdio.h>
 
void main() {
 int x, inferior, superior;
 
 printf("Digite o valor do limite inferior: ");
 scanf("%d", &inferior);
 printf("\n Digite o valor do limite superior: ");
 scanf("%d", &superior);
 for (x=inferior; x<=superior; x++){
     printf ("%d ", x);
 }
}