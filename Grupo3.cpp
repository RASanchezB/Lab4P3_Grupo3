#include <iostream>
#include <string>
#include "Usuario.h"
#include "minesweeper.h"
#include <new>
#include <sstream>
#include <vector>
#include <stdlib.h>



using namespace std;



int main(){

	std::vector<Usuario>tabla;

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

			case 3:{
				string nombre, usuario, clave;
				
				cout<<"Ingrese su Nombre: "<<endl;
				cin>>nombre;
				
				cout<<"Ingrese su Usuario: "<<endl;
				cin>>usuario;
			
				cout<<"Ingrese su Clave: "<<endl;
				cin>>clave;

				Usuario u = Usuario(nombre, usuario, clave, 0);
				tabla.push_back (u);			
				
			}
			break;
			default:{}
			break;
		}
	}
	
	
	return 0;
}

