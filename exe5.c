#include <stdio.h>

int main() {
    int numero, contador = 1;
    printf("Digite um numero para a tabuada: ");
    scanf("%d", &numero);
    // Complete aqui: use while para calcular a tabuada
    while (contador <= 10) {
    printf("%d x %d = %d\n", numero, contador, numero * contador);
    contador++;
}
return 0;
}+