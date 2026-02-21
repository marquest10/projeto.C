#include <stdio.h>

int main()
{
    int senha_correta = 1234; // Senha definida (pode ser alterada)
    int senha_digitada;
    float saldo = 1000.0; // Saldo inicial
    int opcao;
    float valor;

    // Loop para pedir senha até acertar
    while (1)
    {
        printf("Digite a senha: ");
        scanf("%d", &senha_digitada);
        if (senha_digitada == senha_correta)
        {
            printf("Acesso concedido!\n");
            break;
        }
        else
        {
            printf("Senha incorreta. Tente novamente.\n");
        }
    }

    // Loop do menu principal
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Ver Saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Seu saldo atual e: R$ %.2f\n", saldo);
            break;
        case 2:
            printf("Digite o valor a depositar: R$ ");
            scanf("%f", &valor);
            if (valor > 0)
            {
                saldo += valor;
                printf("Deposito realizado com sucesso! Novo saldo: R$ %.2f\n", saldo);
            }
            else
            {
                printf("Valor invalido para deposito.\n");
            }
            break;
        case 3:
            printf("Digite o valor a sacar: R$ ");
            scanf("%f", &valor);
            if (valor > 0 && valor <= saldo)
            {
                saldo -= valor;
                printf("Saque realizado com sucesso! Novo saldo: R$ %.2f\n", saldo);
            }
            else if (valor > saldo)
            {
                printf("Saldo insuficiente. Seu saldo atual e: R$ %.2f\n", saldo);
            }
            else
            {
                printf("Valor invalido para saque.\n");
            }
            break;
        case 4:
            printf("Obrigado por usar o simulador de ATM. Ate logo!\n");
            return 0; // Sai do programa
        default:
            printf("Opcao invalida. Tente novamente.\n");
            break;
        }
    }

    return 0;
}