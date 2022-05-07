#include <stdio.h>   // Comandos basicos (INPUT, OUTPUT, PRINTF...)
#include <stdlib.h>  // Funcoes para comunicacao com Sistema Op.
#include <locale.h>  // Acentua�ao
#include <windows.h> // importar charset WINDOWS
#include <ctype.h>
#include <math.h>

int main(void)
{
    // QUESTAO 2

    // %c => char
    // %d => int
    // %f => float/double
    // %s => string

    setlocale(LC_ALL, "Portuguese");

    int qtd, totalQTD, i, prod;
    float val, totalVal, media, nDecimal, nInteiro;
    char resp;

    do
    {
        totalVal = 0.00;
        totalQTD = 0;
        prod = 0;
        do
        {
            prod++;
            system("cls || clear");
            printf("Produto %d", prod);

            // LER QUANTIDADE
            printf("\n\nInforme a quantidade:");
            scanf("%d", &qtd);
            system("cls || clear");

            if (qtd > 0)
            {
                // LER VALOR (PRECO)
                do
                {
                    printf("\n\nInforme o valor unitario do produto (Unitario):");
                    scanf("%f", &val);
                    system("cls || clear");
                    if (val < 0)
                    {
                        printf("Valor invalido!");
                    }
                } while (val < 0);

                totalQTD = totalQTD + qtd;
                totalVal = totalVal + ((float)qtd * val);
            }

        } while (qtd > 0);

        if (totalQTD == 0)
        {
            printf("\nNenhum produto informado!");
        }
        else
        {

            // CALCULANDO MEDIA DA COMPRA
            media = totalVal / (float)totalQTD;
            printf("VALOR TOTAL DA COMPRA: R$ %.2f", totalVal);
            printf("\nVALOR MEDIO DA COMPRA: R$ %.2f", media);

            nInteiro = floor(totalVal);
            nDecimal = totalVal - nInteiro;

            printf("\n\nO valor total da compra eh %.0f reais e %.2f centavos", nInteiro, nDecimal);

            printf("\n\n%.0f reais equivale a:\n", nInteiro);

            // VERIFICANDO NOTAS DE 100
            i = 0;
            while (nInteiro >= 100)
            {
                nInteiro = nInteiro - 100;
                i++;
            }

            if (i > 0)
            {
                printf("\n%d notas(s) de 100", i);
            }

            // VERIFICANDO NOTAS DE 50
            i = 0;
            while (nInteiro >= 50)
            {
                nInteiro = nInteiro - 50;
                i++;
            }

            if (i > 0)
            {
                printf("\n%d notas(s) de 50", i);
            }

            // VERIFICANDO NOTAS DE 20
            i = 0;
            while (nInteiro >= 20)
            {
                nInteiro = nInteiro - 20;
                i++;
            }

            if (i > 0)
            {
                printf("\n%d notas(s) de 20", i);
            }

            // VERIFICANDO NOTAS DE 10
            i = 0;
            while (nInteiro >= 10)
            {
                nInteiro = nInteiro - 10;
                i++;
            }

            if (i > 0)
            {
                printf("\n%d notas(s) de 10", i);
            }

            // VERIFICANDO NOTAS DE 5
            i = 0;
            while (nInteiro >= 5)
            {
                nInteiro = nInteiro - 5;
                i++;
            }

            if (i > 0)
            {
                printf("\n%d notas(s) de 5", i);
            }

            // VERIFICANDO NOTAS DE 2
            i = 0;
            while (nInteiro >= 2)
            {
                nInteiro = nInteiro - 2;
                i++;
            }

            if (i > 0)
            {
                printf("\n%d notas(s) de 2", i);
            }

            // VERIFICANDO NOTAS DE 1
            i = 0;
            while (nInteiro >= 1)
            {
                nInteiro = nInteiro - 1;
                i++;
            }

            if (i > 0)
            {
                printf("\n%d notas(s) de 1", i);
            }
        }

        fflush(stdin);
        printf("\n\nDeseja repetir o programa: \n[S] Sim \n[N] Nao\n");
        scanf(" %c%*[^\n]", &resp);
        resp = toupper(resp);

    } while (resp == 'S');

    system("cls || clear");
    printf("\n\nFim do programa!");
    return 0;
}