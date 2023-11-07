#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(){

    //variaveis
    setlocale(LC_ALL, "portuguese");
    int numero1 = 0;
    int numero2 = 0;
    int maiorNumero = 0;
    int menorNumero = 9999999999;

    
    printf("Informe o primeiro número: ");
    scanf("%d", &numero1);

    printf("Informe o segundo número: ");
    scanf("%d", &numero2);

   

    maiorNumero = numero1 > numero2 ? numero1 : numero2;
    menorNumero = numero1 > numero2 ? numero2 : numero1;

    

    printf("maiorNumero número: %d \n", maiorNumero);
    printf("menorNumero número: %d \n", menorNumero);

    getchar();
    return 0;
}