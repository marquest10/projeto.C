#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int matriz[3][3];
    int i, j, x, linha, coluna, achou = 0;

    // Leitura da matriz
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Insira o elemento de linha %d, coluna %d:\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Leitura da chave de busca
    printf("Insira uma chave de busca: \n");
    scanf("%d", &x);

    // Busca pela chave
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] == x) // Corrigido: comparação ao invés de atribuição
            {
                // Encontramos a chave de busca.
                achou = 1;
                linha = i;
                coluna = j;
                break;
            }
        }
        if (achou == 1)
        {
            break;
        }
    }

    // Saída do resultado
    if (achou == 1)
    {
        printf("O elemento %d foi encontrado na linha %d, coluna %d.\n", x, linha, coluna); // Usando variáveis corretas
    }
    else
    {
        printf("Chave nao encontrada!\n"); // Adicionei \n para consistência
    }

    return 0;
}