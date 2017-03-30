/**
*@file		buscaSequencial.cpp
*@brief 	Implementacao de funcoes que vao fazer a busca sequencial
*/

#include <iostream>
using std::cout;
using std::endl;

#include "buscaSequencial.h"

/**
*@brief		Funcao que realiza busca sequencial recursivamente. Apos o termino
*			passa dados do vetor dados para serem escritos em txt.
*/
bool buscaSequencialRecursivaTemp(int &refChave, int *refVetor, int &refElementos) {
	/**if(refVetor[0] == 5) {
		cout << "cinco!" << endl;
	}*/
	if(refElementos < 0) {
		return false;
	} else if(refVetor[0] == refChave) {
		return true;
	} else {
		cout << "Aqui!" << endl;	
		refElementos -= 1;
		refVetor += 1;
		return buscaSequencialRecursivaTemp(refChave, refVetor, refElementos);
	}
}
