/*Escreva um programa em C++ que receba dois ponteiros para ponteiros para inteiros e realize a troca dos valores apontados por eles.*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    int intVar1 = 18, intVar2 = 6, *ptr1 = &intVar1, *ptr2 = &intVar2, **ptrPtr1 = &ptr1, **ptrPtr2 = &ptr2, aux;

    cout << intVar1 << " " << intVar2 << endl;

    aux = **ptrPtr1;
    **ptrPtr1 = **ptrPtr2;
    **ptrPtr2 = aux;

    cout << intVar1 << " " << intVar2 << endl;

    return 0;
}