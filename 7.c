#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
int main(){
setlocale(LC_ALL,"portuguese");
int opcao;
printf("Produto----------------Código\n");
printf("Novo Jogo-----------------1\n");
printf("Carregar Jogo-------------2\n");
printf("Configurações-----------3\n");

printf("Digite o código com a opcao correspondente: ");
scanf ("%d",&opcao);


system("cls || clear");


switch (opcao)
{
case 1:
    printf("\nCarregando Novo Mundo... ");
    
    break;

case 2:
    printf("\nCarregando Mundo... ");
    break;

    case 3:
    printf("\nSensibilidade | Áudio | Brilho | Comandos ");
          break;

default:
    break;
}







    getchar();
    return 0;
}
