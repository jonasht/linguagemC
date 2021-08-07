#include <stdio.h>

int main(){
    printf("=========================\n");
    printf("||  jogo de adivinha   ||\n");
    printf("=========================\n");
    
    int numeroParaAdivinhar = 20;
    int numero;

    printf("chute: ");
    scanf("%d", &numero);

    if (numero == numeroParaAdivinhar){
        printf("correto\n");
    }else{
        if(numero > numeroParaAdivinhar){
            printf("o numero foi maior\n");
        }
        if(numero < numeroParaAdivinhar){
            printf("numero foi menor");
        }

    }
}