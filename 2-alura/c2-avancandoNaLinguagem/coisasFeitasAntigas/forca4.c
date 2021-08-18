#include <stdio.h>
#include <string.h>

void abertura(){
    printf("**************************************\n");
    printf("*******   JOGO DA FORCA   ************\n");
    printf("**************************************\n");
}

void chuta(char chutes[26], int* tentativas){
        char chute;

        // tem que colocar espaco antes %c para dar um buf
        scanf(" %c", &chute);

        chutes[*tentativas] = chute;
        (*tentativas)++;
}
int jaChutou(char letra, char chutes[26], int tentativas){
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
void desenharFoca(char palavraSecreta[20], char chutes[26], int tentativas){

    for (int i = 0; i < strlen(palavraSecreta); i++){

        int achou = jaChutou(palavraSecreta[i], chutes, tentativas);

        if(achou){
            printf("%c ", palavraSecreta[i]);

        }else{

        printf("_ ");
        }
    }
}

void escolherPalavra(char palavraSecreta){
    //sprintf coloca uma string dentro da char[] dado
    sprintf(palavraSecreta, "melancia");

}
int main(){
    char palavraSecreta[20];

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    escolherPalavra(palavraSecreta);
    abertura();


    do{
        desenharFoca(palavraSecreta, chutes, tentativas);
        printf("\n");

        chuta(chutes, &tentativas);

    } while (!acertou && !enforcou);
    
    return 0;

}