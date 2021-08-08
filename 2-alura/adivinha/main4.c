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

    for (int i = 1; i <= QTD_DE_TENTATIVAS; i++){
        int acertou = (numero == numeroParaAdivinhar);
        int maior = numero > numeroParaAdivinhar;
        int menor = numero < numeroParaAdivinhar;

        // input ======================
        printf("======================================='\n");

        printf("tentativa %d/%d \nchute: ", i, QTD_DE_TENTATIVAS);
        scanf("%d", &numero);
        if (numero < 0){
            printf("o numero digitado nao pode ser negataivo\n");
            i--;
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
    
    }
}