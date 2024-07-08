/*Escreva um programa que verifique se um número é positivo e não é múltiplo de 3. O programa utilizará operadores lógicos conectando condições.*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    system("cls || clear");

    if(numero >= 0 && numero % 3 != 0){
        cout << numero << " é positivo e não é múltiplo de 3!" << endl;
    } else if(numero < 0){
        cout << numero << " não atende aos requisitos. Ele é negativo!" << endl;
    } else if(numero >= 0 && numero % 3 == 0){
        cout << numero << " não atende aos requisitos. Ele é multiplo de três!" << endl;
    }

    return 0;
}