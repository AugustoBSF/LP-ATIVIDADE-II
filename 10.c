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
    printf("\n-----------------------OPERA��ES-----------------------\n");
    printf("\n digite o primeiro numero:\n");
    scanf("%f", &numeroUm);
    printf("\n digite o segundo numero:\n");
    scanf("%f", &numeroDois);
    fflush(stdin);

    printf("Oera��o----------C�digo\n");
printf("Adi��o----------1\n");
printf("Subtra��o---------2\n");
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
        printf("Opera��o inv�lida");
        break;
    }

    printf("O primeiro n�mero: %.2f \n", numeroUm);
    printf("O segundo n�mero: %.2f \n", numeroDois);
    printf("Resultado: %2.f \n", resultado);
    getchar();
    return 0;
}