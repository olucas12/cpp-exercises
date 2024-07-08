/*Escreva um programa em C++ que declare uma variável inteira intVar, um ponteiro para inteiro ptr1, e um ponteiro para ponteiro para inteiro ‘ptr2‘. Atribua o endereço de intVar a ptr1 e o endereço de ptr1 a ptr2. Através de ptr2, atribua um novo valor a intVar e imprima o valor resultante.*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    int intVar = 10, *ptr1 = &intVar, **ptr2 = &ptr1;

    cout << intVar << endl;

    **ptr2 = 50;

    cout << intVar << endl;

    return 0;
}