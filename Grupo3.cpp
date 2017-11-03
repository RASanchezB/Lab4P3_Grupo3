#include <iostream>
#include <string>
#include "Usuario.h"
#include <curses.h>

using namespace std;



int main(){
	int opcion = 0;
	while(opcion != 4){
		cout<<"-----Menu----"<<endl
		    <<"1) MinseSweeper"<<endl
		    <<"2) Highscores"<<endl
		    <<"3) Crear usuario"<<endl
		    <<"4) Salir"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
				string usuario = "";
				string clave = "";
				cout<<"Ingrese su username"<<endl;
				cin>>usuario;
				cout<<"Ingrese su contraseña"<<endl;
				cin>>clave;
			}
			break;
			case 2:{

			}
			break;
			default:{}
			break;
		}
	}
	
	
	return 0;
}

