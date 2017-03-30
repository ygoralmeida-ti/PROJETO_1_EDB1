/**
*@file		imprime.cpp
*@brief		cabecalho de funcoes que imprimem em arquivos txt
*/

#ifndef IMPRIME_H
#define IMPRIME_H

#include <iostream>
using std::endl;

#include <fstream>
using std::ofstream;

#include "imprime.h"

/**
*@brief 	Funcao que imprime dados para busca sequencial recursiva com tempo
*/
void imprimeBuscaSequencialRecursiva(double *refDadosBomTemp, double *refDadosRuimTemp, double *refDadosMedioTemp, int &refTamanhoVetor);

#endif