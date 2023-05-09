#include <stdio.h>

float le_valida_media();
float calcular_media(int quantidade, float soma);
void cabecalho();
void rodape(int aprovados, int reprovados, float maior, float menor);

int main() {
    float media, soma = 0, maior = 0, menor = 10;
    int aprovados = 0, reprovados = 0, quantidade = 0;

    cabecalho();

    do {
        media = le_valida_media();

        if (media < menor) {
            menor = media;
        }

        if (media > maior) {
            maior = media;
        }

        if (media >= 6.9) {
            aprovados++;
        } else {
            reprovados++;
        }

        soma += media;
        quantidade++;
    } while (quantidade < 25 && media >= 0);

    if (quantidade == 0) {
        printf("Nenhuma nota informada.\n");
        return 0;
    }

    float media_turma = calcular_media(quantidade, soma);

    rodape(aprovados, reprovados, maior, menor);

    printf("Media da turma: %.1f\n", media_turma);
    printf("Maior nota: %.1f\n", maior);
    printf("Menor nota: %.1f\n", menor);
    printf("Reprovados: %d\n", reprovados);
    printf("Aprovados: %d\n", aprovados);

    return 0;
}

float le_valida_media() {
    float media;
    do {
        printf("Informe uma media entre 0 e 10 (ou um valor negativo para encerrar): ");
        scanf("%f", &media);
    } while (media < 0 || media > 10);

    return media;
}

float calcular_media(int quantidade, float soma) {
    return soma / quantidade;
}

void cabecalho() {
    printf("------------------\n");
    printf("Relatorio da turma\n");
    printf("------------------\n");
}

void rodape(int aprovados, int reprovados, float maior, float menor) {
    printf("------------------\n");
    printf("Resultados:\n");
    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    printf("Menor media: %.1f\n", menor);
    printf("Maior media: %.1f\n", maior);
    printf("------------------\n");
}


//Receber 25 medias e retornar quantos aprovados, quantos reprovados e a menor media informada (<6.9 = aprovado)
// #include <stdio.h>
 
// #define TAM 5
 
// int main() {
 
// 	printf("Vetores de notas\n");
 
// 	float medias[TAM],soma=0;
// 	int i=0;
 
// 	for(i=0;i<TAM;i++){
// 		printf("Informe a %da media: ", i+1);
// 		scanf("%f",&medias[i]);						
// 	}	
 
// 	for(i=0;i<TAM;i++){
// 		soma = soma + medias[i];
// 	}
 
// 	printf("Media das medias: %.1f\n",soma/TAM);
 
 
// 	printf("\n\nNotas inversas aas informadas: \n");
// 	for(i=TAM-1;i>=0;i--){
// 		printf("Media %d: %.1f\n",i+1, medias[i]);
// 	}	
 
// 	return 0;
 
// }

// #include <stdio.h>
 
// #define TAM 5
 
// int main() {
 
// 	printf("Vetores de notas\n");
 
// 	float medias[TAM],soma=0;
// 	int i=0;
 
// 	printf("Informe a 1a media: ");
// 	scanf("%f",&medias[0]);
 
// 	printf("Informe a 2a media: ");
// 	scanf("%f",&medias[1]);
 
// 	printf("Informe a 3a media: ");
// 	scanf("%f",&medias[2]);
 
// 	printf("Informe a 4a media: ");
// 	scanf("%f",&medias[3]);
 
// 	printf("Informe a 5a media: ");
// 	scanf("%f",&medias[4]);			
 
// 	for(i=0;i<TAM;i++){
// 		soma = soma + medias[i];
// 	}
 
// 	printf("Media das medias: %.1f\n",soma/TAM);
 
// 	return 0;
 
// }
 
// #include <stdio.h>
 
// #define TAM 5
 
// int main() {
 
// 	printf("Vetores de notas\n");
 
// 	float medias[TAM]={5,7,10,9,2},soma=0;
// 	int i=0;
 
// 	for(i=0;i<TAM;i++){
// 		soma = soma + medias[i];
// 	}
 
// 	printf("Media das medias: %.1f\n",soma/TAM);
 
// 	return 0;
 
// }

// #include <stdio.h>
 
// int main() {
 
// 	printf("Vetores de notas\n");
 
// 	float medias[5]={5,7,10,9,2},soma=0;
// 	int i=0;
 
// 	for(i=0;i<5;i++){
// 		soma = soma + medias[i];
// 	}
 
// 	printf("Media das medias: %.1f\n",soma/5);
 
// 	return 0;
 
// } 
// #include <stdio.h>
 
// int main() {
 
// 	printf("Vetores de notas\n");
 
// 	float medias[5]={5,7,10,9,2},soma=0;
 
// 	soma = medias[0]+medias[1]+medias[2]+medias[3]+medias[4]; 
 
// 	printf("Media das medias: %.1f\n",soma/5);
 
// 	return 0;
 
// }
 
// #include <stdio.h>
 
// int main() {
 
// 	printf("Vetores de notas\n");
 
// 	float medias[5],soma=0;
 
// 	medias[0] = 5;
// 	medias[1] = 7;
// 	medias[2] = 10;
// 	medias[3] = 9;
// 	medias[4] = 2;
 
// 	soma = medias[0]+medias[1]+medias[2]+medias[3]+medias[4]; 
 
// 	printf("Media das medias: %.1f\n",soma/5);
 
// 	return 0;
 
// }

// #include <stdio.h>
 
// int main() {
 
// 	int =10,nota2=9,nota3=8,soma;
 
// 	soma = nota1+nota2+nota3;
 
// 	printf("Media do estudante: %d\n",soma/3);
 
// 	return 0;
 
// }