#include <stdio.h>


void calcular(int* c){
    printf("\n  calcular c:%d endereco:%d\n", (*c), c);
    (*c)++;
    printf("  calcular c:%d endereco:%d\n", (*c), c);

}

int main(){
    printf("============================================\n");
    printf("\tPONTEIRO\n");
    printf("============================================\n");


    int c = 10;

    printf("main c:%d ende:%d\n", c, &c);
    calcular(&c);
    printf("main c:%d endereco:%d\n", c, &c);
    printf("============================================\n");

}