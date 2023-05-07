#include <stdio.h>

#define TAM 25

int main(void)
{
    float media[TAM];
    int i;
    printf("-----MEDIAS DOS ALUNOS-----\n");

    printf("Digite a %d media: ");
    scanf("%f", &media);
    return 0;
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