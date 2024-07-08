/*Escreva um programa que solicite ao usuário que digite um número real representando uma medida em metros. O programa deve converter essa medida para centímetros (inteiro) e imprimir o resultado. Deve obrigatoriamente usar o static_cast. Exemplo:

Digite a medida em metros: 2.5
2.5 metros equivalem a 250 centímetros.*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    float m;
    int cm;

    cout << "Digite a medida em metros: ";
    cin >> m;

    cm = int(m*100);

    cout << m << " metros equivalem a " << cm << " centímetros.";

    return 0;
}