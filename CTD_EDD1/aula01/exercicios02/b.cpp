/*Escreva um programa que solicite ao usuário que digite o primeiro termo (a), a razão (r) e o número de termos (n) de uma progressão aritmética. O programa deve calcular e imprimir a soma dos n termos da P.A (descubram como!). Exemplo:

Digite o primeiro termo (a): 3
Digite a razão (r): 2
Digite o número de termos (n): 5

A soma dos 5 termos da P.A. é: 35*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    float a, r, n, soma;

    cout << "Digite o primeiro termo (a): ";
    cin >> a;
    float resultado = a;

    cout << "Digite razão (r): ";
    cin >> r;

    cout << "Digite o número de termos (n): ";
    cin >> n;

    system("cls || clear");

    for(int i = 0; i < n; i+=1){
        soma+=resultado;
        resultado+=r;
    }

    cout << soma;

    return 0;
}