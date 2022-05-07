#include <stdio.h>   // Comandos basicos (INPUT, OUTPUT, PRINTF...)
#include <stdlib.h>  // Funcoes para comunicacao com Sistema Op.
#include <locale.h>  // Acentuaãao
#include <windows.h> // importar charset WINDOWS
#include <ctype.h>

int main(void)
{
    // QUESTAO 3

    // %c => char
    // %d => int
    // %f => float/double
    // %s => string

    setlocale(LC_ALL, "Portuguese");

    int valMin, valMax, n, i, primo, colAtual, qtd;
    char resp;

    do
    {
        system("cls || clear");
        // VALOR MINIMO (MAIOR QUE 1)
        do
        {
            printf("Informe o valor minimo [MAIOR QUE 1]:");
            scanf("%d", &valMin);

            if (valMin <= 1)
            {
                system("cls || clear");
                printf("O valor minimo precisa ser maior que 1!\n\n");
            }
        } while (valMin <= 1);

        // VALOR MAXIMO (MAIOR QUE VALOR MINIMO)
        do
        {
            printf("Informe o valor maximo [MAIOR OU IGUAL A %d (valor minimo)]:", valMin);
            scanf("%d", &valMax);

            if (valMax < valMin)
            {
                system("cls || clear");
                printf("O valor maximo precisa ser maior ou igual a %d (valor minimo)!\n\n", valMin);
            }
        } while (valMax < valMin);

        // QTD POR LINHA (MAIOR QUE 0)
        do
        {
            printf("Informe a quantidade por linha [MAIOR QUE 0]:");
            scanf("%d", &n);

            if (n <= 0)
            {
                system("cls || clear");
                printf("A quantidade por linha precisa ser maior que 0!\n\n");
            }
        } while (n <= 0);

        system("cls || clear");
        printf("Números primos:\n");
        printf("Entre %d e %d.\n", valMin, valMax);

        // EXIBINDO NUMEROS PRIMOS
        colAtual = 1;
        qtd = 0;
        while (valMin <= valMax)
        {
            primo = 0;
            for (i = 2; i < valMin; i++)
            {
                if (valMin % i == 0)
                {
                    primo++;
                    break;
                }
            }

            if (primo == 0)
            {
                printf("%d", valMin);
                qtd++;

                if (colAtual == n)
                {
                    printf("\n");
                    colAtual = 1;
                }
                else
                {
                    printf("\t");
                    colAtual++;
                }
            }

            valMin++;
        }

        if (qtd == 0)
        {
            printf("Não há nenhum número primo neste intervalo!");
        }

        // REPETIR O PROGRAMA
        fflush(stdin);
        printf("\n\nDeseja repetir o programa: \n[S] Sim \n[N] Nao\n");
        scanf(" %c%*[^\n]", &resp);
        resp = toupper(resp);
    } while (resp == 'S');

    system("cls || clear");
    printf("Fim do programa!");

    return 0;
}