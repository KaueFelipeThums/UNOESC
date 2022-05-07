#include <stdio.h>   // Comandos basicos (INPUT, OUTPUT, PRINTF...)
#include <stdlib.h>  // Funcoes para comunicacao com Sistema Op.
#include <locale.h>  // Acentuaãao
#include <windows.h> // importar charset WINDOWS
#include <ctype.h>

int main(void)
{
    // QUESTAO 2

    // %c => char
    // %d => int
    // %f => float/double
    // %s => string

    setlocale(LC_ALL, "Portuguese");

    int val, i, j, aux, resp;

    do
    {
        system("cls || clear");
        do
        {

            printf("\n\nInforme o numero maximo [Maior que 0]:");
            scanf("%d", &val);
            system("cls || clear");
            if (val <= 0)
            {
                printf("Numero invalido!");
            }

        } while (val <= 0);

        i = 1;
        while (i <= val)
        {
            j = 1;
            aux = i;
            while (j <= aux)
            {
                printf("%d", i);
                printf("\t");
                j++;
            }
            printf("\n");
            i++;
        }

        fflush(stdin);
        printf("\n\nDeseja digitar outro numero: \n[S] Sim \n[N] Nao\n");
        scanf(" %c%*[^\n]", &resp);
        resp = toupper(resp);
    } while (resp == 'S');

    system("cls || clear");
    printf("\n\nFim do programa!");
    return 0;
}