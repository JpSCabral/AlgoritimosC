#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[10];
    int tamanho_nome, i = 0;

    printf("Digite seu nome: \n");
    scanf("%[^\n]s", nome);
    printf("Dimensao do nome: %d", strlen(nome));   
    tamanho_nome = strlen(nome);
    printf("\n --------------------Normal-------------------\n ");

    for (i = 0; i < tamanho_nome; i++)
    {
        printf("%c", nome[i]);
    }

    printf("\n ------------------Ao contrario---------------------\n ");

    for (i = tamanho_nome; i >= 0; i--)
    {
        printf("%c", nome[i]);
    }

    printf("\n -------------------Vertical--------------------\n ");
    
    for (i = 0; i < tamanho_nome; i++)
    {
        printf("\n%c", nome[i]);
    }

    printf("\n -----------------Vertical ao contrario----------------------\n ");
    
    for (i = tamanho_nome; i >= 0; i--)
    {
        printf("\n%c", nome[i]);
    }

    printf("\n ---------------------------------------\n ");
    return 0;
}





// printf("Nome informado: %s", nome);
// printf("Nome informado na vertical: %s", nome);
// printf("Nome informado ao contrario na vertical: %s", nome);
// int idade;
// char nome[50];
// int pega_idade(){
//     printf("Informe o nome: \n");
//     scanf("%[^\n]s", &nome); // regex
//     printf("Informe a idade: \n");
//     scanf("%d", &idade);
//     return (idade);
// }
// char pega_nome()
// {
//     printf("Informe o nome: \n");
//     scanf("%[^\n]s", &nome); // regex
//     return (nome);
// }
// int main()
// {
//     pega_nome;
//     pega_idade;
//     printf("%s tem %d anos", nome, idade);
//     return 0;
// }