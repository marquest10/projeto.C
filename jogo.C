#include <stdio.h>
#include <stdlib.h> //Rand() e srand()
#include <time.h>   //Para time()

int main()
{
    // Essa linha usa o rélogio do pc para que o número do pc mude sempre
    srand(time(NULL));

    // Gera um número aleatório entre 0 e 100
    int numero_secreto = (rand() % 100) + 1;
    int palpite;
    int tentativas = 0;

    printf("==============================\n");
    printf("   BEM-VINDO AO JOGO DA ADIVINHACAO\n");
    printf("==============================\n\n");

    // O loop 'while' continuará enquanto o palpite for diferente do secreto
    while (palpite != numero_secreto)
    {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++; // Soma 1 ao contador de tentativas

        if (palpite > numero_secreto)
        {
            printf("Ops, o numero secreto e MENOR que %d. Tente de novo!\n\n", palpite);
        }
        else if (palpite < numero_secreto)
        {
            printf("Hum, o numero secreto e MAIOR que %d. Tente de novo!\n\n", palpite);
        }
        else
        {
            printf("PARABENS! Voce acertou em %d tentativas!\n", tentativas);
        }
    }

    return 0;
}