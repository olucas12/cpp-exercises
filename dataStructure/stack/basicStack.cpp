#include <iostream>
#include <unistd.h>
#define maxSize 10

using namespace std;

int size = 0;
int *stack = new int[maxSize];

bool isEmpty(){
    if(size <= 0){
        return true;
    } else {
        return false;
    }
}

bool isFull(){
    if(size >= maxSize){
        return true;
    } else {
        return false;
    }
}

void push(int valor){
    system("cls || clear");
    if(isFull()){
        cout << "A pilha está cheia.";
        sleep(2);
    } else {
        stack[size] = valor;
        size+=1;
    }
}

void pop(){
    system("cls || clear");
    if(isEmpty()){
        cout << "A pilha está vazia.";
        sleep(2);
    } else {
        size-=1;
    }
}

void printStack(){
    system("cls || clear");
    cout << "Pilha [ ";
    for(int i = 0; i < size; i+=1){
        cout << stack[i] << " ";
    }
    cout << "]";
    sleep(2);
}

int main(){

    int option = 9;
    int value;

    do{
        system("cls || clear");
        cout << "PILHA\n1. Inserir\n2. Remover\n3. Listar Itens\n0. Sair\n\nDigita a opção: ";

        cin >> option;

        switch (option){
            case 1:
                system("cls || clear");
                cout << "Digite o valor para inserir na pilha: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                printStack();
                break;
            default:
                break;
        }

    }while(option != 0);

    return 0;
}