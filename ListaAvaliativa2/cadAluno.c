#include <stdio.h>
#include <string.h>

#define MAX_ALU 15

struct Aluno
{
    char nome_aluno[50];
    int matricula;
    int idade;
};

void leValidaIdade(int *idade)
{
    do
    {
        printf("Idade (entre 16 e 26): ");
        scanf("%d", idade);
    } while (*idade < 16 || *idade > 26);
}

void cadAlu(struct Aluno *alunos)
{
    printf("-------------Cadastro de Aluno--------------\n\n");
    int totalAlunos = 0;
    for (int i = 0; i < MAX_DSP; i++)
    {
        printf("Cadastro de Estudantes na Disciplina %d\n", i + 1);

        while (totalAlunos < MAX_ESTUDANTES)
        {
            printf("Estudante %d\n", totalAlunos + 1);
            printf("Nome: ");
            scanf("%s", alunos[totalAlunos].nome_aluno);

            printf("Matricula: ");
            scanf("%d", &alunos[totalAlunos].matricula);

            leValidaIdade(&estudantes[totalEstudantes].idade);

            totalEstudantes++;

            char continuar[3];
            printf("Deseja cadastrar mais estudantes? (s/n): ");
            scanf("%s", continuar);

            if (strcmp(continuar, "n") == 0)
            {
                break;
            }
        }

        printf("\n");
    }
}
int main()

{
    
    return 0;
}