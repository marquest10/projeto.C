
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char operacao;
    double num1, num2, result;
    
    // operacao
    printf("Bem vindo a calculadora!\n");
    printf("Digite a operacao que deseja fazer(+,-,*,/ ):");
    scanf("%c", &operacao);

    //numero 1
    printf("Digite o primeiro numero:");
    scanf("%lf", &num1);

    //numero 2
    printf("Digite o segundo numero:");
    scanf("%lf", &num2);

    //estrutura condiconal
    switch (operacao)
    {
    case '+' : 
     result = num1 + num2;
     break;

    case '-':
     result = num1 - num2;
     break;

    case '*':
     result = num1 * num2;
     break;

    case '/':

        if (num2 == 0){
            printf("Erro, nao e possivel dividir por zero!");
            return 1;
        }else{
          result = num1 / num2;
        }
        
   
     break;
    default:
    printf("Erro, Voce escreveu uma operacao invalida!");
     return 1;
    }

    printf(" %.2lf %c %.2lf = %.2lf", num1, operacao, num2, result);


    return 0;
}
