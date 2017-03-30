/**
*@file 		vetores.cpp
*@brief		definicao de funcoes que geram vetores e passam parametros
*/

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
void vetoresBuscaSequencial (int &numMaxElement, int &numExecConj, int &numIniElement, int &incElement, int &refChave) {
	
	int tamanhoVetor = (numMaxElement - numIniElement + incElement)/incElement;

	//cout << "tamanho: " << tamanhoVetor << endl;
	//int count = 0;

	double *dadosBomTemp = new double[tamanhoVetor];
	//double *dadosBomCount = new double[tamanhoVetor];
	double *dadosRuimTemp = new double[tamanhoVetor];
	//double *dadosRuimCount = new double[tamanhoVetor];
	double *dadosMedioTemp = new double[tamanhoVetor];
	//double *dadosMedioCount = new double[tamanhoVetor];
	
	int intervalo = 100000;

	for(int ii = numIniElement; ii <= numMaxElement; ii+=incElement) {
	cout << " = ";
		int *vetorBom = new int[ii]; /**<caso em que a chave esta na primeira posicao*/
		int *vetorRuim = new int[ii]; /**<caso em que a chave nao esta presente*/
		int yy = ii-1;
		int ww = ii-1;
		int zz = ii-1;
		
		for(int kk1 = 0; kk1 < ii; kk1++) {
			vetorBom[kk1] = (rand() % intervalo); /**<numeros aleatorios de zero ate 300*/
		}
		vetorBom[0] = refChave; /**<garantindo primeiro elemento igual a chave*/
		//clock_t inicio1 = clock();
		auto inicio1 = std::chrono::high_resolution_clock::now();
		buscaSequencialRecursivaTemp(refChave, vetorBom, ww);
		//clock_t fim1 = clock();
		auto fim1 = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> delta1 = fim1 - inicio1;
		*dadosBomTemp = delta1.count();
		dadosBomTemp += 1;
		
		//buscaSequencialRecursivaCount(chave, vetorBom, ii, dadosBomCount);

		int kk2 = 0;
		while(kk2 < ii) {

			vetorRuim[kk2] = (rand() % intervalo); /**<numeros aleatorios de zero ate 300*/
			if(vetorRuim[kk2] != refChave) { /**<garante que a chave nao esteja*/
				++kk2;
			}
		}
		
		//clock_t inicio2 = clock();
		auto inicio2 = std::chrono::high_resolution_clock::now();
		buscaSequencialRecursivaTemp(refChave, vetorRuim, yy);
		//clock_t fim2 = clock();
		auto fim2 = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> delta2 = fim2 - inicio2;
		*dadosRuimTemp = delta2.count();
		dadosRuimTemp += 1;

		//buscaSequencialRecursivaCount(chave, vetorRuim, ii, dadosRuimCount);

		 /**<caso em que a chave pode estar ou nao*/
		int *vetorMedio = new int[ii];
		double soma = 0.0;

		for(int jj = 0; jj < numExecConj; jj++) {

			for(int kk3 = 0; kk3 < ii; kk3++) {
				vetorMedio[kk3] = (rand() % intervalo); /**<numeros aleatorios de zero ate 300*/
			}
			//clock_t inicio3 = clock();
			auto inicio3 = std::chrono::high_resolution_clock::now();
			buscaSequencialRecursivaTemp(refChave, vetorMedio, zz);
			//clock_t fim3 = clock();
			auto fim3 = std::chrono::high_resolution_clock::now();
			std::chrono::duration<double> delta3 = fim3 - inicio3;
			soma += delta3.count();
		}
		double media = soma/numExecConj;
		*dadosMedioTemp = media;
		dadosMedioTemp += 1;
		
		//buscaSequencialRecursivaCount(chave, vetorMedio, jj, ii, dadosMedioCount);
		delete[] vetorBom;
		delete[] vetorRuim;
		delete[] vetorMedio;
		//cout << "Aqui!!! " << ++count << endl;

	}
	
	imprimeBuscaSequencialRecursiva(dadosBomTemp, dadosRuimTemp, dadosMedioTemp, tamanhoVetor);

}