/*Escreva um programa que converta uma temperatura em graus Celsius para Fahrenheit. O programa deve solicitar ao usuário que digite a temperatura em Celsius e, em seguida, imprimir o resultado da conversão (descubram como!). Exemplo:

Digite a temperatura em Celsius: 25
25 graus Celsius equivalem a 77 graus Fahrenheit*/

#include <iostream>

using namespace std;

float converterTemp(float celcius){

    float fahrenheit = (celcius * 9/5) + 32;

    return fahrenheit;
}

int main(){

    system("cls || clear");

    float celcius, fahrenheit;

    cout << "Digite a temperatura em Celsius: ";
    cin >> celcius;

    fahrenheit = converterTemp(celcius);

    cout << fahrenheit << endl;

    return 0;
}