#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
    int numero = 0;
    char resultado[200];

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero == 1 || numero == 0)
    {
    }
    else if (numero % 1 == 0 && numero % 2 == 0 || numero % 3 == 0 && numero % 1 == 0)
    {

        strcpy(resultado, "Número não primo");
    }

    else

    {
        strcpy(resultado, "Número primo");
    }

    printf("%s", resultado);

    getchar();
    return 0;
}