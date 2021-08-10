#include <stdio.h>

int main()
{
    printf("=======================================\n");
    printf("||*|        jogo de adivinha       |*||\n");
    printf("======================================='\n");

    int numeroParaAdivinhar = 20;
    int numero;

    for (int i = 1; i <= 3; i++){
        // input ======================
        printf("tentativa %d/3 \nchute: ", i);
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