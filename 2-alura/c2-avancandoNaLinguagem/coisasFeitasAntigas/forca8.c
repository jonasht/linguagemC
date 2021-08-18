#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// header filese
#include "forca8.h"


char chutes[26];
int chutesDados = 0;
char palavraSecreta[20];

int jaChutou(char letra){
    int achou = 0;
    
    for (int j = 0; j < chutesDados; j++){
        if (chutes[j] == letra)
        {
            achou = 1;
            break;
        }
        
    }
    return achou;
}
void abertura(){
    printf("**************************************\n");
    printf("*******   JOGO DA FORCA   ************\n");
    printf("**************************************\n");
}

void chuta(){
        char chute;

        // tem que colocar espaco antes %c para dar um buf
        printf("\t:");
        scanf(" %c", &chute);

        chutes[chutesDados] = chute;
        chutesDados++;
}
void desenharFoca(){

    for (int i = 0; i < strlen(palavraSecreta); i++){

        int achou = jaChutou(palavraSecreta[i]);

        if(achou){
            printf("%c ", palavraSecreta[i]);

        }else{

        printf("_ ");
        }
    }
}

void escolherPalavra(){

    // declarando variavel aquivo / é um ponteiro

    FILE* f;

    // abrir o aquivo 
    f = fopen("palavras.txt", "r");
    
    int qtdPalavras;
    fscanf(f, "%d", &qtdPalavras);
    
    srand(time(0));
    int randomico = rand() % qtdPalavras;


    for(int i =0 ; i <= randomico; i++){
        fscanf(f, "%s", palavraSecreta);

    }
    // fechando arquivo
    fclose(f);

}
int acertou(){
    for(int i = 0; i < strlen(palavraSecreta); i++){
        if(!jaChutou(palavraSecreta[i])){
            return 0;
        }
    }
    return 1;

}

int enforcou(){
    int erros = 0;

    for(int i = 0; i < chutesDados; i++){
        int existe = 0;
        for(int j = 0; j<strlen(palavraSecreta); j++){
            if(chutes[i] == palavraSecreta[j]){
                existe = 1;
                break;
            }


        }
        if(!existe) erros++;

    }
    return erros >= 5 ;

    
}
int main(){


    printf("%s \n", palavraSecreta);



    escolherPalavra();
    abertura();


    do{
        desenharFoca();
        printf("\n");

        chuta(chutes, &chutesDados);

    } while (!acertou() && !enforcou());
    
    return 0;

}