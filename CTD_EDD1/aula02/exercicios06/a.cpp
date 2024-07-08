/*Escreva um programa que solicite ao usuário um número e o multiplique por dois usando operadores bit-a-bit.*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    int dobro = numero<<1;

    cout << numero << " x 2 = " << dobro << endl;

    return 0;
}