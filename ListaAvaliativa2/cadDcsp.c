#include <stdio.h>
#include <string.h>

#define MAX_ALU 15
#define MAX_DSP 2

struct Disciplina
{
    char nome_disciplina[50];
    int codigo;
    int carga_horaria;
    struct Professor professor_responsavel;
};

void cadDscp(struct Disciplina *disciplinas)
{
    printf("-------------Cadastro de Disciplina--------------\n\n");
    for (int i = 0; i < MAX_DSP; i++)
    {
        printf("Cadastro da Disciplina %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", disciplinas[i].nome);

        printf("Codigo: ");
        scanf("%d", &disciplinas[i].codigo);

        printf("Carga Horaria: ");
        scanf("%d", &disciplinas[i].carga_horaria);

        printf("Professor Responsavel (0 a %d): ", MAX_PFS - 1);
        int professor_responsavel;
        scanf("%d", &professor_responsavel);
        disciplinas[i].professor_responsavel = professores[professor_responsavel];

        printf("\n");
    }
}
int main()

{
    struct Disciplina disciplinas;
    cadDscp(&disciplinas);
    return 0;
}