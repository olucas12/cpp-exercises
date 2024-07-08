/*(Desafio) Escreva um programa que exiba o seguinte padrão, usando declarações for. Deve solicitar ao usuário que digite um número entre 1 e 9, definindo o número de linhas do padrão. No exemplo abaixo, o usuário digitou 5. 
1       1
 2     2
  3   3
   4 4
    5
1               1
 2             2
  3           3
   4         4
    5       5
     6     6
      7   7
       8 8
        9
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    system("cls || clear");

    int tamanho;
    cout << "Tamanho da pirâmide: ";
    cin >> tamanho;
    int aux = tamanho*2-3;
    system("cls || clear");

    string espacos = " ";

    for(int i = 1; i <= tamanho; i+=1){
        for(int e = 0; e < i-1; e+=1){
            cout << espacos;
        }
        if(i==tamanho){
            cout << i << endl;
        } else {
            cout << i;
            for(int e = 0; e < aux; e+=1){
                cout << espacos;
            }
            aux-=2;
            cout << i << endl;
        }
        
    }

    return 0;
}