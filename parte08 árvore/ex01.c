#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
struct arv {
int info;
struct arv* sae;
struct arv* sad;
};
typedef struct arv Arv;
int vazia(Arv* a)
{
return a==NULL;
}
//inicio - árvore vazia aponta para elemento NULO
Arv* inicializa(void)
{
return NULL;
}

//cria nó-raiz e duas sub árvores (SAE,SAD)
Arv* cria(int c, Arv* sae, Arv* sad){
Arv* p=(Arv*)malloc(sizeof(Arv));    //malloc (aloca um novo endereço)
p->info = c;
p->sae = sae;
p->sad = sad;
return p;
}
//árvore é diferente de vazia
void imprime (Arv* a)
{
if (!vazia(a)){
printf("%d ", a->info); /* mostra raiz */
imprime(a->sae); /* mostra sae */
imprime(a->sad); /* mostra sad */
}
}
/* impressao na forma < a <s>,<n> > em pre ordem*/
void imprimec (Arv* a)
{
printf("<");
if (!vazia(a)){
printf("%d ", a->info); /* mostra raiz */
imprimec(a->sae); /* mostra sae */
printf(",");
imprimec(a->sad); /* mostra sad */
}
printf("">"");
}
/* impressao na forma Pos Ordem>*/
void imprimepo (Arv* a)
{
if (!vazia(a)){
imprimepo(a->sae); /* mostra sae */
imprimepo(a->sad); /* mostra sad */
printf("%d ", a->info); /* mostra raiz */
}
}
/* impressao na forma Ordem simetrica*/
void imprimeos (Arv* a)
{
if (!vazia(a)){
imprimeos(a->sae); /* mostra sae */
printf("%d ", a->info); /* mostra raiz */
imprimeos(a->sad); /* mostra sad */
}
}
Arv* libera (Arv* a){
if (!vazia(a)){
libera(a->sae); /* libera sae */
libera(a->sad); /* libera sad */
free(a); /* libera raiz */
}
return NULL;
}
int busca(Arv* a, int c){
if (vazia(a))
return 0; /* árvore vazia: não encontrou */
else
return a->info==c || busca(a->sae,c) || busca(a->sad,c);
}
void main(){
Arv* a1= cria(8,inicializa(),inicializa());
imprimepo(a1);
printf("\n");
getch();
Arv* a2= cria(4,inicializa(),a1);
Arv* a3= cria(2,inicializa(),inicializa());
Arv* a4= cria(1,inicializa(),inicializa());
Arv* a5= cria(3,a3,a4);
a2->sae = a5;
imprime(a2);
getch();
printf("\n");
imprimepo(a2);
getch();
printf("\n");
imprimeos(a2);
printf("\n");
getch();
if (busca(a2,233))
printf("z encontrado");
else
printf("z nao encontrado");
getch();
}