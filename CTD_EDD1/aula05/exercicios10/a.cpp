/*Escreva um programa que declare dois inteiros e dois ponteiros para esses inteiros. Realize soma, subtração, multiplicação, e divisão, entre os inteiros, usando apenas os seus respectivos ponteiros.*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    int numero1, numero2, *ptr1, *ptr2;

    cout << "Digite o primeiro número: ";
    cin >> numero1;
    ptr1 = &numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;
    ptr2 = &numero2;
    
    system("cls || clear");

    int soma = *ptr1 + *ptr2;
    int sub = *ptr1 - *ptr2;
    int mult = *ptr1 * *ptr2;
    float div = *ptr1 / *ptr2;

    cout << numero1 << " + " << numero2 << " = " << soma << endl;
    cout << numero1 << " - " << numero2 << " = " << sub << endl;
    cout << numero1 << " x " << numero2 << " = " << mult << endl;
    cout << numero1 << " / " << numero2 << " = " << div << endl;

    return 0;
}