#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    float nota;
    char adjetivoNota[300];

    printf("Digite a sua nota: ");
    scanf("%f", &nota);
    if (nota >= 9)
    {
        strcpy(adjetivoNota, "Excelente!!! ");
    }

    else if (nota >= 7 && nota <= 8.9)
    {
        strcpy(adjetivoNota, "Bom! ");
    }

    else if (nota >= 5 && nota <= 6.9)
        
    {
        strcpy(adjetivoNota, "Razoável. ");
    }

    else
    {
        strcpy(adjetivoNota, "Insuficiente. ");
    }

printf("\nNota: %2.f",nota,"\n");
printf("\nAdjetivo da Nota: %s", adjetivoNota);






    getchar();
    return 0;
}