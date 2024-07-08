/*Escreva um programa que solicite ao usuário que insira três números: os dois primeiros definirão um intervalo, e o terceiro número será  verificado para determinar se está dentro deste intervalo. O programa utilizará operadores lógicos conectando condições.*/

#include <iostream>

using namespace std;

 int main(){
    float inicioIntervalo, fimIntervalo, numero;

    system("cls || clear");

    cout << "Digite o início do intervalo: ";
    cin >> inicioIntervalo;

    cout << "Digite o fim do intervalo: ";
    cin >> fimIntervalo;

    cout << "Digite o valor para verificar: ";
    cin >> numero;

    system("cls || clear");

    if(inicioIntervalo > fimIntervalo){
        cout << "O início do intervalo não pode ser maior que o fim." << endl;
    } else {
        if(inicioIntervalo < numero && numero < fimIntervalo){
            cout << "DENTRO" << endl << inicioIntervalo << "..." << numero << "..." << fimIntervalo << endl;

        } else if(inicioIntervalo > numero){
            cout << "FORA" << endl << numero << "..." << inicioIntervalo << "..." << fimIntervalo << endl;

        } else if(numero > fimIntervalo){
            cout << "FORA" << endl << inicioIntervalo << "..." << fimIntervalo << "..." << numero << endl;

        }
    }

    return 0;
 }