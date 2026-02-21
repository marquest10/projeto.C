#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct
{
    char title[100];
    char author[100];
    int year;
    char isbn[20];
} Book;

Book books[MAX_BOOKS];
int bookCount = 0;

void addBook()
{
    if (bookCount >= MAX_BOOKS)
    {
        printf("Biblioteca cheia!\n");
        return;
    }
    printf("Digite o titulo do livro: ");
    scanf(" %[^\n]", books[bookCount].title);
    printf("Digite o autor do livro: ");
    scanf(" %[^\n]", books[bookCount].author);
    printf("Digite o ano de publicacao: ");
    scanf("%d", &books[bookCount].year);
    printf("Digite o ISBN: ");
    scanf(" %[^\n]", books[bookCount].isbn);
    bookCount++;
    printf("Livro adicionado com sucesso!\n");
}

void displayBooks()
{
    if (bookCount == 0)
    {
        printf("Nenhum livro na biblioteca.\n");
        return;
    }
    printf("Livros na biblioteca:\n");
    for (int i = 0; i < bookCount; i++)
    {
        printf("%d. %s por %s (%d) - ISBN: %s\n", i + 1, books[i].title, books[i].author, books[i].year, books[i].isbn);
    }
}

void searchBook()
{
    char searchTitle[100];
    printf("Digite o titulo para buscar: ");
    scanf(" %[^\n]", searchTitle);
    int found = 0;
    for (int i = 0; i < bookCount; i++)
    {
        if (strstr(books[i].title, searchTitle) != NULL)
        {
            printf("Encontrado: %s por %s (%d) - ISBN: %s\n", books[i].title, books[i].author, books[i].year, books[i].isbn);
            found = 1;
        }
    }
    if (!found)
    {
        printf("Livro nao encontrado.\n");
    }
}

void removeBook()
{
    int index;
    displayBooks();
    printf("Digite o numero do livro para remover: ");
    scanf("%d", &index);
    if (index < 1 || index > bookCount)
    {
        printf("Numero invalido.\n");
        return;
    }
    for (int i = index - 1; i < bookCount - 1; i++)
    {
        books[i] = books[i + 1];
    }
    bookCount--;
    printf("Livro removido com sucesso!\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n--- Biblioteca Digital ---\n");
        printf("1. Adicionar livro\n");
        printf("2. Exibir livros\n");
        printf("3. Buscar livro\n");
        printf("4. Remover livro\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            displayBooks();
            break;
        case 3:
            searchBook();
            break;
        case 4:
            removeBook();
            break;
        case 5:
            exit(0);
        default:
            printf("Opcao invalida.\n");
        }
    }
    return 0;
}
