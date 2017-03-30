/**
*@file calcBusca.cpp
*@brief definicao de funcoes para passagem de parametro para calculo de curvas
*/

#include "calcBusca.h"
#include "vetores.h"

/**
*@brief Funcao para passagem de parametro para calculo das curvas de busca sequencial
*/
void calcBuscaSequencial(void) {
	int numeroMaximoDeElementos = 50; /**<iniciamos com N = 10 e vamos ate 300*/
	int numeroDeExecucoesPorConjunto = 10; /**<a cada N executamos 10 vezes e vamos extrair a media*/
	int numeroInicialDeElementos = 5; /**<numero de elementos do N inicial*/
	int incrementoDosElementos = 1; /**<quantidade incrementada a cada N*/
	int chave = 5; /**<elemento buscado*/
	
	vetoresBuscaSequencial(numeroMaximoDeElementos, numeroDeExecucoesPorConjunto, numeroInicialDeElementos, incrementoDosElementos, chave);
}