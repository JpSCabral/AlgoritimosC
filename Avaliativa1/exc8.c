#include <stdio.h>

int main() {
   int numero, maior, menor;

   printf("Digite um número inteiro positivo: ");
   scanf("%d", &numero);
   
   // define o primeiro número digitado como o maior e o menor
   maior = numero;
   menor = numero;

   while(numero >= 0) {
       // lê o próximo número
       printf("Digite um número inteiro positivo: ");
       scanf("%d", &numero);

       // verifica se o número lido é maior ou menor que os números anteriores
       if(numero > maior && numero >= 0) {
           maior = numero;
       } else if(numero < menor && numero >= 0) {
           menor = numero;
       }
   }

   printf("O maior número lido foi: %d\n", maior);
   printf("O menor número lido foi: %d\n", menor);

   return 0;
}
