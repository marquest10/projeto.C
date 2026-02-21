#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Criando e Inicializando
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("Inicio:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    // Atribuindo valores aos campos
    pes.idade = 25;
    pes.peso = 99.9;
    strcpy(pes.nome, "Texto");

    printf("\nAlterando os campos via codigo:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    // Soltando interacao via teclado

    printf("\nInsira um numero inteiro:/n");
    scanf("%d", &pes.idade);
    printf("Insira um numero real:/n");
    scanf("%f", &pes.peso);
    printf("Insira uma palavra:/n");
    scanf("%s", pes.nome);

    printf("\nAlterando com dados do usuario:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    return 0;
}