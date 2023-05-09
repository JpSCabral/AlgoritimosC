#include <stdio.h>

int main() {
    int idade;
    printf("Digite a idade do eleitor: ");
    scanf("%d", &idade);
    printf("Situação eleitoral: ");
    if (idade < 0) {
        printf("Não nasceu\n");
    }
    else {
        if (idade >= 0 && idade <= 15) {
            printf("Não vota\n");
        }
        else if (idade >= 16 && idade <= 17) {
            printf("Voto opcional\n");
        }
        else if (idade >= 18 && idade <= 65) {
            if (idade == 41 || idade == 88) {
                printf("Ganha prêmio e não vota\n");
            }
            else {
                printf("Voto obrigatório\n");
            }
        }
        else {
            printf("Voto opcional\n");
        }
    }
    return 0;
}
