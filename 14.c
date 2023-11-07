#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(){

    
    setlocale(LC_ALL, "portuguese");
    int numero = 0;
    int quantidadePares = 0;
    int quantidadeImpares = 0;
    int somaPares = 0;
    int somaImpares = 0;
    float mediaPares = 0;
    float mediaImpares = 0;


    

    do
    {
        printf("Informe o valor do número: ");
        scanf("%d", &numero);

        if (numero >= 0)
        {
            if (numero % 2 == 0)
            {
                somaPares += numero;
                quantidadePares++;
            }
           if (numero % 2 != 0)
            {
                somaImpares += numero;
                quantidadeImpares++;
            }


        }

    } while (numero >= 0);


    mediaPares = somaPares / (float) quantidadePares; 
    mediaImpares = somaImpares / (float) quantidadeImpares; 


    system("cls || clear");




    

    printf("Quantidade de números pares: %d \n", quantidadePares);
    printf("Soma par: %d \n", somaPares);
    printf("Média dos números pares: %.2f \n ", mediaPares);

    printf("Quantidade de números impares: %d \n", quantidadeImpares);
    printf("Soma impar: %d \n", somaImpares);
    printf("Média dos números impares: %.2f \n ", mediaImpares);



    getchar();
    return 0;
}