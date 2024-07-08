/*Escreva um programa em C++ que solicita do usuário três valores inteiros e cria uma uma matriz dinâmica de inteiros de três dimensões usando alocação dinâmica de memória. Preencha a matriz com valores e imprima seus elementos.*/

#include <iostream>

using namespace std;

int main(){

    system("cls || clear");

    int largura, altura, profundidade;

    cout << "Digite o tamanho da matriz [0x0x0]: " << "\nLargura: ";
    cin >> largura;

    system("cls || clear");

    cout << "Digite o tamanho da matriz [" << largura << "x0x0]: " << "\nAltura: ";
    cin >> altura;

    system("cls || clear");

    cout << "Digite o tamanho da matriz [" << largura << "x" << altura << "x0]: " << "\nProfundidade: ";
    cin >> profundidade;

    system("cls || clear");

    cout << "Matriz[" << largura << "x" << altura << "x" << profundidade << "]" << endl;

    int *matriz = new int[largura * altura * profundidade];

    for(int p = 0; p < profundidade; p+=1){
        for(int a = 0; a < altura; a+=1){
            for(int l = 0; l < largura; l+=1){
                matriz[l][&a][&p] = l;
                cout << matriz[l][&a][&p];
            }
        }
    }

    return 0;
}