/*Escreva um programa que solicite um número ao usuário e verifique se é
positivo, zero, ou negativo.*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    float numero;

    cout << "Digite um número; ";
    cin >> numero;

    if(numero<0){
        cout << "O número " << numero << " é negativo!";
    } else if(numero==0){
        cout << "O número " << numero << " é zero!";
    } else {
        cout << "O número " << numero << " é positivo!";
    }

    return 0;
}