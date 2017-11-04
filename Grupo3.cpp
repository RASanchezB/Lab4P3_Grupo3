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
		    <<"3) Crear, Modificar o Eliminar usuario"<<endl
		    <<"4) Salir"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
				string usuario = "";
				string clave = "";

				bool entra = false;

				cout<<"Ingrese su username"<<endl;
				cin>>usuario;
				cout<<"Ingrese su contraseña"<<endl;
				cin>>clave;
				
				for(int i = 0; i < tabla.size(); i++){
					if(usuario==tabla.at(i).getUsuario()){
						if(clave==tabla.at(i).getClave()){
							entra = true;							
						}
					}

					if(entra){
						i = tabla.size();
					}
				}

				if(entra){
					cout<<"Hola"<<endl;
					//imprimir matriz
					cout<<"Ingrese el tamaño"<<endl;
					int size;
					cin>>size;
					cout<<"Ingrese la cantidad de minas"<<endl;
					int minas;
					cin>>minas;
					minesweeper* ms = new minesweeper(size,minas);
					
					
				}else {
					cout<<"Usuario o clave incorrecta!"<<endl;
				}

			}
			break;
			case 2:{

			}
			break;

			case 3:{
				string nombre, usuario, clave;
				int op2;
				do{
				
					cout<<"Que desea hacer?"<<endl
					<<"1. Crear"<<endl
					<<"2. Listar"<<endl
					<<"3. Eliminar"<<endl
					<<"4. Salir"<<endl;
					cout<<endl;
					cin>>op2;

					switch(op2){

						case 1:{
							cout<<"Ingrese su Nombre: "<<endl;
			                                cin>>nombre;

                        			        cout<<"Ingrese su Usuario: "<<endl;
                        			        cin>>usuario;
	
        			                        cout<<"Ingrese su Clave: "<<endl;
                                			cin>>clave;
			
                        			        Usuario u = Usuario(nombre, usuario, clave, 0);
                                			tabla.push_back (u);

						}break;

						case 2:{
							for(int i = 0; i < tabla.size(); i++){
								cout<<"Usuario: "<<tabla.at(i).getUsuario()<<endl
								<<"Puntaje: "<<tabla.at(i).getPuntuacion()<<endl;
								cout<<endl;
							}
						}break;

						case 3:{
							int pos;
							for(int i = 0; i < tabla.size(); i++){
                                                                cout<<"Pos("<<i<<") "<<"Usuario: "<<tabla.at(i).getUsuario()<<endl;
								cout<<endl;
                                                        }
							cout<<"Ingrese la posicion del usuario que desea eliminar:"<<endl;
							cin>>pos;
							tabla.erase(tabla.begin() + pos);
						}break;

					}
				

				}while(op2!=4);			
				
			}
			break;
			default:{}
			break;
		}
	}
	
	
	return 0;
}

