#include <stdio.h>

int main(void)
{
    int nm;

    printf("Digite um numero");
        scanf("%d", &nm);

        if (nm % 2 == 0)
        {
            printf("O numero %d e par", nm);
        }else{
            printf("O numero %d e impar", nm);
        }
        
    return 0;
}
