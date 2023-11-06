#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
int main(){
setlocale(LC_ALL,"portuguese");
int produto;
printf("Produto----------Código\n");
printf("Camiseta---------1\n");
printf("Calça-----------2\n");
printf("Sapato-----------3\n");

printf("Digite o código com o produto correspondente: ");
scanf ("%d",&produto);


system("cls || clear");


switch (produto)
{
case 1:
    printf("\nCódigo selecionado: 1 ");
    printf("\nProduto: Camiseta ");
    printf("\nValor a pagar R$22,80 ");
    break;

case 2:
    printf("\nCódigo selecionado: 2 ");
    printf("\nProduto: Calça ");
    printf("\nValor a pagar: R$77,90 ");
    break;

    case 3:
    printf("\nCódigo selecionado: 3 ");
    printf("\nProduto: Sapato ");
    printf("\nValor a pagar: R$199,90 ");
    break;

default:
    break;
}







    getchar();
    return 0;
}