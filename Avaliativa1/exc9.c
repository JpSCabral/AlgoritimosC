#include <stdio.h>

int main() {
    int opcao = 0, quantidade = 0;
    float valor_total = 0.0;

    while(opcao != 4) {
        // apresenta o menu de frutas
        printf("\n===== MENU DE FRUTAS =====\n");
        printf("1 => ABACAXI - 5,00 a unidade\n");
        printf("2 => MAÇA - 1,00 a unidade\n");
        printf("3 => PERA - 4,00 a unidade\n");
        printf("4 => Finalizar compra\n");
        printf("===========================\n");
        printf("Digite uma opção: ");
        scanf("%d", &opcao);

        // verifica qual opção foi escolhida
        switch(opcao) {
            case 1:
                printf("Digite a quantidade de abacaxis que deseja comprar: ");
                scanf("%d", &quantidade);
                valor_total += 5.0 * quantidade;
                printf("Adicionado %d abacaxis no valor total de %.2f\n", quantidade, valor_total);
                break;
            case 2:
                printf("Digite a quantidade de maçãs que deseja comprar: ");
                scanf("%d", &quantidade);
                valor_total += 1.0 * quantidade;
                printf("Adicionado %d maçãs no valor total de %.2f\n", quantidade, valor_total);
                break;
            case 3:
                printf("Digite a quantidade de peras que deseja comprar: ");
                scanf("%d", &quantidade);
                valor_total += 4.0 * quantidade;
                printf("Adicionado %d peras no valor total de %.2f\n", quantidade, valor_total);
                break;
            case 4:
                printf("Compra finalizada. O valor total da compra é: %.2f\n", valor_total);
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}
