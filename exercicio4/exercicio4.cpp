#include <stdio.h>   // Comandos basicos (INPUT, OUTPUT, PRINTF...)
#include <stdlib.h>  // Funcoes para comunicacao com Sistema Op.
#include <locale.h>  // Acentuaãao
#include <windows.h> // importar charset WINDOWS
#include <ctype.h>

int main(void)
{
    // QUESTAO 4

    // %c => char
    // %d => int
    // %f => float/double
    // %s => string

    setlocale(LC_ALL, "Portuguese");

    int num2, num1, resto;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);
    printf("\nInforme o segundo valor: ");
    scanf("%d", &num2);

    if (num1 == 0 || num2 == 0)
    {
        printf("Nao eh possivel realizar a divisao por zero\n");
    }
    else
    {

        if (num1 > num2)
        {
            resto = num1 % num2;
        }
        else
        {
            resto = num2 % num1;
        }

        printf("O resto da divisao eh %d\n", resto);
    }

    return 0;
}