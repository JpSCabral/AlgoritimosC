#include <stdio.h>
int main(void)
{
    int anos, mes, dias, idadeTotal, anoDia, mesDia;

    printf("Digite sua idade em anos");
        scanf("%d", &anos);
        printf("Digite sua idade em meses");
            scanf("%d", &anos);
                printf("Digite sua idade em dias");
                    scanf("%d", &dias);
                anoDia = anos * 365;
                mesDia = mes * 30;
                idadeTotal = mesDia + anoDia + dias;
            printf("sua idade em dias\n anos = %d\n meses = %d\n dias = %d\n Total de Dias = %d", anoDia, mesDia, dias, idadeTotal);
    return 0;
}
