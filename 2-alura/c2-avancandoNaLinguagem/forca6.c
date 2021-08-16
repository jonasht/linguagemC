#include <stdio.h>
#include <string.h>

char chutes[26];
int tentativas = 0;
char palavraSecreta[20];

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

        chutes[tentativas] = chute;
        tentativas++;
}
int jaChutou(char letra){
    int achou = 0;
    
    for (int j = 0; j < tentativas; j++){
        if (chutes[j] == letra)
        {
            achou = 1;
            break;
        }
        
    }
    return achou;
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
    //sprintf coloca uma string dentro da char[] dado
    sprintf(palavraSecreta, "melancia");

}

int enforcou(){
    int erros = 0;

    for(int i = 0; i < tentativas; i++){
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


    int acertou = 0;

    escolherPalavra();
    abertura();


    do{
        desenharFoca();
        printf("\n");

        chuta(chutes, &tentativas);

    } while (!acertou && !enforcou());
    
    return 0;

}