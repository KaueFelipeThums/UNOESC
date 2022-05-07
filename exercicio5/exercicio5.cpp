#include <stdio.h>   // Comandos basicos (INPUT, OUTPUT, PRINTF...)
#include <stdlib.h>  // Funcoes para comunicacao com Sistema Op.
#include <locale.h>  // Acentuaãao
#include <windows.h> // importar charset WINDOWS
#include <ctype.h>
#include <time.h>

int main(void)
{
    // QUESTAO 5

    // %c => char
    // %d => int
    // %f => float/double
    // %s => string

    setlocale(LC_ALL, "Portuguese");

    int num, val;

    srand(time(NULL));
    num = rand() % 10;

    do
    {
        printf("\n\nAdivinhe o numero magico [0 a 10]\nInforme um numero:");
        scanf("%d", &val);
        system("cls || clear");

        if (val > 10 || val < 0)
        {
            printf("Invalido, informe um numero entre 0 e 10!");
        }
        else
        {
            if (val < num)
            {
                printf("Errado, muito baixo!");
            }
            else if (val > num)
            {
                printf("Errado, muito alto!");
            }
            else
            {
                printf("Certo! %d eh o numero magico", val);
            }
        }
    } while (num != val);

    printf("\n\nFim do programa!");

    return 0;
}