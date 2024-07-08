/*Escreva um programa que utilize o vetor anterior e calcule a soma de todos os seus elementos.*/

#include <iostream>

using namespace std;

int main(){
    
    system("cls || clear");

    int vetor[10], soma = 0;

    for(int i = 0; i < 10; i+=1){
        cout << "Posição " << i+1 << ": ";
        cin >> vetor[i];
        soma+=vetor[i];
    }

    system("cls || clear");

    for(int i = 0; i < 10; i+=1){
        cout << vetor[i] << " ";
    }

    cout << "\nSoma: " << soma << endl;

    return 0;
}