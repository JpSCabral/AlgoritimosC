#include <stdio.h>
#define MAX_PFS 3

struct Professor
{
    char nome_prof[50];
    int funcional;
    char titulo[50];
};

void cadProf(struct Professor *professores)
{
    printf("-------------Cadastro de professor--------------\n\n");
    for (int i = 0; i < MAX_PFS; i++)
    {
        printf("Cadastro do Professor %d\n", i + 1);
    printf("Nome: ");
    scanf("%s", professores[i].nome_prof);

    printf("Funcional: ");
    scanf("%d", &professores[i].funcional);

        printf("Digite o titulo do professor (Especialista, Mestre, Doutor): ");
    scanf("%s", &professores[i].titulo);

    printf("------------------------------------------------\n\n");
    }
}

int main()

{
    struct Professor professores;
    cadProf(&professores);
    return 0;
}