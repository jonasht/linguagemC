# include<stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    int segundos = time(0);
    srand(segundos);


    int n1 = rand();
    int n2 = rand();
    printf("%d , %d\n", n1, n2);

    for(int i = 0; i <= 10; i++){
        printf("\n");
    }
    printf("fim de programa");
    
}