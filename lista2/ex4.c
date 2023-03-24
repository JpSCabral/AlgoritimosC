#include <stdio.h>

int main()
{
    
    float salario, emprestimo, i;

    printf("Digite seu salario");
    scanf("%f", &salario);

    printf("Agora digite o valor do emprestimo que deseja");
    scanf("%f", &emprestimo);

    i = salario / 0.2;

    if (i < emprestimo)
    {
        printf("Emprestimo condedido");
    }else{
        printf("Emprestimo nao concedido");
    }
    
    return 0;
}
