/*Escreva um programa que solicite ao usuário que digite seu nome e, em seguida, imprima uma mensagem de boas-vindas com o nome digitado. Exemplo:

Digite seu nome: Maria
Olá, Maria! Seja bem−vinda!*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    string nome;

    system("cls || clear");

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << endl << "Olá, " << nome << "! Seja bem-vindo!" << endl;

    return 0;
}