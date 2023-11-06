#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
int main(){
setlocale(LC_ALL,"portuguese");
int idioma;
printf("Idioma----------Código\n");
printf("Inglês----------1\n");
printf("Espanhol---------2\n");
printf("Francês---------3\n");

printf("Digite o código com o idioma correspondente: ");
scanf ("%d",&idioma);
switch (idioma)
{
case 1:
    printf("Welcome!");
    break;

case 2:
    printf("¡Bienvenido!");
    break;

    case 3:
    printf("Accueillir!");
    break;

default:
    break;
}







    getchar();
    return 0;
}