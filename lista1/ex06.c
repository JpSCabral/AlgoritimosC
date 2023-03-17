#include <stdio.h>
int main(void)
{
    float salarioAtual, salarioReajuste, reajuste, salarioNovo;

    printf("Digite o salario atual");
        scanf("%f", &salarioAtual);
    printf("Digite o percentual de reajuste");
        scanf("%f", &reajuste);

        salarioReajuste = salarioAtual * (reajuste / 100);
        salarioNovo = salarioAtual + salarioReajuste;

    printf("Seu novo salario e = %f", salarioNovo);
    return 0;
}
