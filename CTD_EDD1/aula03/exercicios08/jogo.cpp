/*Escreva um programa que implemente o jogo “pedra, papel, e tesoura” contra o computador. O usuário deve digitar um número para escolher a opção (1 - Pedra, 2 - Papel, 3 - Tesoura, e 0 - Sair). O programa deve exibir qual foi a escolha do computador e quem venceu a partida. Quando o usuário escolher 0 (sair), o jogo deve exibir o número de vitórias do usuário, o número de vitórias do computador, e o número de empates. Dica: use srand(static_cast<unsigned int>(time(nullptr))) no início do código para inicializar o gerador de números aleatórios, e use rand() % 3 + 1 para sortear um número entre 1 e 3 para o computador. Para os mais avançados, tentem usar a biblioteca random que oferece um mecanismo mais robusto para geração de números aleatórios (descubram como).*/

#include <iostream>
#include <random>
#include <unistd.h>

using namespace std;

int vencedor(int jogador, int computador){
	int jogadas[3][3] = {
		{0,-1 ,1},
		{1 ,0,-1},
		{-1,1 ,0}
	};

	return jogadas[computador][jogador];
}

int main(){

	system("cls || clear");

	string peca[3] = {"Pedra", "Papel", "Tesoura"};

	random_device dev;
	mt19937 rng(dev());
	uniform_int_distribution<mt19937::result_type> compNum(1, 3);

	cout << "Pedra, Papel e Tesoura" << endl << endl;

	int jogador, computador, vitorias = 0;

	do{
		cout << "Digite a sua jogada: \n\n1. Pedra\n2. Papel\n3. Tesoura\n0. Sair\n\nOpção: ";
		cin >> jogador;
		if(jogador != 0){
			computador = compNum(dev);

			system("cls || clear");

			cout << "Jogador: " << peca[jogador-1] << endl << "Computador: " << peca[computador-1] << endl << endl << endl;

			sleep(1);

			switch(vencedor(jogador-1, computador-1)){
				case -1:
					cout << "Jogador venceu!" << endl;
					vitorias+=1;
					break;
				case 0:
					cout << "Empate!" << endl;
					break;
				case 1:
					cout << "Computador venceu!" << endl;
					break;
				default:
					cout << "ERRO!";
					break;
			}

			sleep(2);

			system("cls || clear");
				
		} else if(jogador == 0) {
			system("cls || clear");
		}
	}while(jogador != 0);
	
	if(vitorias == 0){
		cout << "Jogador não venceu nenhuma vez!" << endl;
	} else if(vitorias == 1){
		cout << "Jogador venceu uma vez." << endl; 
	} else { 
		cout << "Jogador venceu " << vitorias << " vezes!" << endl;
	}

	return 0;
}
