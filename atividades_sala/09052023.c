// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define max_alu[10]

// struct Alunos
//     {
//         int idade;
//         char nome[50];
//         int matricula;
//     }estudante;

// int main()
// {
//     Alunos estudante [max_alu];
//     int i, mnr, mir;

//     return 0;
// }






#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_alu 10

typedef struct {
    char nome[50];
    int matricula;
    int idade;
} Estudante;

int main() {
    Estudante estudantes[max_alu];
    int i, menorIdade, maiorIdade;

    printf("Digite o nome, matricula e idade (separados por espaco) de %d estudantes:\n", max_alu);

    // leitura dos dados dos estudantes
    for (i = 0; i < max_alu; i++) {
        printf("Estudante %d: ", i+1);
        scanf("%s %d %d", estudantes[i].nome, &estudantes[i].matricula, &estudantes[i].idade);

        // validação da idade
        while (estudantes[i].idade < 18 || estudantes[i].idade > 80) {
            printf("Idade inválida. Digite novamente a idade do estudante %d: ", i+1);
            scanf("%d", &estudantes[i].idade);
        }
    }

    // impressão dos estudantes
    printf("\nLista de Estudantes:\n");
    for (i = 0; i < max_alu; i++) {
        printf("Nome: %s | Matricula: %d | Idade: %d\n", estudantes[i].nome, estudantes[i].matricula, estudantes[i].idade);
    }

    // busca da menor e maior idade
    menorIdade = estudantes[0].idade;
    maiorIdade = estudantes[0].idade;
    for (i = 1; i < max_alu; i++) {
        if (estudantes[i].idade < menorIdade) {
            menorIdade = estudantes[i].idade;
        }
        if (estudantes[i].idade > maiorIdade) {
            maiorIdade = estudantes[i].idade;
        }
    }

    // impressão da menor e maior idade
    printf("\nMenor idade: %d\n", menorIdade);
    printf("Maior idade: %d\n", maiorIdade);

    return 0;
}
