#include <stdio.h>
#include <string.h>

int main(){
    char palavraSecreta[20];

    //sprintf coloca uma string dentro da char[] dado
    sprintf(palavraSecreta, "melancia");


    printf("%s \n", palavraSecreta);
    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;


    do{

        for (int i = 0; i < strlen(palavraSecreta); i++)
        {
                int achou = 0;
            
            for (int j = 0; j < tentativas; j++)
            {

                if (chutes[j] == palavraSecreta[i])
                {
                    achou = 1;
                    break;
                }
                
            }
            
            if(achou){
                printf("%c ", palavraSecreta[i]);

            }else{

            printf("_ ");
            }
        }
        
        char chute;

        // tem que colocar espaco antes %c para dar um buf
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;
  
     

    } while (!acertou && !enforcou);
    
    

}