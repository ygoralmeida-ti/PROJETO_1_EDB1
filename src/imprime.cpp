/**
*@file		imprime.cpp
*@brief		definicao de funcoes que imprimem em arquivos txt
*/
#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ofstream;

#include "imprime.h"

/**
*@brief 	Funcao que imprime dados para busca sequencial recursiva com tempo
*/
void imprimeBuscaSequencialRecursiva(double *refDadosBomTemp, double *refDadosRuimTemp, double *refDadosMedioTemp, int &refTamanhoVetor) {
 	cout << refTamanhoVetor << endl;
	//int inicio = 100000;
	ofstream dadosBom("dados_bom.txt");
	for(int ii=0; ii<=refTamanhoVetor; ii++) {
		dadosBom<<refDadosBomTemp[ii]<< " " << ii << endl;
		//inicio += 10000;
	}
	//cout << "Aqui no imprime" << endl;
	//delete refDadosBomTemp;

	//inicio = 100000;
	ofstream dadosRuim("dados_ruim.txt");
	for(int ii=0; ii<=refTamanhoVetor; ii++) {
		dadosRuim<<refDadosRuimTemp[ii]<< " " << ii << endl;
		//inicio += 10000;
	}

	//delete refDadosBomTemp;

	//inicio = 100000;
	ofstream dadosMedio("dados_medio.txt");
	for(int ii=0; ii<=refTamanhoVetor; ii++) {
		dadosMedio<<refDadosMedioTemp[ii]<< " " << ii << endl;
		//inicio += 10000;
	}

	//delete refDadosMedioTemp;

}