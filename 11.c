#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(){

   
    setlocale(LC_ALL, "portuguese");
    char codigoCerto [200] = "2006";
    char codigo [200];


    do
    {
        printf("Informe o código:" );
        gets(codigo);

        if (strcmp(codigoCerto, codigo) == 0)
        {
            printf("Acesso permitido.\n");
        }  
        else
        {
            printf("Acesso negado. \n");
            sleep(2);
            printf("Tente Novamente. \n");
            sleep(3);
        }


    } while (strcmp(codigoCerto, codigo) != 0);



    

    getchar();
    return 0;
}