#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("Digite o primeiro numero");
        scanf("%d", &n1);
    printf("Digite o segundo numero");
        scanf("%d", &n2);

    if (n1 < n2){
        printf("O numero %d e maior que o %d", n2, n1);
    }if (n1 > n2){
        printf("O numero %d e maior que o %d", n1, n2);
    }if (n1 == n2){
        printf("Numeros iguais");
    }else{
        printf("nenhum numero digitado");
    }
    return 0;
}
