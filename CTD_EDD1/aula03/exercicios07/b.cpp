/*Escreva um programa que solicite ao usuário um número positivo e exiba a sequência de Fibonacci até o número inserido pelo usuário. A sequência de Fibonacci é aquela em que cada número é a soma dos dois números anteriores na sequência: 0, 1, 1, 2, 3, 5, 8, 13, ....*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    int tamanho, ultimo = 0, atual = 1, proximo = 1;

    cout << "Digite o tamanho da sequência: ";
    cin >> tamanho;
    
    system("cls || clear");
    
    cout << "0 1 ";

    for(int i = 0; i < tamanho-2; i+=1){
        cout << proximo << " ";
        ultimo = atual;
        atual = proximo;
        proximo = ultimo+atual;
    }

    return 0;
}