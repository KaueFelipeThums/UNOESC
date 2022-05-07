#include <stdio.h>   // Comandos basicos (INPUT, OUTPUT, PRINTF...)
#include <stdlib.h>  // Funcoes para comunicacao com Sistema Op.
#include <locale.h>  // Acentuaãao
#include <windows.h> // importar charset WINDOWS
#include <ctype.h>

int main(void)
{
    // QUESTAO 1

    // %c => char
    // %d => int
    // %f => float/double
    // %s => string

    setlocale(LC_ALL, "Portuguese");

    char categoria;
    int quantidade, total = 0, soma = 0;
    float media;

    do
    {
        fflush(stdin);
        printf("Informe a categoria: ");
        scanf(" %c%*[^\n]", &categoria);

        categoria = toupper(categoria);
        // GARATIR QUE SEJA INFORMADO A QUANTIDADE MAIOR QUE 0
        do
        {
            printf("Informe a quantidade [Maior que zero]: ");
            scanf("%d", &quantidade);
            system("cls || clear");
        } while (quantidade <= 0);

        // VERIFICAR CATEGORIA INFORMADA
        if (categoria == 'A' || categoria == 'B' || categoria == 'C')
        {
            total++;
            soma = soma + quantidade;
        }

        // REPETIR CASO SEJA INFORMADA A CATEGORIA CORRETA
    } while (categoria == 'A' || categoria == 'B' || categoria == 'C');
    system("cls || clear");

    // VERIFICAR A DIVISÃO POR 0
    if (total != 0)
    {
        // GARANTIR QUE A MÉDIA SEJA FLOAT
        media = (float)soma / (float)total;
        printf("A media dos produtos eh %.2f", media);
    }
    else
    {
        printf("Nenhum produto informado!");
    }

    return 0;
}