// #include <stdio.h>
// #include <string.h>

// #define MAX_ALU 15
// #define MAX_DSP 2
// #define MAX_PFS 3

// struct Professor
// {
//     char nome_prof[50];
//     int funcional;
//     char titulo[50];
// };
// struct Aluno
// {
//     char nome_aluno[50];
//     int matricula;
//     int idade;
// };
// struct Disciplina
// {
//     char nome_disciplina[50];
//     int codigo;
//     int carga_horaria;
//     struct Professor professor_responsavel;
// };
// // -----------------------------------------------------------------------------------------------
// void leValidaIdade(int *idade)
// {
//     do
//     {
//         printf("Idade (entre 16 e 26): ");
//         scanf("%d", idade);
//     } while (*idade < 16 || *idade > 26);
// }
// // -----------------------------------------------------------------------------------------------
// void cadProf(struct Professor *professores)
// {
//     printf("-------------Cadastro de professor--------------\n\n");
//     for (int i = 0; i < MAX_PFS; i++)
//     {
//         printf("Cadastro do Professor %d\n", i + 1);
//     printf("Nome: ");
//     scanf("%s", professores[i].nome_prof);

//     printf("Funcional: ");
//     scanf("%d", &professores[i].funcional);

//         printf("Digite o titulo do professor (Especialista, Mestre, Doutor): ");
//     scanf("%s", &professores[i].titulo);

//     printf("------------------------------------------------\n\n");
//     }
// }
// // -----------------------------------------------------------------------------------------------

// void cadDscp(struct Disciplina *disciplinas)
// {
//     printf("-------------Cadastro de Disciplina--------------\n\n");
//     for (int i = 0; i < MAX_DSP; i++)
//     {
//         printf("Cadastro da Disciplina %d\n", i + 1);
//         printf("Nome: ");
//         scanf("%s", disciplinas[i].nome_disciplina);

//         printf("Codigo: ");
//         scanf("%d", &disciplinas[i].codigo);

//         printf("Carga Horaria: ");
//         scanf("%d", &disciplinas[i].carga_horaria);

//         printf("Professor Responsavel (0 a %d): ", MAX_PFS - 1);
//         int professor_responsavel;
//         scanf("%d", &professor_responsavel);
//         disciplinas[i].professor_responsavel = professor[professor_responsavel];

//         printf("\n");
//     }
// }
// // -----------------------------------------------------------------------------------------------

// void cadAlu(struct Aluno *alunos)
// {
//     printf("-------------Cadastro de Aluno--------------\n\n");
//     int totalAlunos = 0;
//     for (int i = 0; i < MAX_DSP; i++)
//     {
//         printf("Cadastro de Estudantes na Disciplina %d\n", i + 1);

//         while (totalAlunos < MAX_ALU)
//         {
//             printf("Estudante %d\n", totalAlunos + 1);
//             printf("Nome: ");
//             scanf("%s", alunos[totalAlunos].nome_aluno);

//             printf("Matricula: ");
//             scanf("%d", &alunos[totalAlunos].matricula);

//             leValidaIdade(&alunos[totalAlunos].idade);

//             totalAlunos++;

//             char continuar[3];
//             printf("Deseja cadastrar mais estudantes? (s/n): ");
//             scanf("%s", continuar);

//             if (strcmp(continuar, "n") == 0)
//             {
//                 break;
//             }
//         }

//         printf("\n");
//     }
// }
// // -----------------------------------------------------------------------------------------------


// int main()

// {
//     struct Professor professores[MAX_PFS];
//     struct Aluno alunos[MAX_ALU];
//     struct Disciplina disciplinas[MAX_DSP];

//     cadProf(&professores);
//     cadAlu(&alunos);
//     return 0;
// }