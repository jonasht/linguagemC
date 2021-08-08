#include <stdio.h>

int main(){
    printf("===========================\n");
    printf("|*|  jogo de adivinha   |*|\n");
    printf("===========================\n");
    
    int numeroParaAdivinhar = 20;
    int numero;

    // input ======================
    printf("chute: ");
    scanf("%d", &numero);
    // comentando atoa aqui commiting sth here

    // aqui é como um if, se numero == numeroparaadivinhar, o acertou recebe e fica True
    int acertou = (numero == numeroParaAdivinhar);
    printf("numero do acertou: %d\n", acertou);

    if (acertou){
        printf("correto\n");
    }else{

        int maior = numero > numeroParaAdivinhar;
        
        if(maior){
            printf("o numero eh maior\n");
        }else{
            printf("numero eh menor\n");
        }

    }
}