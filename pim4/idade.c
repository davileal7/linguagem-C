#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;
    char resposta = 'S';
    char comorbidade[20] = "";


    printf("Digite sua idade: ");
    scanf("%d",&idade);
    printf("Voce tem %d anos\n", idade);
    if (idade > 65)
    {
        printf("Sua idade é %d pertence ao grupo de risco\n", idade);
        //salvar no sistema !!!
    }

    printf("Possui alguma comorbidade? digite apenas (S) (N): ");
    scanf("%s",&resposta);
    if (resposta == 'S') {
        printf("Qual ? ");
        scanf("%s",&comorbidade);
        //guardaria no arquivo(sistema)
    }

    printf("Obrigado!");

    system("pause");
    return 0;
    
}