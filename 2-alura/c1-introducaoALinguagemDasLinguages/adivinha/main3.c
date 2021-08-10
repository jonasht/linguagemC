#include <stdio.h>
#define QTD_DE_TENTATIVAS 3 



int main()
{
    printf("=======================================\n");
    printf("||*|        jogo de adivinha       |*||\n");
    printf("======================================='\n");

    int numeroParaAdivinhar = 20;
    int numero;

    for (int i = 1; i <= QTD_DE_TENTATIVAS; i++){
        // input ======================
        printf("tentativa %d/%d \nchute: ", i, QTD_DE_TENTATIVAS);
        scanf("%d", &numero);
        // comentando atoa aqui commiting sth here

        // aqui é como um if, se numero == numeroparaadivinhar, o acertou recebe e fica True
        int acertou = (numero == numeroParaAdivinhar);

        if (acertou){
            printf("correto\n");
            break;
        }else{
            int maior = numero > numeroParaAdivinhar;

            if (maior)
            {
                printf("o numero eh maior\n");
            }
            else
            {
                printf("numero eh menor\n");
            }
        }
    }
}