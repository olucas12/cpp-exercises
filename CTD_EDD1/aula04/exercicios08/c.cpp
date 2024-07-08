/*Escreva um programa que utilize o vetor anterior e exiba o maior e o menor valor.*/

#include <iostream>

using namespace std;

int main(){
    
    system("cls || clear");

    int vetor[10], soma = 0, maior, menor;

    for(int i = 0; i < 10; i+=1){
        cout << "Posição " << i+1 << ": ";
        cin >> vetor[i];
        soma+=vetor[i];
    }

    maior = vetor[0];
    menor = vetor[0];

    system("cls || clear");

    for(int i = 0; i < 10; i+=1){
        cout << vetor[i] << " ";
        if(menor < vetor[i]){
            menor = vetor[i];
        }
        if(maior > vetor[i]){
            maior = vetor[i];
        }
    }

    cout << "\n\nSoma: " << soma << endl;
    cout << "\nMaior: " << maior << endl << "Menor: " << menor << endl;

    return 0;
}