#include <stdio.h>
#define QTD_DE_TENTATIVAS 3 



int main()
{
    printf("=======================================\n");
    printf("|  =================================  | \n");
    printf("||*|        Jogo de Adivinha       |*||\n");
    printf("|  =================================  | \n");
    printf("======================================='\n");

    int numeroParaAdivinhar = 20;
    int numero;
    int i = 1;
    double pontos = 0;
    
    while (1){
        int acertou = (numero == numeroParaAdivinhar);
        int maior = numero > numeroParaAdivinhar;

        printf("======================================='\n");

        printf("tentativa %d \nchute: ", i);
        scanf("%d", &numero);
        i++;
        if (numero < 0){
            printf("o numero digitado nao pode ser negataivo\n");
            continue;
        }

        if (acertou){
            printf("correto\n");
            break;
        }
        else if (maior)
        {
            printf("o numero eh maior\n");
        }
        else
        {
            printf("numero eh menor\n");
        }

        double pontosPerdidos = (numero - numeroParaAdivinhar) / 2.0;
        pontos = pontos - pontosPerdidos;
    }
    printf("fim de jogo\n");
    printf("foi acertado: %d", i);
    printf("total de pontos: %.f\n", pontos);
}