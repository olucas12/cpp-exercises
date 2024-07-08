/*Escreva um programa que solicite três números ao usuário e verifique qual deles
é o maior e qual deles é o menor. Caso dois deles, ou os três, sejam iguais, deve
fornecer essa informação.*/

#include <iostream>

using namespace std;

int main(){
    
    system("cls || clear");

    float numero1, numero2, numero3;
    
    cout << "Digite o numero 1: ";
    cin >> numero1;
    
    cout << "Digite o numero 2: ";
    cin >> numero2;
    
    cout << "Digite o numero 3: ";
    cin >> numero3;
    
    system("cls || clear");

    if(numero1 == numero2 && numero2 == numero3) {
        cout << "Os três números são iguais: " << numero1 << endl;

    } else if(numero1 == numero2 || numero2 == numero3 || numero1 == numero3){
        cout << "Dois números são iguais: ";

        if(numero1 == numero2){
            cout << numero1 << endl;
        } else if(numero1 == numero3){
            cout << numero1 << endl;
        } else if(numero2 == numero3){
            cout << numero2 << endl;
        }
    }

    if(numero1 > numero2 && numero1 > numero3){
        cout << "Número 1 é o maior: " << numero1 << endl;

    } else if(numero2 > numero1 && numero2 > numero3){
        cout << "Número 2 é o maior: " << numero2 << endl;

    } else if(numero3 > numero1 && numero3 > numero2){
        cout << "Número 3 é o maior: " << numero3 << endl;

    }
    return 0;
}