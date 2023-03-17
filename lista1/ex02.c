#include <stdio.h>
#include <math.h>

int main(void)
{
    float raio, pi, area;
    
    pi = 3.14;
    printf("Digite o raio do circulo\n");
    scanf("%f", &raio);
    area = pi * (raio * raio);

    printf("%.2f", area);
    return 0;
}
