/*Escreva um programa que solicite um número ao usuário e verifique se é par ou
ímpar.*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if(numero%2==0){
        cout << "O número " << numero << " é par!";
    } else {
        cout << "O número " << numero << " é impar!";
    }

    return 0;
}