#include <stdio.h>


int main(){
    int tabuada;

    printf("qual tabuada voce quer:");
    scanf("%d", &tabuada);
    printf("tabuada %d\n", tabuada);

    for(int i = 0 ; i <= 10; i++){
        printf("%dX%d=%d\n", tabuada, i, tabuada * i );
    }

    return 0;
}