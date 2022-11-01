#include <stdio.h>
#include <string.h>

int verificavogal (char M){
    if (M=='a'|| M=='A' || M=='e'|| M=='E' || M=='i' || M=='I' || M=='o' || M=='O' || M=='u' || M=='U')
    return(1);
        else
        return(0);
}

main(){
    char x;
    printf("Digite uma letra: ");
    scanf("%c", &x);
    if (verificavogal(x)==1)
        printf("\nA letra [%c] eh uma vogal:",x);
    else
    printf("\nA letra [%c] é uma consoante:",x);
    printf("\n\n");
    system("pause");
    return(0);    
    
}