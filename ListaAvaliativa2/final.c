#include <stdio.h>
#include <string.h>

#define MAX_A 15
#define MAX_P 3
#define MAX_D 2
// Structs-------------------------------------------------
struct Professor
{
    char nome_prof[50];
    int funcional;
    char titulo[50];
};
struct Aluno
{
    char nome_aluno[50];
    int matricula;
    int idade;
};
struct Disciplina
{
    char nome_disciplina[50];
    int codigo;
    int carga_horaria;
    struct Professor professor_responsavel;
};
// Structs-------------------------------------------------
// Funçoes-------------------------------------------------
void leValidaIdade(int *idade)
{
    do
    {
        printf("Idade (entre 16 e 26): ");
        scanf("%d", idade);
    } while (*idade < 16 || *idade > 26);
}

void bubbleSort(struct Aluno *alunos, int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = 0; j < tamanho - i - 1; j++)
        {
            if (alunos[j].idade > alunos[j + 1].idade)
            {
                struct Aluno temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}
// Funçoes-------------------------------------------------
// Main------------------------------------------------------
int main()
{
    struct Professor professores[MAX_P];
    struct Aluno alunos[MAX_A];
    struct Disciplina disciplinas[MAX_D];
    int i, professor_responsavel, totalAlunos = 0;

    // cadastro professsor----------------------------------------------------
    printf("------------Cadastro Professores------------\n\n");
    for (int i = 0; i < MAX_P; i++)
    {
        printf("Digite o nome do professor %d: ", i + 1);
        scanf("%s", &professores[i].nome_prof);
        printf("Digite o funcional do professor %d: ", i + 1);
        scanf("%d", &professores[i].funcional);
        printf("Digite o titulo do professor %d: ", i + 1);
        scanf("%s", &professores[i].titulo);
        printf("----------------------------------------\n\n");
    }

    // cadastro disciplina----------------------------------------------------
    printf("------------Cadastro Disciplina------------\n\n");
    for (int i = 0; i < MAX_D; i++)
    {
        printf("Digite o nome da disciplina %d: ", i + 1);
        scanf("%s", &disciplinas[i].nome_disciplina);
        printf("Digite o codigo da disciplina %d: ", i + 1);
        scanf("%d", &disciplinas[i].codigo);
        printf("Digite a carga horaria da disciplina %d: ", i + 1);
        scanf("%d", &disciplinas[i].carga_horaria);
        printf("Professor responsavel da disciplina %d (0 a %d): ", i + 1, MAX_P - 1);
        scanf("%d", &professor_responsavel);
        disciplinas[i].professor_responsavel = professores[professor_responsavel];
        printf("----------------------------------------\n\n");
    }

    // cadastro alunos----------------------------------------------------
    printf("------------Cadastro de estudantes-----------\n\n");

    for (int i = 0; i < MAX_D; i++)
    {
        printf("Cadastro de Estudantes na Disciplina %d\n", i + 1);

        while (totalAlunos < MAX_A)
        {
            printf("Estudante %d\n", totalAlunos + 1);
            printf("Nome: ");
            scanf("%s", alunos[totalAlunos].nome_aluno);

            printf("Matricula: ");
            scanf("%d", &alunos[totalAlunos].matricula);

            leValidaIdade(&alunos[totalAlunos].idade);

            totalAlunos++;

            char continuar[3];
            printf("Deseja cadastrar mais estudantes? (s/n): ");
            scanf("%s", continuar);

            if (strcmp(continuar, "n") == 0)
            {
                break;
            }
        }
    }

    bubbleSort(alunos, totalAlunos);

    printf("Relatorio disciplina 1\n\n");
    printf("codigo_disciplina  nome_professor nome_estudante idade_estudante\n");
    for (int i = 0; i < totalAlunos; i++)
    {
        printf("%-17d %-14s %-13s %-15d\n", disciplinas[0].codigo,
               disciplinas[0].professor_responsavel.nome_prof, alunos[i].nome_aluno, alunos[i].idade);
    }

    bubbleSort(alunos, totalAlunos);

    printf("Relatorio disciplina 2");
    printf("codigo_disciplina  nome_professor nome_estudante idade_estudante\n");
    for (int i = totalAlunos - 1; i >= 0; i--)
    {
        printf("%-17d %-14s %-13s %-15d\n", disciplinas[1].codigo,
               disciplinas[1].professor_responsavel.nome_prof, alunos[i].nome_aluno, alunos[i].idade);
    }
    return 0;
}


// for (int i = 0; i < MAX_P; i++)
// {
//     printf("nome do professor %d: %s \n ", i + 1, professores[i].nome_prof);
//     printf("funcional do professor %d: %d\n", i + 1, professores[i].funcional);
//     printf("titulo do professor %d: %s\n\n", i + 1, professores[i].titulo);
//     printf("----------------------------------------\n\n");
// }
// for (int i = 0; i < MAX_D; i++)
// {
//     printf("Disciplina %d: %s \n ", i + 1, disciplinas[i].nome_disciplina);
//     printf("Codigo %d: %d\n", i + 1, disciplinas[i].codigo);
//     printf("Carga horaria: %d\n\n", i + 1, disciplinas[i].carga_horaria);
//     printf("Professor responsavel: %d\n\n", i + 1, disciplinas[i].professor_responsavel);
//     printf("----------------------------------------\n\n");
// }