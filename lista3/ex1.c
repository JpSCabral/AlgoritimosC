#include <stdio.h>

int main() {
   int i;
   float notas[5];
   float soma = 0;

   for (i = 0; i < 5; i++) {
      printf("Digite a nota %d: ", i + 1);
      scanf("%f", &notas[i]);
      soma += notas[i];
   }

   float media = soma / 5;
   printf("A media do aluno e: %.2f\n", media);

   return 0;
}
