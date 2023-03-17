#include <stdio.h>
int main(int argc, char const *argv[])
{
    float nota1, nota2, nota3, mediaFinal;

    printf("Digite sua primeira nota");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota");
    scanf("%f", &nota3);

        mediaFinal = (nota1*2) + (nota2*3) + (nota3*5) / 2+3+5;
    
    printf("a media final é %2.f", mediaFinal);
    return 0;
}
