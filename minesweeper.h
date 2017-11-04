#ifndef minesweeper_H
#define minesweeper_H
#include <iostream>

using namespace std;

class minesweeper{
	private:
		int size;
		int minas;
		char** buscar;
		int** minaspuestas;

	public:
		minesweeper(int,int);
		minesweeper();

		int getSize();
		int getMinas();
		char** getBuscar();
		int** getMinaspuestas();
		
		char** crearMatriz(int);
		int** crearMatrizI(int,int);
		void llenarMI(int**, int, int);
		void sustituirM(int**,char**,int);
		void borrar(int**,char**,int);

		void setSize(int);
		void setMinas(int);
		void setBuscar(char**);
		void setMinaspuestas(int**);

		
		
		~minesweeper();
};
#endif
