#include <stdio.h>
#include <math.h>

int main(void)
{
    float base, altura, area;
    
    printf("Digite a base do triangulo\n");
        scanf("%f", &base);
    printf("Digite a altura do triangulo\n");
        scanf("%f", &altura);
    
    area = base * altura;

    printf("%.2f", area);
    return 0;
}