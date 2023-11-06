#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
int main(){
setlocale(LC_ALL,"portuguese");
float temperatura;
char clima [300];

printf("Digite a temperatura em graus Celsius: ");
scanf("%f.2",&temperatura);

system("cls||clear");
if (temperatura>25)
{
    strcpy(clima,"O dia está ensolarado! ");
}

else if (temperatura<15)
{
    strcpy(clima,"O dia está chuvoso!");
}
else if (temperatura>15 && temperatura<25)
{
    strcpy(clima,"O dia está nublado!");
}



printf("%s",clima);


getchar();
    return 0;
}
