    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main(){

    int A, B, soma, subtr, div, mult;
    printf("digite o primeiro valor.\n");
    scanf("%d", &A);

    
    printf("Digite o segundo valor.\n");
    scanf("%d", &B);

    soma= A + B;
    subtr=A - B;
    div= A / B;
    mult= A * B;
    
    printf("Resultados:\n");
    printf("Resultados %d:\n", soma);
    printf("Resultados %d:\n", subtr);
    printf("Resultados %d:\n", div);
    printf("Resultados %d:\n", mult);

    return 0;

    }