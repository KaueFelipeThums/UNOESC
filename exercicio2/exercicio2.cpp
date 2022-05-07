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

    char resp;
    int temperatura;

    fflush(stdin);
    printf("Voce se sente bem: \n[S] Sim \n[N] Nao\n");
    scanf(" %c%*[^\n]", &resp);

    // CONVERTER PARA MAIUSCULO
    resp = toupper(resp);
    system("cls || clear");

    // VERIFICAR RESPOSTA
    if (resp == 'S')
    {
        fflush(stdin);
        printf("Voce sente dor: \n[S] Sim \n[N] Nao\n");
        scanf(" %c%*[^\n]", &resp);
        resp = toupper(resp);

        system("cls || clear");
        // VERIFICAR RESPOSTA
        if (resp == 'N')
        {

            printf("Informe sua temperatura:");
            scanf("%d", &temperatura);

            system("cls || clear");
            // VERIFICAR TEMPERATURA
            if (temperatura <= 37)
            {
                printf("Voce esta saudavel!");
            }
            else
            {
                printf("Voce esta doente!");
            }
        }
        else if (resp == 'S')
        {
            printf("Voce esta doente!");
        }
        else
        {
            printf("Opcao invalida!");
        }
    }
    else if (resp == 'N')
    {
        printf("Voce esta doente!");
    }
    else
    {
        printf("Opcao invalida!");
    }

    return 0;
}