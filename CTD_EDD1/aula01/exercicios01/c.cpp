/*Escreva um programa que calcule a média de três números inseridos pelo usuário. O programa deve solicitar ao usuário que digite os três números e, em seguida, imprimir a média dos números. Exemplo:

Digite o primeiro número: 5
Digite o segundo número: 8
Digite o terceiro número: 12
A média dos números é: 8.33333
*/

#include <iostream>

using namespace std;

float calcularProduto(float numero1, float numero2, float numero3){
    return (numero1 + numero2 + numero3) / 3;
}

int main(){

    float numero1, numero2, numero3, media;

    system("cls || clear");

    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número: ";
    cin >> numero2;
    cout << "Digite o terceiro número: ";
    cin >> numero3;

    media = calcularProduto(numero1, numero2, numero3);

    cout << "A média dos números é: " << media << endl;

    return 0;
}