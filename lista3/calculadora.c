#include <stdio.h>
// https://pastebin.com/542vMrYW
int main(){
 char operador;
 float oper, a, b;

    printf("digite a");
        scanf("%d", &a);
    printf("Digite b");
        scanf("%d", &b);
    printf("operador");
        scanf(" %c", &operador);
// espaçoe entre o percente e as aspas no caso do char
    switch (operador)
    {
    case '+':
        oper = a + b;
        printf("A soma: %d"), oper;
    break;

    case '-':
         oper = a - b;
         printf("A sub: %d"), oper;
    break;

    case '/':
        if (b==0)
        {
            printf("numero nao divisivel");
        }else{
           oper = a / b;
        }  printf("A divi: %d"), oper;
    break;

    case '*':
       oper = a * b;
       printf("A mult: %d"), oper;
    break;

    default:
        break;
    }
}