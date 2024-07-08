/*Escreva um programa que leia um conjunto de valores inteiros e positivos e determine qual o menor e maior valor do conjunto; a leitura de um valor negativo encerra a leitura do conjunto, e esse valor não será considerado.*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    int numero, maior, menor;
    
    cout << "Digite um número inteiro e positivo: ";
    cin >> numero;
    maior = numero;
    menor = numero;
    
    do{
        system("cls || clear");
        
        cout << "Digite um número inteiro e positivo: ";
        cin >> numero;       
        
        if(numero > maior){
            maior = numero;
        } else if(numero < menor && numero >= 0){
            menor = numero;
        }
    } while(numero >= 0);
    
    cout << "Maior: " << maior << endl << "Menor: " << menor << endl;

    return 0;
}