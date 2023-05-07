#include <stdio.h>

// Leia quatro valores inteiros A, B, C e D. 
// A seguir, calcule e mostre a diferença do produto de (A e B) pelo produto de (C e D) segundo a fórmula: DIFERENCA = (A * B - C * D).
// Apresente o resultado da seguinte forma:
// DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
// DIFERENCA = (“valor de DIFERENCA”)

int main()

{
    int numeros[4], df = 0, i=0;
    
    for (i=0; i<=3; i++)
    {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numeros[i]); 
        
    }

    df = (numeros[0] * numeros[1]) - (numeros[3] * numeros[4]);

        printf("\n----------------------------------\n");
        printf("Diferenca = '%d' * '%d' - '%d' * '%d'\n", numeros[0],numeros[1],numeros[2],numeros[3]);
        printf("\n----------------------------------\n");
        printf("O valor da diferenca: %d", df);
        printf("\n----------------------------------\n");
    return 0;
}
