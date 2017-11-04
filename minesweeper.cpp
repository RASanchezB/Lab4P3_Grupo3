#include <iostream>
#include "minesweeper.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

minesweeper::minesweeper(){
	this->size = 0;
	this->minas = 0;
	this->buscar;
	this->minaspuestas;
	srand(time(NULL));
}

minesweeper::minesweeper(int pSize,int pMinas){
	size = pSize;
	minas = pMinas;
	buscar = crearMatriz(size);
	minaspuestas = crearMatrizI(size,minas);
	
}
int minesweeper::getSize(){
	return size;
}
int minesweeper::getMinas(){
	return minas;
}
char** minesweeper::getBuscar(){
	return buscar;
}
int** minesweeper::getMinaspuestas(){
	return minaspuestas;
}
void minesweeper::setSize(int pSize){
	size = pSize;
}
void minesweeper::setMinas(int pMinas){
	minas = pMinas;
}
void minesweeper::setBuscar(char** pBuscar){
	buscar = pBuscar;
}
void minesweeper::setMinaspuestas(int** pMinaspuestas){
	minaspuestas = pMinaspuestas;
}
minesweeper::~minesweeper(){
}

char** minesweeper::crearMatriz(int size){
	char** matriz = new char*[size];
	for(int i = 0; i < size; i++){
		matriz[i] = new char[size];
	}
	return matriz;
}
int** minesweeper::crearMatrizI(int size, int minas){
	int** matriz = new int*[size];
	for(int i = 0; i < size; i++){
		matriz[i] = new int[size];
	}
	return matriz;
}
void minesweeper::llenarMI(int** minaspuestas, int size, int minas){
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			minaspuestas[i][j] = 0;
		}
	}
	for(int i = 0; i < minas; i++){
		int row = rand()%size;
		int column = rand()%size;
		minaspuestas[row][column] = -1;
	}
}
void minesweeper::sustituirM(int** minaspuestas, char** buscar, int size){

}
void minesweeper::borrar(int** minaspuestas, char** buscar, int size){
	for(int i = 0; i < size; i++){
		delete[] buscar[i];
		buscar[i] = NULL;
		delete[] minaspuestas[i];
		minaspuestas[i] = NULL;
	}
	delete[] buscar;
	delete[] minaspuestas;
}
