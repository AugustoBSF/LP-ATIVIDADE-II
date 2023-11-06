#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo;
    float valorCompra;
    float ValorComDesconto;

    printf("\nDia----------Código\n");
    printf("Domingo---------------1\n");
    printf("Segunda-Feira---------2\n");
    printf("Terça-Feira----------3\n");
    printf("Quarta-Feira----------4\n");
    printf("Quinta-Feira----------5\n");
    printf("Sexta-Feira-----------6\n");
    printf("Sábado---------------7\n");
    printf("\n");

    printf("Digite o código relacionado ao dia da semana do dia da compra: \n");
    scanf("%d", &codigo);
    printf("Digite o valor da compra: \n");
    scanf("%f", &valorCompra);

    switch (codigo)
    {
    case 1:
        if (valorCompra >= 100)

        {

            ValorComDesconto = valorCompra * 0.75;
            printf("\nValor da compra: R$%1.f", valorCompra, "\n");
            printf("\nValor do desconto: 15 Porcento\n");
            printf("\nvalor total: R$%1.f", ValorComDesconto, "\n");
        }
        else if (valorCompra < 100)
        {
            printf("\nValor da compra: R$%1.f", valorCompra, "\n");
            printf("\n\nvalor total: R$%1.f", valorCompra,"\n");
        }

        break;
    case 2:
        if (valorCompra >= 100)

        {

            ValorComDesconto = valorCompra * 0.90;
            printf("\nValor da compra: R$%1.f", valorCompra, "\n");
            printf("\nValor do desconto: 10 Porcento\n");
            printf("\nvalor total: R$%1.f", ValorComDesconto, "\n");
        }
        else if (valorCompra < 100)
        {
            printf("\nValor da compra: R$%1.f", valorCompra, "\n");
            printf("\nvalor total: R$%1.f", valorCompra,"\n");
        }
        break;
    case 3:
        if (valorCompra >= 100)

        {

            ValorComDesconto = valorCompra * 0.90;
            printf("\nValor da compra: R$%1.f", valorCompra, "\n");
            printf("\nValor do desconto: 10 Porcento\n");
            printf("\nvalor total: R$%1.f", ValorComDesconto, "\n");
        }
        else if (valorCompra < 100)
        {
            printf("\nValor da compra: R$%1.f", valorCompra, "\n");
            printf("\nvalor total: R$%1.f", valorCompra,"\n");
        }
        break;
    case 4:
        if (valorCompra >= 100)

        {

            ValorComDesconto = valorCompra * 0.90;
            printf("\nValor da compra: R$%1.f", valorCompra, "\n");
            printf("\nValor do desconto: 10 Porcento\n");
            printf("\nvalor total: R$%1.f", ValorComDesconto, "\n");
        }
        else if (valorCompra < 100)
        {
            printf("\nValor da compra: R$%1.f", valorCompra, "\n");
            printf("\nvalor total: R$%1.f", valorCompra,"\n");
        }
        break;
    case 5:
        if (valorCompra >= 100)

        {

            ValorComDesconto = valorCompra * 0.90;
            printf("\nValor da compra: R$%1.f", valorCompra, "\n");
            printf("\nValor do desconto: 10 Porcento\n");
            printf("\nvalor total: R$%1.f", ValorComDesconto, "\n");
        }
        else if (valorCompra < 100)
        {
            printf("\nValor da compra: R$%1.f", valorCompra, "\n");
            printf("\nvalor total: R$%1.f", valorCompra,"\n");
        }
        break;
    case 6:
        if (valorCompra >= 100)

        {

            ValorComDesconto = valorCompra * 0.90;
            printf("\nValor da compra: R$%1.f", valorCompra, "\n");
            printf("\nValor do desconto: 10 Porcento\n");
            printf("\nvalor total: R$%1.f", ValorComDesconto, "\n");
        }
        else if (valorCompra < 100)
        {
            printf("\nValor da compra: R$%1.f", valorCompra, "\n");
            printf("\nvalor total: R$%1.f", valorCompra,"\n");
        }
        break;
    case 7:
        if (valorCompra >= 100)
        {

            ValorComDesconto = valorCompra * 0.75;
            printf("\nValor da compra: R$%1.f", valorCompra, "\n");
            printf("\nValor do desconto: 15 Porcento\n");
            printf("\nvalor total: R$%1.f", ValorComDesconto, "\n");
        }
        else if (valorCompra < 100)
        {
            printf("\nValor da compra: R$%1.f", valorCompra, "\n");
            printf("\nvalor total: R$%1.f", valorCompra,"\n");
        }

        break;

    default:
        break;
    }

    getchar();
    return 0;
}