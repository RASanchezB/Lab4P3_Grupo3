lab4:	Grupo3.o Usuario.o minesweeper.o
	g++ Grupo3.o Usuario.o minesweeper.o -o lab4
Grupo3.o:	Grupo3.cpp Usuario.h minesweeper.h
	g++ -c Grupo3.cpp

minesweeper.o:	minesweeper.h minesweeper.cpp
	g++ -c minesweeper.cpp

Usuario.o:	Usuario.h Usuario.cpp
	g++ -c Usuario.cpp
