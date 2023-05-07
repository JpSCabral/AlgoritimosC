// Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no  plano, p1(x1, y1) e p2(x2, y2);
// e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula;
// √(x2 - x1)² + (y2 - y1)²

#include <stdio.h>
#include <math.h>

int main()
{
    float valx[2], valy[2], dist, p1, p2;

    printf("Digite o primeiro valor do eixo X: ");
    scanf("%f", &valx[0]);

    printf("Digite o segundo valor do eixo X: ");
    scanf("%f", &valx[1]);

    p1 = (valx[1] - valx[0]) * (valx[1] - valx[0]);

printf("\n-----------------------------------------------\n");
    
    printf("Digite o primeiro valor do eixo Y: ");
    scanf("%f", &valy[0]);

    printf("Digite o segundo valor do eixo Y: ");
    scanf("%f", &valy[1]);
    
    p2 = (valy[1] - valy[0]) * (valy[1] - valy[0]);

    dist = sqrt(p1 + p2);

printf("\n-----------------------------------------------\n");
    printf("A distancia : %.4f", dist);
    return 0;
}
