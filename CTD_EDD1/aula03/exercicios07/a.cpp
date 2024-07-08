/*Escreva um programa que calcule o fatorial de um número inteiro não-negativo.*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    int numero;

    cout << "Digite um número inteiro e positivo: ";
    cin >> numero;

    system("cls || clear");

    int resultado = numero;

    for(int i = 1; i < numero; i+=1){
        resultado*=i;
    }

    cout << numero << "! = " << resultado << endl;

    return 0;
}