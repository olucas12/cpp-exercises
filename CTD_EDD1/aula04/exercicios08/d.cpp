/*Escreva um programa que inicie com um vetor com 10 valores inteiros e exiba a média dos valores ímpares. Verifique se há valores ímpares no vetor.*/

#include <iostream>
#include <random>

using namespace std;

int main(){

    random_device seed;
    mt19937 rng(seed());
    uniform_int_distribution<mt19937::result_type> arrayValue(0, 20);

    int vetor[10], qtdImpar = 0;
    float mediaImpar = 0;

    for(int i = 0;i < 10; i+=1){
        vetor[i] = arrayValue(seed);
    }

    system("cls || clear");

    for(int i = 0; i < 10; i+=1){
        if(vetor[i] % 2 != 0){
            cout << "\x1B[31m" << vetor[i] << "\033[0m ";
            qtdImpar+=1;
            mediaImpar+=vetor[i];
        } else {
            cout << vetor[i] << " ";
        }
    }

    mediaImpar/=qtdImpar;

    cout << endl << mediaImpar << endl;

    return 0;
}