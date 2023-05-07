#include <stdio.h>

int main(){
    
    int idade;

    printf("digite a idade");
        scanf("%d", &idade);

    if (idade < 0){
            printf("Idade invalida");
        }else{
            if (idade < 15){
                printf("Nao vota");
                }
        }
            
            
            if (idade > 15){
                printf("Voto facultativo");
                }else{
                    if (idade < 18)
                    {
                        printf("Voto facultativo");
                    }
                    
                }
                
                
                if (idade >= 18){
                    printf("Voto obrigatorio");
                    }else{
                        if (idade > 65){
                        printf("Voto facultativo");

                    }          
}
//}if (idade == 41 && idade == 88){
//printf("Premio!!");
//}

// else{
// printf("Idade nao informada");
// }