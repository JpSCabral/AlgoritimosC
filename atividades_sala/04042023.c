#include <stdio.h>
int main(void)
{
    int i = 0, valor = 0, j = 0;

    do{
        printf("Digite um valor\n");
        scanf("%d", &valor);
    } while (valor < 1 || valor > 100);

    for (i = 1; i <= valor; i++, j--)
    {
        printf("%d\t%d\n", i, j);
    }

    return 0;
}
