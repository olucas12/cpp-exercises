/*Escreva um programa que solicite ao usuário um número e verifique se é par ou ímpar usando operadores bit-a-bit.*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    if(numero & 1){
        cout << numero << " é impar." << endl;
    } else {
        cout << numero << " é par." << endl;
    }

    return 0;
}