#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <locale.h>;

#define MAX_FABRICANTES 5
#define MAX_PRODUTOS 50
#define UF_SIZE 3

typedef struct {
    char marca[50];
    char site[50];
    char telefone[15];
    char UF[UF_SIZE];
} Fabricante;

typedef struct {
    char descricao[50];
    float peso;
    float valorCompra;
    float valorVenda;
    float valorLucro;
    float percentualLucro;
    Fabricante fabricante;
} Produto;

// Função para ler uma string do usuário com verificação de tamanho
void lerString(char *str, int tamanho) {
    fgets(str, tamanho, stdin);
    // Remove o caractere de nova linha '\n' do final da string
    str[strcspn(str, "\n")] = '\0';
}

// Função para ler um número inteiro do usuário
int lerInteiro() {
    int numero;
    scanf("%d", &numero);
    getchar(); // Limpar o caractere de nova linha do buffer
    return numero;
}

// Função para ler um número decimal (float) do usuário
float lerDecimal() {
    float numero;
    scanf("%f", &numero);
    getchar(); // Limpar o caractere de nova linha do buffer
    return numero;
}

// Função para calcular o valor do lucro e o percentual de lucro de um produto
void calcularLucro(Produto *produto) {
    produto->valorLucro = produto->valorVenda - produto->valorCompra;
    produto->percentualLucro = (produto->valorLucro / produto->valorCompra) * 100.0;
}

// Função para cadastrar os dados de um fabricante
void cadastrarFabricante(Fabricante *fabricante) {
    printf("Digite a marca: ");
    lerString(fabricante->marca, 50);

    printf("Digite o site: ");
    lerString(fabricante->site, 50);

    printf("Digite o telefone: ");
    lerString(fabricante->telefone, 15);

    printf("Digite a UF (Unidade da Federacao): ");
    lerString(fabricante->UF, UF_SIZE);
}

// Função para cadastrar os dados de um produto
void cadastrarProduto(Produto *produto, Fabricante fabricantes[], int numFabricantes) {
    printf("Digite a descricao: ");
    lerString(produto->descricao, 50);

    printf("Digite o peso: ");
    produto->peso = lerDecimal();

    printf("Digite o valor de compra: ");
    produto->valorCompra = lerDecimal();

    printf("Digite o valor de venda: ");
    produto->valorVenda = lerDecimal();

    printf("Digite o fabricante:\n");
    for (int i = 0; i < numFabricantes; i++) {
        printf("%d - %s\n", i + 1, fabricantes[i].marca);
    }
    int opcao;
    do {
        printf("Escolha uma opcao: ");
        opcao = lerInteiro();
    } while (opcao < 1 || opcao > numFabricantes);
    produto->fabricante = fabricantes[opcao - 1];

    calcularLucro(produto);
}

// Função para exibir os dados de um fabricante
void exibirFabricante(Fabricante fabricante) {
    printf("Marca: %s\n", fabricante.marca);
    printf("Site: %s\n", fabricante.site);
    printf("Telefone: %s\n", fabricante.telefone);
    printf("UF: %s\n", fabricante.UF);
}

// Função para exibir os dados de um produto
void exibirProduto(Produto produto) {
    printf("Descricao: %s\n", produto.descricao);
    printf("Peso: %.2f\n", produto.peso);
    printf("Valor de compra: %.2f\n", produto.valorCompra);
    printf("Valor de venda: %.2f\n", produto.valorVenda);
    printf("Valor do lucro: %.2f\n", produto.valorLucro);
    printf("Percentual de lucro: %.2f%%\n", produto.percentualLucro);
    printf("Fabricante:\n");
    exibirFabricante(produto.fabricante);
    printf("-----------------------------------------------------\n");
}

// Função para listar todas as marcas dos fabricantes
void listarMarcas(Fabricante fabricantes[], int numFabricantes) {
    printf("------ Marcas ------\n");
    for (int i = 0; i < numFabricantes; i++) {
        printf("%d - %s\n", i + 1, fabricantes[i].marca);
    }
    printf("--------------------\n");
}

// Função para listar todos os produtos
void listarProdutos(Produto produtos[], int numProdutos) {
    printf("------ Produtos ------\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("Produto %d:\n", i + 1);
        exibirProduto(produtos[i]);
    }
    printf("-----------------------\n");
}

// Função para listar os produtos de um determinado estado (UF)
void listarProdutosPorEstado(Produto produtos[], int numProdutos, char estado[]) {
    printf("------ Produtos do estado %s ------\n", estado);
    int encontrou = 0;
    for (int i = 0; i < numProdutos; i++) {
        if (strcmp(produtos[i].fabricante.UF, estado) == 0) {
            printf("Produto %d:\n", i + 1);
            exibirProduto(produtos[i]);
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("Nenhum produto encontrado para o estado %s.\n", estado);
    }
    printf("-------------------------------------\n");
}

// Função para listar os produtos de uma determinada marca
void listarProdutosPorMarca(Produto produtos[], int numProdutos, char marca[]) {
    printf("------ Produtos da marca %s ------\n", marca);
    int encontrou = 0;
    for (int i = 0; i < numProdutos; i++) {
        if (strcmp(produtos[i].fabricante.marca, marca) == 0) {
            printf("Produto %d:\n", i + 1);
            exibirProduto(produtos[i]);
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("Nenhum produto encontrado para a marca %s.\n", marca);
    }
    printf("-----------------------------------\n");
}

// Função para encontrar o(s) estado(s) onde está registrado o produto mais caro
void encontrarEstadosProdutoMaisCaro(Produto produtos[], int numProdutos, Fabricante fabricantes[], int numFabricantes) {
    float valorMaximo = produtos[0].valorVenda;
    for (int i = 1; i < numProdutos; i++) {
        if (produtos[i].valorVenda > valorMaximo) {
            valorMaximo = produtos[i].valorVenda;
        }
    }

    printf("------ Estado(s) com o produto mais caro ------\n");
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].valorVenda == valorMaximo) {
            printf("Produto %d:\n", i + 1);
            exibirProduto(produtos[i]);
            printf("Estado:\n");
            exibirFabricante(produtos[i].fabricante);
        }
    }
    printf("----------------------------------------------\n");
}

// Função para encontrar o(s) fabricante(s) onde está registrado o produto mais barato
void encontrarFabricantesProdutoMaisBarato(Produto produtos[], int numProdutos, Fabricante fabricantes[], int numFabricantes) {
    float valorMinimo = produtos[0].valorVenda;
    for (int i = 1; i < numProdutos; i++) {
        if (produtos[i].valorVenda < valorMinimo) {
            valorMinimo = produtos[i].valorVenda;
        }
    }

    printf("------ Fabricante(s) com o produto mais barato ------\n");
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].valorVenda == valorMinimo) {
            printf("Produto %d:\n", i + 1);
            exibirProduto(produtos[i]);
            printf("Fabricante:\n");
            exibirFabricante(produtos[i].fabricante);
        }
    }
    printf("--------------------------------------------------\n");
}

// Função para comparar dois produtos pelo valor de venda
int compararProdutosPorValor(const void *p1, const void *p2) {
    Produto *produto1 = (Produto *)p1;
    Produto *produto2 = (Produto *)p2;
    if (produto1->valorVenda < produto2->valorVenda) {
        return -1;
    } else if (produto1->valorVenda > produto2->valorVenda) {
        return 1;
    } else {
        return 0;
    }
}

// Função para comparar dois produtos pelo valor de lucro
int compararProdutosPorLucro(const void *p1, const void *p2) {
    Produto *produto1 = (Produto *)p1;
    Produto *produto2 = (Produto *)p2;
    if (produto1->valorLucro < produto2->valorLucro) {
        return -1;
    } else if (produto1->valorLucro > produto2->valorLucro) {
        return 1;
    } else {
        return 0;
    }
}

// Função para comparar dois produtos pelo percentual de lucro
int compararProdutosPorPercentualLucro(const void *p1, const void *p2) {
    Produto *produto1 = (Produto *)p1;
    Produto *produto2 = (Produto *)p2;
    if (produto1->percentualLucro < produto2->percentualLucro) {
        return -1;
    } else if (produto1->percentualLucro > produto2->percentualLucro) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    // setlocale(LC_ALL, "pt_BR.UTF-8");
    Fabricante fabricantes[MAX_FABRICANTES];
    Produto produtos[MAX_PRODUTOS];
    int numFabricantes = 0;
    int numProdutos = 0;

    printf("CADASTRO DE FABRICANTES\n");
    do {
        printf("Fabricante %d\n", numFabricantes + 1);
        cadastrarFabricante(&fabricantes[numFabricantes]);
        numFabricantes++;

        if (numFabricantes < MAX_FABRICANTES) {
            printf("Deseja cadastrar outro fabricante? (1 - Sim, 0 - Não): ");
            int opcao = lerInteiro();
            if (opcao == 0) {
                break;
            }
        } else {
            printf("Limite máximo de fabricantes atingido.\n");
            break;
        }
    } while (1);

    printf("\nCADASTRO DE PRODUTOS\n");
    do {
        printf("Produto %d\n", numProdutos + 1);
        cadastrarProduto(&produtos[numProdutos], fabricantes, numFabricantes);
        numProdutos++;

        if (numProdutos < MAX_PRODUTOS) {
            printf("Deseja cadastrar outro produto? (1 - Sim, 0 - Nao): ");
            int opcao = lerInteiro();
            if (opcao == 0) {
                break;
            }
        } else {
            printf("Limite máximo de produtos atingido.\n");
            break;
        }
    } while (1);

    int opcao;
    do {
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
        printf("0 - Sair do programa\n");
        printf("Escolha uma opcao: ");
        opcao = lerInteiro();

        switch (opcao) {
            case 1:
                listarMarcas(fabricantes, numFabricantes);
                break;
            case 2:
                listarProdutos(produtos, numProdutos);
                break;
            case 3: {
                printf("Digite o estado (UF): ");
                char estado[UF_SIZE];
                lerString(estado, UF_SIZE);
                listarProdutosPorEstado(produtos, numProdutos, estado);
                break;
            }
            case 4: {
                printf("Digite a marca: ");
                char marca[50];
                lerString(marca, 50);
                listarProdutosPorMarca(produtos, numProdutos, marca);
                break;
            }
            case 5:
                encontrarEstadosProdutoMaisCaro(produtos, numProdutos, fabricantes, numFabricantes);
                break;
            case 6:
                encontrarFabricantesProdutoMaisBarato(produtos, numProdutos, fabricantes, numFabricantes);
                break;
            case 7:
                qsort(produtos, numProdutos, sizeof(Produto), compararProdutosPorValor);
                listarProdutos(produtos, numProdutos);
                break;
            case 8:
                qsort(produtos, numProdutos, sizeof(Produto), compararProdutosPorLucro);
                listarProdutos(produtos, numProdutos);
                break;
            case 9:
                qsort(produtos, numProdutos, sizeof(Produto), compararProdutosPorPercentualLucro);
                listarProdutos(produtos, numProdutos);
                break;
            case 0:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
