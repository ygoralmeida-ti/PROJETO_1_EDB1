/**
*@file main.cpp
*@brief programa para projeto 1 de EDB1
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::srand;

#include <ctime>
using std::time;

#include "calcBusca.h"

/**
*@brief Funcao principal
*/
int main(void) {
	int opcao;
	
	cout << "Entre com o método que deseja aplicar: " << endl;
	cout << "(1) busca sequencial;" << endl;
	cout << "(2) busca binária." << endl;
	
	cin >> opcao;

	srand(time(NULL)); /**<gerando seed*/

	switch(opcao) {
		case 1:
			
			calcBuscaSequencial();
			break;

		case 2:
			//calcBuscaBinaria();
			break;

		default:
			cout <<"Entrada inválida" << endl;
	}

	return 0;
}