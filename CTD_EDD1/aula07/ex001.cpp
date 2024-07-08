#include <iostream>

using namespace std;

int add(int n1, int n2){
    int soma = n1 + n2;
    return soma;
}

int main(){

    int numero1, numero2;

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "\nDigite o segundo número: ";
    cin >> numero2;

    int resultado = add(numero1, numero2);

    cout << numero1 << " + " << numero2 << " = " << resultado;

    return 0;
}