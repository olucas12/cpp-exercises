/*Escreva um programa que solicite ao usuário dois números inteiros e, em seguida, troque seus valores usando ponteiros.*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    int numero1, numero2, *ptr1, *ptr2, aux;

    cout << "Digite o primeiro número: ";
    cin >> numero1;
    ptr1 = &numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;
    ptr2 = &numero2;

    system("cls || clear");

    cout << "Número 1: " << numero1 << " Número 2: " << numero2 << endl;

    aux = *ptr2;
    ptr2 = ptr1;
    *ptr1 = aux;

    cout << "Número 1: " << numero1 << " Número 2: " << numero2 << endl;

    return 0;
}