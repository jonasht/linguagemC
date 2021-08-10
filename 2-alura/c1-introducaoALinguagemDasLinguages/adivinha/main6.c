#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define QTD_DE_TENTATIVAS 3 


void bonito(){
    printf("======================================='\n");

    return 0;
}
void apagar(){
    system("clear");
    fflush(stdin);
    return 0;
}

int main()
{
    apagar();

    printf("======================================= \n");
    printf("|  =================================  | \n");
    printf("||*|        Jogo de Adivinha       |*|| \n");
    printf("|  =================================  | \n");
    printf("======================================= \n");

    // aqui pega o tempo do mes em segundos
    // jogo srand para o rand ficar mais aleatorio 
    int segundos = time(0);
    srand(segundos);

    int numeroGrade = rand();
    printf("numero aleatorio:%d\n", numeroGrade);

    int numeroParaAdivinhar = numeroGrade % 100;
    printf("numero para adivinhar: %d\n", numeroParaAdivinhar);
    int numero;
    int i = 1;
    double pontos = 0;
    
    while (1){
        
        bonito();

        printf("tentativa %d \nchute: ", i);
        scanf("%d", &numero);

        int acertou = (numero == numeroParaAdivinhar);
        int maior = numero > numeroParaAdivinhar;
        i++;
        if (numero < 0){
            printf("o numero digitado nao pode ser negataivo\n");
            continue;
        }

        if (acertou){
            printf("correto, eh o numero: %d\n", numeroParaAdivinhar);
            break;
        }

        if (maior)
        {
            printf("o numero tem que ser <%d\n", numero);
        }
        else
        {
            printf("o numero tem que ser %d>\n", numero);
            
        }

        double pontosPerdidos = (double)(numero - numeroParaAdivinhar) / (double)2.0;
        if(pontosPerdidos < 0){
            pontosPerdidos = pontosPerdidos * -1;
        }

        pontos = pontosPerdidos - pontos;

        apagar();
    }
    printf("fim de jogo\n");
    printf("foi acertado: %d\n", i);
    printf("total de pontos: %.f\n", pontos);
}