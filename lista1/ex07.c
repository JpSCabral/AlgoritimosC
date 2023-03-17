#include <stdio.h>
int main(void)
{
    float custoFabrica, custoDist, custoImposto ,valorFinal;

    printf("Digite o valor de fabrica do veiculo");
        scanf("%f", &custoFabrica);

    custoDist = custoFabrica + (28 / 100);
    custoImposto = custoFabrica + (45 / 100);
    valorFinal = custoDist + custoFabrica;
        
    printf("Valor Final do veiculo : %f", valorFinal);
    return 0;
}
