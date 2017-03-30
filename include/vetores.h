/**
*@file 		vetores.h
*@brief		cabecalho de funcoes que geram vetores e passam parametros
*/

#ifndef VETORES_H
#define VETORES_H

#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;

//#include <ctime>
//using std::clock_t;
#include <chrono>

#include "vetores.h"
#include "buscaSequencial.h"
#include "imprime.h"

/**
*@brief 	Funcao que gera vetores para os casos da busca sequencial: (1) para
			o melhor caso (elemento buscado sempre na primeira posicao), (2)
			pior caso (elemento buscado ausente), (3) casos com distribuição de
			probabilidade uniforme do elemento esta.
*/
void vetoresBuscaSequencial (int &numMaxElement, int &numExecConj, int &numIniElement, int &incElement, int &refChave);

#endif