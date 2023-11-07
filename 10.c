#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float numeroUm;
    float numeroDois;
    int operacao;
    float resultado;
    printf("\n-----------------------OPERAÇÕES-----------------------\n");
    printf("\n digite o primeiro numero:\n");
    scanf("%f", &numeroUm);
    printf("\n digite o segundo numero:\n");
    scanf("%f", &numeroDois);
    fflush(stdin);

    printf("Oeração----------Código\n");
printf("Adição----------1\n");
printf("Subtração---------2\n");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        resultado = numeroUm + numeroDois;
        break;
    case 2:
        resultado = numeroUm - numeroDois;
        break;
    default:
        printf("Operação inválida");
        break;
    }

    printf("O primeiro número: %.2f \n", numeroUm);
    printf("O segundo número: %.2f \n", numeroDois);
    printf("Resultado: %2.f \n", resultado);
    getchar();
    return 0;
}