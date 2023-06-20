#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_FAB 5
#define MAX_PROD 50

enum UF
{
    DF = 1,
    SP,
    RJ,
    AM,
    PR,
    ES,
    GO,
    PI,
    AL,
    BA,
    CE,
    MA,
    MG,
    MS,
    MT,
    PA,
    PB,
    PE,
    RN,
    RO,
    RR,
    RS,
    SC,
    SE,
    TO
} estado;
typedef struct
{
    char marca[50];
    char site[50];
    int telefone;
    enum UF estado;
} Fabricante;

typedef struct
{
    char descricao[50];
    float peso;
    float valorCompra;
    float valorVenda;
    float valorLucro;
    float percentualLucro;
    Fabricante fabricante;
} Produto;
// ------------------------------------------------------------------------validaçoes
// Função para validar o campo "peso"
bool le_valida_peso(float peso)
{
    if (peso >= 0.05 && peso <= 50.0)
        return true;
    else
        return false;
}

// Função para validar o campo "valor de compra"
bool le_valida_valor_compra(float valor)
{
    if (valor >= 0.50 && valor <= 8000.00)
        return true;
    else
        return false;
}

// Função para validar o campo "valor de venda"
bool le_valida_valor_venda(float valor)
{
    if (valor >= 1.00 && valor <= 10000.00)
        return true;
    else
        return false;
}

// Função para ler uma string do usuário com verificação de tamanho
void lerString(char *str, int tamanho)
{
    fgets(str, tamanho, stdin);
    // Remove o caractere de nova linha '\n' do final da string
    str[strcspn(str, "\n")] = '\0';
}

// Função para ler um número inteiro do usuário
int lerInteiro()
{
    int numero;
    scanf("%d", &numero);
    getchar(); // Limpar o caractere de nova linha do buffer
    return numero;
}

// Função para ler um número decimal (float) do usuário
float lerDecimal()
{
    float numero;
    scanf("%f", &numero);
    getchar(); // Limpar o caractere de nova linha do buffer
    return numero;
}
// ------------------------------------------------------------------------validaçoes

// ------------------------------------------------------------------------------------------funçoes
void listarProdutosAlf(Produto produtos[], int numProdutos)
{
    // Ordenar os produtos em ordem alfabética crescente
    for (int i = 0; i < numProdutos - 1; i++)
    {
        for (int j = i + 1; j < numProdutos; j++)
        {
            if (strcmp(produtos[i].descricao, produtos[j].descricao) > 0)
            {
                // Trocar de posição os produtos
                Produto temp = produtos[i];
                produtos[i] = produtos[j];
                produtos[j] = temp;
            }
        }
    }

    // Exibir a lista de produtos em ordem alfabética crescente
    printf("Lista de produtos em ordem alfabética crescente:\n");
    for (int i = 0; i < numProdutos; i++)
    {
        printf("%s\n", produtos[i].descricao);
    }
}
void listarMarcasAlf(Fabricante fabricantes[], int numFabricantes)
{
    // Ordenar as marcas em ordem alfabética decrescente
    for (int i = 0; i < numFabricantes - 1; i++)
    {
        for (int j = i + 1; j < numFabricantes; j++)
        {
            if (strcmp(fabricantes[i].marca, fabricantes[j].marca) < 0)
            {
                // Trocar de posição os fabricantes
                Fabricante temp = fabricantes[i];
                fabricantes[i] = fabricantes[j];
                fabricantes[j] = temp;
            }
        }
    }

    // Exibir a lista de marcas em ordem alfabética decrescente
    printf("Lista de marcas em ordem alfabética decrescente:\n");
    for (int i = 0; i < numFabricantes; i++)
    {
        printf("%s\n", fabricantes[i].marca);
    }
}
// Função para calcular o valor do lucro e o percentual de lucro de um produto
void calcularLucro(Produto *produto)
{
    produto->valorLucro = produto->valorVenda - produto->valorCompra;
    produto->percentualLucro = (produto->valorLucro / produto->valorCompra) * 100.0;
}

// Função para cadastrar os dados de um fabricante
void cadastrarFabricante(Fabricante *fabricante)
{
    int opUF;
    printf("Digite a marca: \n");
    lerString(fabricante->marca, 50);

    printf("Digite o site: \n");
    lerString(fabricante->site, 50);

    printf("Digite o telefone: \n");
    lerInteiro(fabricante->telefone);

    do
    {
        printf("Estado:\n"
               "(1)-DF\n"
               "(2)-SP\n"
               "(3)-RJ\n"
               "(4)-AM\n"
               "(5)-PR\n"
               "(6)-ES\n"
               "(7)-GO\n"
               "(8)-PI\n"
               "(9)-AL\n"
               "(10)-BA\n"
               "(11)-CE\n"
               "(12)-MA\n"
               "(13)-MG\n"
               "(14)-MS\n"
               "(15)-MT\n"
               "(16)-PA\n"
               "(17)-PB\n"
               "(18)-PE\n"
               "(19)-RN\n"
               "(20)-RO\n"
               "(21)-RR\n"
               "(22)-RS\n"
               "(23)-SC\n"
               "(24)-SE\n"
               "(25)-TO\n\n");
        scanf("%d", &opUF);

        switch (opUF)
        {
        case 1:
            fabricante->estado = 'DF';
            break;

        case 2:
            fabricante->estado = 'SP';
            break;

        case 3:
            fabricante->estado = 'RJ';
            break;

        case 4:
            fabricante->estado = 'AM';
            break;

        case 5:
            fabricante->estado = 'PR';
            break;

        case 6:
            fabricante->estado = 'ES';
            break;

        case 7:
            fabricante->estado = 'GO';
            break;

        case 8:
            fabricante->estado = 'PI';
            break;

        case 9:
            fabricante->estado = 'AL';
            break;

        case 10:
            fabricante->estado = 'BA';
            break;

        case 11:
            fabricante->estado = 'CE';
            break;

        case 12:
            fabricante->estado = 'MA';
            break;

        case 13:
            fabricante->estado = 'MG';
            break;

        case 14:
            fabricante->estado = 'MS';
            break;

        case 15:
            fabricante->estado = 'MT';
            break;

        case 16:
            fabricante->estado = 'PA';
            break;

        case 17:
            fabricante->estado = 'PB';
            break;

        case 18:
            fabricante->estado = 'PE';
            break;

        case 19:
            fabricante->estado = 'RN';
            break;

        case 20:
            fabricante->estado = 'RO';
            break;

        case 21:
            fabricante->estado = 'RR';
            break;

        case 22:
            fabricante->estado = 'RS';
            break;

        case 23:
            fabricante->estado = 'SC';
            break;

        case 24:
            fabricante->estado = 'SE';
            break;

        case 25:
            fabricante->estado = 'TO';
            break;

        default:
            printf("opcao inválida. Digite novamente.\n");
            break;
        }
    } while (opUF < 1 || opUF > 25);
}

// Função para cadastrar os dados de um produto
void cadastrarProduto(Produto *produto, Fabricante fabricantes[], int numFabricantes)
{
    printf("Digite a descricao: \n");
    lerString(produto->descricao, 50);

    printf("Digite o peso: \n");
    produto->peso = lerDecimal(le_valida_peso(produto->peso));

    printf("Digite o valor de compra: \n");
    produto->valorCompra = lerDecimal(le_valida_valor_compra(produto->valorCompra));

    printf("Digite o valor de venda: \n");
    produto->valorVenda = lerDecimal(le_valida_valor_venda(produto->valorCompra));

    printf("Digite o fabricante:\n");
    for (int i = 0; i < numFabricantes; i++)
    {
        printf("%d - %s\n", i + 1, fabricantes[i].marca);
    }
    int opcao;
    do
    {
        printf("Escolha uma opcao: ");
        opcao = lerInteiro();
    } while (opcao < 1 || opcao > numFabricantes);
    produto->fabricante = fabricantes[opcao - 1];

    calcularLucro(produto);
}

// Função para exibir os dados de um fabricante
void exibirFabricante(Fabricante fabricante)
{
    printf("Marca: %s\n", fabricante.marca);
    printf("Site: %s\n", fabricante.site);
    printf("Telefone: %d\n", fabricante.telefone);
    printf("UF: %d\n", fabricante.estado);
}

// Função para exibir os dados de um produto
void exibirProduto(Produto produto)
{
    printf("Descricao: %s\n", produto.descricao);
    printf("Peso: %.2f\n", produto.peso);
    printf("Valor de compra: %.2f\n", produto.valorCompra);
    printf("Valor de venda: %.2f\n", produto.valorVenda);
    printf("Valor do lucro: %.2f\n", produto.valorLucro);
    printf("Percentual de lucro: %.2f%%\n", produto.percentualLucro);
    printf("-------Fabricante-------\n");
    exibirFabricante(produto.fabricante);
    printf("-----------------------------------------------------\n");
}

// Função para listar todas as marcas dos fabricantes
void listarMarcas(Fabricante fabricantes[], int numFabricantes)
{
    printf("\n\n------ Marcas ------\n\n");
    for (int i = 0; i < numFabricantes; i++)
    {
        printf("%d - %s\n", i + 1, fabricantes[i].marca);
    }
    printf("--------------------\n\n");
}

// Função para listar todos os produtos
void listarProdutos(Produto produtos[], int numProdutos)
{
    printf("\n------ Produtos ------\n");
    for (int i = 0; i < numProdutos; i++)
    {
        printf("Produto %d:\n", i + 1);
        exibirProduto(produtos[i]);
    }
    printf("-----------------------\n\n");
}
// ----------------------------------------------------------------------------------------corrigido
// Função para listar os produtos de um determinado estado (UF)
void listarProdutosPorEstado(Produto produtos[], int numProdutos, enum UF estado)
{
    char *estadoStr;
    switch (estado)
    {
    case DF:
        estadoStr = "DF";
        break;
    case SP:
        estadoStr = "SP";
        break;
    case RJ:
        estadoStr = "RJ";
        break;
    case AM:
        estadoStr = "AM";
        break;
    case PR:
        estadoStr = "PR";
        break;
    case ES:
        estadoStr = "ES";
        break;
    case GO:
        estadoStr = "GO";
        break;
    case PI:
        estadoStr = "PI";
        break;
    case AL:
        estadoStr = "AL";
        break;
    case BA:
        estadoStr = "BA";
        break;
    case CE:
        estadoStr = "CE";
        break;
    case MA:
        estadoStr = "MA";
        break;
    case MG:
        estadoStr = "MG";
        break;
    case MS:
        estadoStr = "MS";
        break;
    case MT:
        estadoStr = "MT";
        break;
    case PA:
        estadoStr = "PA";
        break;
    case PB:
        estadoStr = "PB";
        break;
    case PE:
        estadoStr = "PE";
        break;
    case RN:
        estadoStr = "RN";
        break;
    case RO:
        estadoStr = "RO";
        break;
    case RR:
        estadoStr = "RR";
        break;
    case RS:
        estadoStr = "RS";
        break;
    case SC:
        estadoStr = "SC";
        break;
    case SE:
        estadoStr = "SE";
        break;
    case TO:
        estadoStr = "TO";
        break;
    default:
        estadoStr = "";
        break;
    }

    printf("\n\n------ Produtos do estado %s ------\n\n", estadoStr);
    int encontrou = 0;
    for (int i = 0; i < numProdutos; i++)
    {
        if (produtos[i].fabricante.estado == estado)
        {
            printf("Produto %d:\n", i + 1);
            exibirProduto(produtos[i]);
            encontrou = 1;
        }
    }
    if (!encontrou)
    {
        printf("Nenhum produto encontrado para o estado %s.\n", estadoStr);
    }
    printf("-------------------------------------\n");
}
// ----------------------------------------------------------------------------------------corrigido

// ----------------------------------------------------------------------------------------corrigido
// Função para listar os produtos de uma determinada marca
void listarProdutosPorMarca(Produto produtos[], int numProdutos, char marca[])
{
    printf("\n\n------ Produtos da marca %s ------\n\n", marca);
    int encontrou = 0;
    for (int i = 0; i < numProdutos; i++)
    {
        if (strcmp(produtos[i].fabricante.marca, marca) == 0)
        {
            printf("Produto %d:\n", i + 1);
            exibirProduto(produtos[i]);
            encontrou = 1;
        }
    }
    if (!encontrou)
    {
        printf("Nenhum produto encontrado para a marca %s.\n", marca);
    }
    printf("-----------------------------------\n");
}
// ----------------------------------------------------------------------------------------corrigido

// Função para encontrar o(s) estado(s) onde está registrado o produto mais caro
void encontrarEstadosProdutoMaisCaro(Produto produtos[], int numProdutos, Fabricante fabricantes[], int numFabricantes)
{
    float valorMaximo = produtos[0].valorVenda;
    for (int i = 1; i < numProdutos; i++)
    {
        if (produtos[i].valorVenda > valorMaximo)
        {
            valorMaximo = produtos[i].valorVenda;
        }
    }

    printf("\n\n------ Estado(s) com o produto mais caro ------\n");
    for (int i = 0; i < numProdutos; i++)
    {
        if (produtos[i].valorVenda == valorMaximo)
        {
            printf("Produto %d:\n", i + 1);
            exibirProduto(produtos[i]);
            printf("Estado:\n");
            exibirFabricante(produtos[i].fabricante);
        }
    }
    printf("----------------------------------------------\n");
}

// Função para encontrar o(s) fabricante(s) onde está registrado o produto mais barato
void encontrarFabricantesProdutoMaisBarato(Produto produtos[], int numProdutos, Fabricante fabricantes[], int numFabricantes)
{
    float valorMinimo = produtos[0].valorVenda;
    for (int i = 1; i < numProdutos; i++)
    {
        if (produtos[i].valorVenda < valorMinimo)
        {
            valorMinimo = produtos[i].valorVenda;
        }
    }

    printf("\n\n------ Fabricante(s) com o produto mais barato ------\n");
    for (int i = 0; i < numProdutos; i++)
    {
        if (produtos[i].valorVenda == valorMinimo)
        {
            printf("Produto %d:\n", i + 1);
            exibirProduto(produtos[i]);
            printf("Fabricante:\n");
            exibirFabricante(produtos[i].fabricante);
        }
    }
    printf("--------------------------------------------------\n");
}

// Função para comparar dois produtos pelo valor de venda
int compararProdutosPorValor(const void *p1, const void *p2)
{
    Produto *produto1 = (Produto *)p1;
    Produto *produto2 = (Produto *)p2;
    if (produto1->valorVenda < produto2->valorVenda)
    {
        return -1;
    }
    else if (produto1->valorVenda > produto2->valorVenda)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Função para comparar dois produtos pelo valor de lucro
int compararProdutosPorLucro(const void *p1, const void *p2)
{
    Produto *produto1 = (Produto *)p1;
    Produto *produto2 = (Produto *)p2;
    if (produto1->valorLucro < produto2->valorLucro)
    {
        return -1;
    }
    else if (produto1->valorLucro > produto2->valorLucro)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Função para comparar dois produtos pelo percentual de lucro
int compararProdutosPorPercentualLucro(const void *p1, const void *p2)
{
    Produto *produto1 = (Produto *)p1;
    Produto *produto2 = (Produto *)p2;
    if (produto1->percentualLucro < produto2->percentualLucro)
    {
        return -1;
    }
    else if (produto1->percentualLucro > produto2->percentualLucro)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    Fabricante *fabricantes = (Fabricante *)malloc(MAX_FAB * sizeof(Fabricante));
    Produto *produtos = (Produto *)malloc(MAX_PROD * sizeof(Produto));

    int numFabricantes = 0;
    int numProdutos = 0;
    int menu1;

    do
    {
        printf("Escolha uma opcao:\n");
        printf("---------------------------------\n");
        printf("1. CADASTRO DE FABRICANTES\n");
        printf("2. CADASTRO DE PRODUTOS\n");
        printf("opcao: ");
        scanf("%d", &menu1);

        switch (menu1)
        {
        case 1:
            printf("\n\n=====================================");
            printf("CADASTRO DE FABRICANTES\n");
            do
            {
                printf("Fabricante %d\n", numFabricantes + 1);
                cadastrarFabricante(&fabricantes[numFabricantes]);
                numFabricantes++;

                if (numFabricantes < MAX_FAB)
                {
                    printf("Deseja cadastrar outro fabricante? (1 - Sim, 0 - Não): ");
                    int opcao = lerInteiro();
                    if (opcao == 0)
                    {
                        break;
                    }
                }
                else
                {
                    printf("Limite máximo de fabricantes atingido.\n");
                    break;
                }
            } while (1);
            break;

        case 2:
            printf("\n\n=====================================");
            printf("\nCADASTRO DE PRODUTOS\n");
            do
            {
                printf("Produto %d\n", numProdutos + 1);
                cadastrarProduto(&produtos[numProdutos], fabricantes, numFabricantes);
                numProdutos++;

                if (numProdutos < MAX_PROD)
                {
                    printf("Deseja cadastrar outro produto? (1 - Sim, 0 - Não): ");
                    int opcao = lerInteiro();
                    if (opcao == 0)
                    {
                        break;
                    }
                }
                else
                {
                    printf("Limite máximo de produtos atingido.\n");
                    break;
                }
            } while (1);
            break;

        default:
            printf("Opcao invalida.\n");
            break;
        }
    } while (numFabricantes < 2 || numProdutos < 5);

    char opcao[5];
    int opt;
    do
    {
        printf("\nMENU\n");
        printf("1 - Listar todas as marcas\n");
        printf("2 - Listar todos os produtos\n");
        printf("3 - Listar os produtos de um determinado estado\n");
        printf("4 - Listar os produtos de uma determinada marca\n");
        printf("5 - Apresentar o(s) estado(s) onde está registrado o produto mais caro\n");
        printf("6 - Apresentar o(s) fabricante(s) onde está registrado o produto mais barato\n");
        printf("7 - Listar todos os produtos em ordem crescente de valor\n");
        printf("8 - Listar todos os produtos em ordem crescente de maior valor de lucro\n");
        printf("9 - Listar todos os produtos em ordem crescente de maior percentual de lucro\n");
        printf("A - Listar todos os produtos em ordem alfabética crescente A-Z\n");
        printf("Z - Listar todas as marcas em ordem alfabética decrescente Z-A\n");
        printf("0 - Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%s", opcao);
        toupper(opcao);
        opt = opcao[0];
        switch (opt)
        {
        case '1':
            listarMarcas(fabricantes, numFabricantes);
            break;
        case '2':
            listarProdutos(produtos, numProdutos);
            break;
        case '3':
        {
            int estado;
            printf(
                "(1)-DF\n"
                "(2)-SP\n"
                "(3)-RJ\n"
                "(4)-AM\n"
                "(5)-PR\n"
                "(6)-ES\n"
                "(7)-GO\n"
                "(8)-PI\n"
                "(9)-AL\n"
                "(10)-BA\n"
                "(11)-CE\n"
                "(12)-MA\n"
                "(13)-MG\n"
                "(14)-MS\n"
                "(15)-MT\n"
                "(16)-PA\n"
                "(17)-PB\n"
                "(18)-PE\n"
                "(19)-RN\n"
                "(20)-RO\n"
                "(21)-RR\n"
                "(22)-RS\n"
                "(23)-SC\n"
                "(24)-SE\n"
                "(25)-TO\n\n");
            printf("Digite o estado (UF): ");
            scanf("%d", &estado);
            listarProdutosPorEstado(produtos, numProdutos, estado);
            break;
        }
        case '4':
        {
            printf("Digite a marca: \n");
            for (int i = 0; i < numFabricantes; i++)
            {
                printf("%d - %s\n", i + 1, fabricantes[i].marca);
            }
            int marca;
            lerInteiro(marca);
            listarProdutosPorMarca(produtos, numProdutos, marca);
            break;
        }
        case '5':
            encontrarEstadosProdutoMaisCaro(produtos, numProdutos, fabricantes, numFabricantes);
            break;
        case '6':
            encontrarFabricantesProdutoMaisBarato(produtos, numProdutos, fabricantes, numFabricantes);
            break;
        case '7':
            qsort(produtos, numProdutos, sizeof(Produto), compararProdutosPorValor);
            listarProdutos(produtos, numProdutos);
            break;
        case '8':
            qsort(produtos, numProdutos, sizeof(Produto), compararProdutosPorLucro);
            listarProdutos(produtos, numProdutos);
            break;
        case '9':
            qsort(produtos, numProdutos, sizeof(Produto), compararProdutosPorPercentualLucro);
            listarProdutos(produtos, numProdutos);
            break;
        case 'A':
            listarProdutosAlf(produtos, numProdutos);
            break;
        case 'Z':
            listarMarcasAlf(fabricantes, numFabricantes);
            break;
        case '0':
            printf("Programa encerrado.\n");
            break;
        default:
            printf("Opcao inválida. Tente novamente.\n");
            break;
        }
    } while (opt != '0');

    free(fabricantes);
    free(produtos);

    return 0;
}
