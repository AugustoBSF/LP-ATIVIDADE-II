#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(){

   
    setlocale(LC_ALL, "portuguese");
    int quantidade = 0;
    float nota = 0;
    float soma = 0;
    float media = 0;
    int i; 

   

    printf("Informe quantas notas serão: ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++)
    {
        printf("Informe a %dº nota", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / (float) quantidade;


    
    printf("Quantidade de números inseridos: %d \n", quantidade);
    printf("Soma dos números inseridos: %.2f \n", soma);
    printf("Média dos números inseridos: %.2f \n", media);


    
    getchar();
    return 0;
}