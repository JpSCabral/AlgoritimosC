// Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano.
// A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).
// Se o ponto estiver na origem, escreva a mensagem “Origem”.
// Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.

#include <stdio.h>

int main()
{
    float x, y;
    printf("digite o eixo X: \n");
    scanf("%f", &x);
    
    printf("digite o eixo Y: \n");
    scanf("%f", &y);

    // printf("%.1f, %.1f",x, y);

    if (x > 0 && y > 0) //positivo + positivo 
    {
        printf("O ponto esta no quadrante 1");
    }else if (x < 0 && y > 0){ //negativo + positivo
        printf("O ponto esta no quadrante 2");
    }else if (x < 0 && y < 0){ //negativo + negativo
        printf("O ponto esta no quadrante 3");
    }else if (x > 0 && y < 0){ //positivo + negativo
        printf("O ponto esta no quadrante 4");
    }else if (x = y = 0){
        printf("O ponto esta na origem");
    }
    
    return 0;
}
