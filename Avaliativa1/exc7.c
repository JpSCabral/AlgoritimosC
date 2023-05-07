// Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
// Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
// ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
// anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

#include <stdio.h>

int main() {
   int n, i, t1 = 0, t2 = 1, prox_termo;

   printf("Digite um número inteiro maior ou igual a zero: ");
   scanf("%d", &n);

   // caso o usuário digite zero, o primeiro termo da sequência é zero
   if(n == 0) {
       printf("O termo %d da sequência de Fibonacci é: %d\n", n, t1);
   } else if(n == 1) {
       // caso o usuário digite um, o segundo termo da sequência é um
       printf("O termo %d da sequência de Fibonacci é: %d\n", n, t2);
   } else {
       for(i = 2; i <= n; i++) {
           prox_termo = t1 + t2;
           t1 = t2;
           t2 = prox_termo;
       }
       printf("O termo %d da sequência de Fibonacci é: %d\n", n, prox_termo);
   }
   
   return 0;
}




