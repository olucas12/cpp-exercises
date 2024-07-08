/*Escreva um programa que solicite 10 valores inteiros do usuário e armazene-os em um vetor.*/

#include <iostream>

using namespace std;

int main(){
    
    system("cls || clear");

    int vetor[10];

    for(int i = 0; i < 10; i+=1){
        cout << "Posição " << i+1 << ": ";
        cin >> vetor[i];
    }

    system("cls || clear");

    for(int i = 0; i < 10; i+=1){
        cout << vetor[i] << " ";
    }

    cout << endl;

    return 0;
}