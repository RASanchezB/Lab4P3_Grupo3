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

		void setSize();
		void setMinas();
		void setBuscar();
		void setMinaspuestas();

		
		~minesweeper();
}
#endif
