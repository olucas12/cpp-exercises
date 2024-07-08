/*Escreva um programa que peça ao usuário para digitar a base e a altura de um triângulo e, em seguida, calcule e imprima a área do triângulo (descubram como!). Exemplo:

Digite a base do triângulo: 6
Digite a altura do triângulo: 4
A área do triângulo é: 12*/

#include <iostream>

using namespace std;

int main(){

    float base, altura;

    cout << "Digite a base do triângulo: ";
    cin >> base;

    cout << "Digite a altura do triângulo";
    cin >> altura;

    cout << "A área do triângulo é: " << (base * altura) / 2;

    return 0;
}