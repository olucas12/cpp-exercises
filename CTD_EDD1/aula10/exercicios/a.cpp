/*Escreva uma função recursiva que efetue a operação de potenciação. Por exemplo, pot(7, 2) deve retornar 72. 
Dica: qual o caso base? Qual o passo de indução em uma operação de potenciação?*/

#include <iostream>

using namespace std;

int pot(int base, int expoente){
    if(expoente == 1){
        return 1;
    }
    return pot(base, expoente - 1);
}

int main(){

    int a = pot(7, 2);

    cout << a;

    return 0;
}