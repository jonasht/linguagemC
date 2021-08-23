#include <iostream>
using namespace std;

int main(){
    

    cout << "\t***************************************" << endl;
    cout << "\t*** bem vindo ao jogo de adivinhaca ***" << endl;
    cout << "\t***************************************" << endl;
    
    // variavel constande, quando nunca é mudado
    // quando for const o padrao eh usar letra maiuscula NUMERO_SECRETO
    const int NUMERO_SECRETO = 42;
    
    int chute;

    
    // input = cout + cin 
    cout << "\t:"; cin >> chute;


    cout << "o valor do seu chute eh: " << chute << endl;

    bool acertou = chute == NUMERO_SECRETO;
    bool maior = chute > NUMERO_SECRETO;


    if(acertou){
        cout << "parabens voce acertou o numero secreto" << endl;

    } else if(maior){
        cout << "seu numero foi maior que o numero secreto";
    } else {
        cout << "seu chute foi menor que seu numero secreto";
    }
    cout << endl;

}