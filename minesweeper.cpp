#include <iostream>
#include "minesweeper.h"
using namespace std;

minesweeper::minesweeper(){
	this->size = 0;
	this->minas = 0;
	this->buscar;
	this->minaspuestas;
}

minesweeper::minesweeper(int pSize,int minas){
	size = pSize;
	minas = ;
	buscar = crearMatriz(size);
	minaspuestas = crearMatrizI();
	
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

char** crearMatriz(int size){
	char** matriz = new char*[size];
	for(int i = 0; i < size; i++){
		matriz[i] = new char[size];
	}
	return matriz;
}
int** crearMatrizI(int size){
	int** matriz = new char*[size];
	for(int i = 0; i < size; i++){
		matriz[i] = new char[size];
	}
	return matriz;
}

