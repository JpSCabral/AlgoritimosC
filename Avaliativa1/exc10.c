#include <stdio.h>

int main() {
    int num, soma = 0;
    float media;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &num);
        soma += num;
    }

    media = (float) soma / 10.0;

    printf("\nA média dos números é %.2f\n", media);

    return 0;
}
