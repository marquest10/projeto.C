#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opcao;
    float n1, n2, res;

    printf("Digite  1 para somar\n");
    printf("Digite  2 para subtrair\n");
    printf("Digite  3 para multiplicar\n");
    printf("Digite  4 para dividir\n");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    switch (opcao)
    {
    case 1:
        res = n1 + n2;
        printf(" soma e: %.2f\n", res);
        break;
    case 2:
        res = n1 - n2;
        printf(" subtracao e: %.2f\n", res);
        break;
    case 3:
        res = n1 * n2;
        printf(" multiplicacao e: %.2f\n", res);
        break;
    case 4:
        res = n1 / n2;
        printf(" divisao e: %.2f\n", res);
        break;
    }

    /*  if (opcao == 1)
     {
         res = n1 + n2;
         printf(" soma e: %.2f\n", res);
     }
     else if (opcao == 2)
     {
         res = n1 - n2;
         printf(" subtracao e: %.2f\n", res);
     }
     if (opcao == 3)
     {
         res = n1 * n2;
         printf(" multiplicacao e: %.2f\n", res);
     }
     if (opcao == 4)
     {
         res = n1 / n2;
         printf(" divisao e: %.2f\n", res);
     }
 }*/

    return 0;
}