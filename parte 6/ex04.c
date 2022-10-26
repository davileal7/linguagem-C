#include <stdio.h>


/* recursividade */

int mult(int x,int y){
    if (y == 1)
    {
        return(x);

    } else {

        return(x + mult(x,y-1));
    }
    
}

void main(){
    printf("%d x %d = %d",2,3,mult(2,3));
}